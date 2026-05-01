/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001EDC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator() @ 0x18001BE9C (_lambda_2bb0be94c8b34b0b06b3ace075c36ca6_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_2bb0be94c8b34b0b06b3ace075c36ca6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_2bb0be94c8b34b0b06b3ace075c36ca6_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
