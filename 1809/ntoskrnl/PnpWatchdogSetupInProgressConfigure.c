/*
 * XREFs of PnpWatchdogSetupInProgressConfigure @ 0x14073D330
 * Callers:
 *     PnpWatchdogSetupInProgressCallback @ 0x140833F90 (PnpWatchdogSetupInProgressCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1409CAF5C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401BA550 (ZwNotifyChangeKey.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140833EF4 (PnpUpdateSetupInProgressConfiguration.c)
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
