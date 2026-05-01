/*
 * XREFs of ??1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180055694
 * Callers:
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$0 @ 0x1800E7E2E (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::ShowViewAsyncWorker::~ShowViewAsyncWorker(
        CAppViewManagerTelemetry::ShowViewAsyncWorker *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::ShowViewAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
