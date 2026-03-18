/*
 * XREFs of PnpWatchdogBugcheckConfigure @ 0x1406EE644
 * Callers:
 *     PnpWatchdogBugcheckWatchCallback @ 0x1406EE630 (PnpWatchdogBugcheckWatchCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1409F7E94 (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401C2350 (ZwNotifyChangeKey.c)
 *     PnpQueryPnpWatchdogBugcheckConfiguration @ 0x1406EE73C (PnpQueryPnpWatchdogBugcheckConfiguration.c)
 */

NTSTATUS __fastcall PnpWatchdogBugcheckConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  int v4; // eax
  char v5; // bl
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v7; // [rsp+50h] [rbp-18h] BYREF

  v7.Pointer = 0LL;
  v7.Information = 0LL;
  v3 = ZwNotifyChangeKey(KeyHandle, 0LL, PnpWatchdogBugcheckWatchWorkItem, (PVOID)1, &v7, 4u, 0, 0LL, 0, 1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckConfigLock, 0LL);
  if ( (int)PnpQueryPnpWatchdogBugcheckConfiguration(KeyHandle) >= 0 )
    v4 = 0;
  else
    v4 = 2;
  PnpWatchdogBugcheckConfig = v4;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckConfigLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckConfigLock);
  KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckConfigLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
