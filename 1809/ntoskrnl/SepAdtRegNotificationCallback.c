/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140737C30
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1405D0350 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x140737C94 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140737D18 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140737D74 (SepAdtInitializePrivilegeAuditing.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}
