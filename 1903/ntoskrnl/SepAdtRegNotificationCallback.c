/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1408E37B0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x140627FC0 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x140775478 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407754FC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14077555C (SepAdtInitializeCrashOnFail.c)
 */

NTSTATUS SepAdtRegNotificationCallback()
{
  SepAdtInitializeCrashOnFail();
  SepAdtInitializePrivilegeAuditing();
  SepAdtInitializeBounds();
  return NtNotifyChangeKey(
           SepAdtRegNotifyHandle,
           0LL,
           (PIO_APC_ROUTINE)SepAdtLsaRegWatchWorkItem,
           (PVOID)1,
           &SepAdtIoStatusBlock,
           5u,
           0,
           0LL,
           0,
           1u);
}
