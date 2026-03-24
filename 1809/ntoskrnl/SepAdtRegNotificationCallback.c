/*
 * XREFs of SepAdtRegNotificationCallback @ 0x140736A40
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x1405CF350 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x140736AA4 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140736B28 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140736B84 (SepAdtInitializePrivilegeAuditing.c)
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
