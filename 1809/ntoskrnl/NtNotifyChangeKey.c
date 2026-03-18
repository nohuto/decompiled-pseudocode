/*
 * XREFs of NtNotifyChangeKey @ 0x1405CF350
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406BF930 (ExpWatchProductTypeWork.c)
 *     SepAdtRegNotificationCallback @ 0x140736A60 (SepAdtRegNotificationCallback.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140736CE4 (SepAdtOpenRegAndSetupNotification.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD580 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1405CE180 (NtNotifyChangeMultipleKeys.c)
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
