/*
 * XREFs of ExNotifyCallback @ 0x1400FA670
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 *     PnpWinlogonExternalDmaNotification @ 0x1405B0A04 (PnpWinlogonExternalDmaNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     sub_1406AD10C @ 0x1406AD10C (sub_1406AD10C.c)
 *     NtNotifyChangeSession @ 0x1406AD140 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x14072644C (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x140787D70 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x14086FDF8 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1408706E8 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408A8B60 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408B3660 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400FA688 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
