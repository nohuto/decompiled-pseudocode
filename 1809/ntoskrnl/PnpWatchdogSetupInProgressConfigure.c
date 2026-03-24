/*
 * XREFs of PnpWatchdogSetupInProgressConfigure @ 0x14073C140
 * Callers:
 *     PnpWatchdogSetupInProgressCallback @ 0x140832D30 (PnpWatchdogSetupInProgressCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1409C9F5C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401BA3F0 (ZwNotifyChangeKey.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140832C94 (PnpUpdateSetupInProgressConfiguration.c)
 */

void __fastcall PnpWatchdogSetupInProgressConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( PnpSetupOOBEInProgress || PnpSetupInProgress )
  {
    v3 = ZwNotifyChangeKey(
           KeyHandle,
           0LL,
           PnpWatchdogSetupInProgressWorkItem,
           (PVOID)1,
           &IoStatusBlock,
           4u,
           0,
           0LL,
           0,
           1u) < 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
    PnpUpdateSetupInProgressConfiguration(KeyHandle);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock);
    KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v3 )
      ZwClose(KeyHandle);
  }
}
