/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_ade65b3910699df78508c17998720da4__Windows::Internal::CNoResult_::Run @ 0x1800520E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ade65b3910699df78508c17998720da4_::operator() @ 0x18004F8D8 (_lambda_ade65b3910699df78508c17998720da4_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_ade65b3910699df78508c17998720da4__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_ade65b3910699df78508c17998720da4_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
