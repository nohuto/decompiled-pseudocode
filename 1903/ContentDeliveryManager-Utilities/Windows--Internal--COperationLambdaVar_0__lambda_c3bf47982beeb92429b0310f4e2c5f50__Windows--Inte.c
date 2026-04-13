/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c3bf47982beeb92429b0310f4e2c5f50__Windows::Internal::CNoResult_::Run @ 0x180052020
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator() @ 0x1800505A8 (_lambda_c3bf47982beeb92429b0310f4e2c5f50_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_c3bf47982beeb92429b0310f4e2c5f50__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
