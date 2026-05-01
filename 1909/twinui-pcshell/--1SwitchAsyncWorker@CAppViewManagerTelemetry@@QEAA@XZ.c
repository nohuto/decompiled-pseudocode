/*
 * XREFs of ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18014D388
 * Callers:
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x18014CE44 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::__lambda_9532c6789f8817c10f052c0604d56f68_ @ 0x18014CEA8 (_lambda_9532c6789f8817c10f052c0604d56f68_--__lambda_9532c6789f8817c10f052c0604d56f68_.c)
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::operator() @ 0x18014DA18 (_lambda_9532c6789f8817c10f052c0604d56f68_--operator().c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180156124 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$0 @ 0x180156442 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$0.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$1 @ 0x18015644E (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$1.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180158BC8 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$0 @ 0x180158EBC (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$0.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$3 @ 0x180158EE0 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(
        CAppViewManagerTelemetry::SwitchAsyncWorker *this)
{
  *(_QWORD *)this = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
