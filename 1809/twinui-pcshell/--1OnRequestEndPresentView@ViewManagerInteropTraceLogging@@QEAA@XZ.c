/*
 * XREFs of ??1OnRequestEndPresentView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F9A8
 * Callers:
 *     _ViewManagerBridge::OnRequestEndPresentView_::_1_::dtor$0 @ 0x180233D1A (_ViewManagerBridge--OnRequestEndPresentView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRequestEndPresentView::~OnRequestEndPresentView(
        ViewManagerInteropTraceLogging::OnRequestEndPresentView *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestEndPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
