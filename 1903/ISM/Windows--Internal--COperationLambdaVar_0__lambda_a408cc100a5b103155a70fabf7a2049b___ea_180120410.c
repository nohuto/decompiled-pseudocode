/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::Run @ 0x180120410
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a408cc100a5b103155a70fabf7a2049b_::operator() @ 0x18011A210 (_lambda_a408cc100a5b103155a70fabf7a2049b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_a408cc100a5b103155a70fabf7a2049b__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 56);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a408cc100a5b103155a70fabf7a2049b_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
