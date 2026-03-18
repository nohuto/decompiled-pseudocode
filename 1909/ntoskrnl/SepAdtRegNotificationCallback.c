/*
 * XREFs of SepAdtRegNotificationCallback @ 0x1408E2FB0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeKey @ 0x14062BE10 (NtNotifyChangeKey.c)
 *     SepAdtInitializeBounds @ 0x140778A58 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140778ADC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x140778B3C (SepAdtInitializeCrashOnFail.c)
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
