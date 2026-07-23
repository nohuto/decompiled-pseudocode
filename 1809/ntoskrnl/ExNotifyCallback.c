/*
 * XREFs of ExNotifyCallback @ 0x14008E480
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     PnpWinlogonExternalDmaNotification @ 0x140583044 (PnpWinlogonExternalDmaNotification.c)
 *     sub_1405A33DC @ 0x1405A33DC (sub_1405A33DC.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     PopNotifyCallbacksPreSleep @ 0x1406E022C (PopNotifyCallbacksPreSleep.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     PopDispatchCallback @ 0x140762500 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x1408366A0 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x140836F90 (PnprUnlockPagesForReplace.c)
 *     PopNotifyLidStateChange @ 0x14086D430 (PopNotifyLidStateChange.c)
 *     PopDispatchAcDcCallback @ 0x1408775F0 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14008E498 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
