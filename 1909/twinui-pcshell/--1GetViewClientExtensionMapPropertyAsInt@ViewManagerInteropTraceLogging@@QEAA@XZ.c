/*
 * XREFs of ??1GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A3F38
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x1802A5F30 (-GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEA.c)
 *     _ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt_::_1_::dtor$1 @ 0x1802A61FA (_ViewManagerBridge--GetViewClientExtensionMapPropertyAsInt_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::~GetViewClientExtensionMapPropertyAsInt(
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
