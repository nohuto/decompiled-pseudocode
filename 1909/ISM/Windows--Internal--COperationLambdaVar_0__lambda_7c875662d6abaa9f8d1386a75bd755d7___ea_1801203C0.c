/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run @ 0x1801203C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator() @ 0x18011A008 (_lambda_7c875662d6abaa9f8d1386a75bd755d7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_7c875662d6abaa9f8d1386a75bd755d7_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
