/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows::Internal::CHSTRINGResult_::Run @ 0x180018B50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_91da0398866e2bc6f1173300c449b4ce_::operator() @ 0x18000E5D4 (_lambda_91da0398866e2bc6f1173300c449b4ce_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_91da0398866e2bc6f1173300c449b4ce__Windows::Internal::CHSTRINGResult_::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_91da0398866e2bc6f1173300c449b4ce_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
