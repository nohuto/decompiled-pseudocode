/*
 * XREFs of ??1SplitView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18012DE1C
 * Callers:
 *     _CAppViewManager::SplitView_::_1_::dtor$0 @ 0x180132C86 (_CAppViewManager--SplitView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002B088 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::SplitView::~SplitView(CAppViewManagerTelemetry::SplitView *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::SplitView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
