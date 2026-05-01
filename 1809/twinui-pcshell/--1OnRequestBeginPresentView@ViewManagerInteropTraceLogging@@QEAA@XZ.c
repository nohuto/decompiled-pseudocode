/*
 * XREFs of ??1OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F950
 * Callers:
 *     _ViewManagerBridge::OnRequestBeginPresentView_::_1_::dtor$0 @ 0x180233B57 (_ViewManagerBridge--OnRequestBeginPresentView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestBeginPresentView::~OnRequestBeginPresentView(
        ViewManagerInteropTraceLogging::OnRequestBeginPresentView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
