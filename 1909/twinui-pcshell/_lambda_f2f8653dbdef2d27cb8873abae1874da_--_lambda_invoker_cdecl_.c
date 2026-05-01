/*
 * XREFs of _lambda_f2f8653dbdef2d27cb8873abae1874da_::_lambda_invoker_cdecl_ @ 0x1802A2400
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x180289AF8 (-Attach@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x18028B9FC (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1802A660C (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f2f8653dbdef2d27cb8873abae1874da_::_lambda_invoker_cdecl_(__int64 Parameter)
{
  ViewManagerBridge *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::Attach((__int64 *)&v2, Parameter);
  ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(v2);
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)&v2);
  return 0LL;
}
