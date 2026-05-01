/*
 * XREFs of ?TransferToCurrentThread@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x180155CB4
 * Callers:
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::operator() @ 0x18014DA18 (_lambda_9532c6789f8817c10f052c0604d56f68_--operator().c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x180156124 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180035704 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 */

_QWORD *__fastcall CAppViewManagerTelemetry::SwitchAsyncWorker::TransferToCurrentThread(__int64 a1, _QWORD *a2)
{
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a2,
    a1,
    **(_DWORD **)(a1 + 48) == 1);
  *a2 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  return a2;
}
