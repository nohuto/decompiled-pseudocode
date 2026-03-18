/*
 * XREFs of ExNotifyCallback @ 0x1400F2CE0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 *     PnpWinlogonExternalDmaNotification @ 0x1405B0A04 (PnpWinlogonExternalDmaNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     sub_1406A3ABC @ 0x1406A3ABC (sub_1406A3ABC.c)
 *     NtNotifyChangeSession @ 0x1406A3AF0 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x1407282EC (PopNotifyCallbacksPreSleep.c)
 *     PopDispatchCallback @ 0x14078A1D0 (PopDispatchCallback.c)
 *     PnprLockPagesForReplace @ 0x14086F4F8 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x14086FDE8 (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1408A83C0 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1408B2F30 (PopDispatchAcDcCallback.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400F2CF8 (ExNotifyWithProcessing.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  ExNotifyWithProcessing(CallbackObject, Argument1, Argument2, 0LL);
}
