#include <iostream>

using namespace std;

void countdown(int n);

int main(void)
{
	countdown(4);

	return 0;
}

void countdown(int n)
{
	cout << "Counting down.... " << n << "(n at address: " << &n << ")" << endl;	   	//statement1
	if(n > 0)
		countdown(n-1);
	cout << n << ": Kadoom" << "(n at address: "<< &n << ")" << endl;			//statement2
}


