/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_a9c571ff0e3bbbe6412332e11260abf2____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run @ 0x18001EBA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C878 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_a9c571ff0e3bbbe6412332e11260abf2____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()(
                           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
