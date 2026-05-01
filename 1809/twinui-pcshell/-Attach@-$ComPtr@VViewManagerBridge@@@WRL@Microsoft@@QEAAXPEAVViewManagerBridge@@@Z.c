/*
 * XREFs of ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x1802134A4
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18020FD14 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x18022DCC0 (_lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180217900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_180217900.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewManagerBridge>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
