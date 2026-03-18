/*
 * XREFs of PfTAccessTracingCleanup @ 0x14059E204
 * Callers:
 *     PfpPowerActionStartScenarioTracing @ 0x140596614 (PfpPowerActionStartScenarioTracing.c)
 *     PfTTraceListAdd @ 0x1406581A0 (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     MmGetDefaultPagePriority @ 0x140097564 (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x140098114 (MmFreeAccessPfnBuffer.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14017DFC4 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1401CBA70 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x14059E2FC (PfTAccessTracingInitialize.c)
 *     MmEnablePeriodicAccessClearing @ 0x14059E404 (MmEnablePeriodicAccessClearing.c)
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
  dword_1405039E8 = 0;
  ExWaitForRundownProtectionRelease(&RunRef);
  v9 = RtlpInterlockedFlushSList(&ListHead);
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
