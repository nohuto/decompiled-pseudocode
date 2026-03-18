/*
 * XREFs of PfTAccessTracingStart @ 0x14059E334
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140596560 (PfpPowerActionStartScenarioTracing.c)
 *     PfGetCompletedTrace @ 0x14066AF34 (PfGetCompletedTrace.c)
 *     PfTStart @ 0x14077B7C8 (PfTStart.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmGetDefaultPagePriority @ 0x1400D4884 (MmGetDefaultPagePriority.c)
 *     MmSetAccessLogging @ 0x14017E6B4 (MmSetAccessLogging.c)
 *     MmEnablePeriodicAccessClearing @ 0x14059E3E4 (MmEnablePeriodicAccessClearing.c)
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
