/*
 * XREFs of ??1GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F7C4
 * Callers:
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x180231030 (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::GetShellWindowIdForView::~GetShellWindowIdForView(
        ViewManagerInteropTraceLogging::GetShellWindowIdForView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
