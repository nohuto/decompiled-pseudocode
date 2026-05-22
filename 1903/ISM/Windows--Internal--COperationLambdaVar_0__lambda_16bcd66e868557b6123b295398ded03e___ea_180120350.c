/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::Run @ 0x180120350
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16bcd66e868557b6123b295398ded03e_::operator() @ 0x180119DFC (_lambda_16bcd66e868557b6123b295398ded03e_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_16bcd66e868557b6123b295398ded03e__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_16bcd66e868557b6123b295398ded03e_::operator()((unsigned int *)(a1 + 8), a4);
  return (unsigned int)a3;
}
