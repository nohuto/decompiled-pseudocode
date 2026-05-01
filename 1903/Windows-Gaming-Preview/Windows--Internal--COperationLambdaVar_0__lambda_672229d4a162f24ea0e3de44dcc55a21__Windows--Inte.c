/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_672229d4a162f24ea0e3de44dcc55a21__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180030470
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_672229d4a162f24ea0e3de44dcc55a21_::operator() @ 0x180029364 (_lambda_672229d4a162f24ea0e3de44dcc55a21_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_672229d4a162f24ea0e3de44dcc55a21__Windows::Internal::CBasicResult_unsigned_char_0___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_672229d4a162f24ea0e3de44dcc55a21_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
