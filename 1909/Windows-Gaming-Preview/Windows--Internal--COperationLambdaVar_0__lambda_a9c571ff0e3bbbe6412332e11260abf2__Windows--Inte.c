/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x18001ED80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C864 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_a9c571ff0e3bbbe6412332e11260abf2__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator()(
                           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
