/*
 * XREFs of _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x18022DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x1802134A4 (-Attach@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x180215B20 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x180231DD8 (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_(__int64 Parameter)
{
  ViewManagerBridge *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::Attach((__int64 *)&v2, Parameter);
  ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(v2);
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)&v2);
  return 0LL;
}
