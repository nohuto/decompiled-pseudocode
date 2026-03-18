/*
 * XREFs of PopBatteryEtwCallback @ 0x1408A9410
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140176B38 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((ULONG_PTR)&PopCB);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
}
