/*
 * XREFs of PfTSetTracingPriority @ 0x14057D87C
 * Callers:
 *     PfpLogEventRequest @ 0x1406E2D34 (PfpLogEventRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x1401202A8 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043CC10, 0LL);
  MmSetAccessLogging(dword_14043CC0C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043CC10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043CC10);
  KeAbPostRelease((ULONG_PTR)&qword_14043CC10);
  KeLeaveCriticalRegion();
}
