/*
 * XREFs of ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107D50
 * Callers:
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$0 @ 0x180109106 (_CAppViewManager--ConsolidateView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppViewManagerTelemetry::ConsolidateView::~ConsolidateView(
        CAppViewManagerTelemetry::ConsolidateView *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::ConsolidateView::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
