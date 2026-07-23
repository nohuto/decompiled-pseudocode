/*
 * XREFs of PfTAccessTracingCleanup @ 0x14056698C
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140567844 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x14064CA80 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     MmSetAccessLogging @ 0x1401202A8 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x1405670A4 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x140567100 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // r14
  volatile signed __int64 *v7; // rsi
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v9; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  dword_1404D85E8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&stru_1404D8600);
  while ( v9 )
  {
    p_Next = &v9->Next;
    v9 = v9->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, &PfKernelGlobals, 1LL);
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
}
