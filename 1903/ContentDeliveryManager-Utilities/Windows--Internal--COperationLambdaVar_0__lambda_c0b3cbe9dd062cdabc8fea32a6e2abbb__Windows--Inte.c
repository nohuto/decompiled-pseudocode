/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb__Windows::Internal::CNoResult_::Run @ 0x180018700
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_::operator() @ 0x18000C178 (_lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        void *a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_c0b3cbe9dd062cdabc8fea32a6e2abbb_::operator()(a1 + 8, a2);
  return (unsigned int)a3;
}
