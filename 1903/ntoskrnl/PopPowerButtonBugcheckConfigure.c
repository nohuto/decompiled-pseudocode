/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14075AF40
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x1408B4420 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140A06E0C (PopInitializePowerButtonHold.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonBugcheckConfiguration @ 0x14018BD40 (PopQueryPowerButtonBugcheckConfiguration.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401C2350 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  char v4; // bl
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v6; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v6.Pointer = 0LL;
  v6.Information = 0LL;
  v7 = 0;
  v3 = ZwNotifyChangeKey(KeyHandle, 0LL, PopPowerButtonBugcheckWatchWorkItem, (PVOID)1, &v6, 4u, 0, 0LL, 0, 1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  if ( PopQueryPowerButtonBugcheckConfiguration(KeyHandle, &v7) >= 0 )
    PopPowerButtonBugcheckConfig = (v7 != 0) + 1;
  else
    PopPowerButtonBugcheckConfig = 0;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(KeyHandle);
  return result;
}
