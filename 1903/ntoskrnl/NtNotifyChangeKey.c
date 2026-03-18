/*
 * XREFs of NtNotifyChangeKey @ 0x140627FC0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406E4930 (ExpWatchProductTypeWork.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407755B8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x1408E37B0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x14090AB30 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A0A3AC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x14062B6E0 (NtNotifyChangeMultipleKeys.c)
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
