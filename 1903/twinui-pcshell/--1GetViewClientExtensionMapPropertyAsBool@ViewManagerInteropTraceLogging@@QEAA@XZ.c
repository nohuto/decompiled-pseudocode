/*
 * XREFs of ??1GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284ACC
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x1802867C0 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     _ViewManagerBridge::GetViewClientExtensionMapPropertyAsBool_::_1_::dtor$1 @ 0x180286A8E (_ViewManagerBridge--GetViewClientExtensionMapPropertyAsBool_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::~GetViewClientExtensionMapPropertyAsBool(
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
