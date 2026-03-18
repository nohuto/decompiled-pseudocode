/*
 * XREFs of NtNotifyChangeKey @ 0x14062BE10
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E5580 (ExpWatchProductTypeWork.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140778B98 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x1408E2FB0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x14090A590 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A8D8 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 */

NTSTATUS __stdcall NtNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN Asynchroneous,
        PVOID ChangeBuffer,
        ULONG Length,
        BOOLEAN WatchSubtree)
{
  return NtNotifyChangeMultipleKeys(
           KeyHandle,
           0,
           0LL,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           CompletionFilter,
           Asynchroneous,
           ChangeBuffer,
           Length,
           WatchSubtree);
}
