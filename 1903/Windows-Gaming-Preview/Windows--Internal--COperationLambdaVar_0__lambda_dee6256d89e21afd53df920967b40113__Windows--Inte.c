/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113__Windows::Internal::CNoResult_::Run @ 0x18003AC90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dee6256d89e21afd53df920967b40113_::operator() @ 0x18003A434 (_lambda_dee6256d89e21afd53df920967b40113_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_dee6256d89e21afd53df920967b40113__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_dee6256d89e21afd53df920967b40113_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
