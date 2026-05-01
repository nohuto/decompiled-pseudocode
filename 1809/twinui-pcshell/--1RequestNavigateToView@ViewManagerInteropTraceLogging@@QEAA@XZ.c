/*
 * XREFs of ??1RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180211B84
 * Callers:
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$0 @ 0x18021D2E4 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RequestNavigateToView::~RequestNavigateToView(
        ViewManagerInteropTraceLogging::RequestNavigateToView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
