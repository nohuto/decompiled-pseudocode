/*
 * XREFs of ??1GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F848
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x180231A00 (-GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     _ViewManagerBridge::GetViewClientExtensionMapPropertyAsUInt_::_1_::dtor$1 @ 0x180231CBE (_ViewManagerBridge--GetViewClientExtensionMapPropertyAsUInt_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::~GetViewClientExtensionMapPropertyAsUInt(
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
