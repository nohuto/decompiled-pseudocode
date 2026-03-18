/*
 * XREFs of ExNotifyCallback @ 0x14008E560
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056C5F0 (PopUnlockAfterSleepWorker.c)
 *     PnpWinlogonExternalDmaNotification @ 0x140582044 (PnpWinlogonExternalDmaNotification.c)
 *     sub_1405A23DC @ 0x1405A23DC (sub_1405A23DC.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406356A0 (AlpcpCompleteDispatchMessage.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406DEFAC (PopNotifyCallbacksPreSleep.c)
 *     NtNotifyChangeSession @ 0x14071B8D0 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x140761330 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x140835460 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140835D50 (PnprUnlockPagesForReplace.c)
 *     PopNotifyLidStateChange @ 0x14086C1F0 (PopNotifyLidStateChange.c)
 *     PopDispatchAcDcCallback @ 0x1408763B0 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14008E578 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
