/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1801F5310
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_48084b1ec6f75312154089ee08312ce7_::operator() @ 0x1801F009C (_lambda_48084b1ec6f75312154089ee08312ce7_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_48084b1ec6f75312154089ee08312ce7_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
