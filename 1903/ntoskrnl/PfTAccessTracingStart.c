/*
 * XREFs of PfTAccessTracingStart @ 0x14059E354
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140596614 (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14017DFC4 (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x14059E404 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // rbp
  int v8; // esi
  bool v9; // zf
  int DefaultPagePriority; // eax
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = ~a3;
  v9 = (v8 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v8;
  if ( v9 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v11) = 1;
    MmEnablePeriodicAccessClearing(v11);
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
