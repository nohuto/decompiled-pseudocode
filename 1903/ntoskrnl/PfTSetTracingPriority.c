/*
 * XREFs of PfTSetTracingPriority @ 0x1405AC72C
 * Callers:
 *     PfpLogEventRequest @ 0x14072913C (PfpLogEventRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14017DFC4 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467610, 0LL);
  MmSetAccessLogging(dword_14046760C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467610);
  KeAbPostRelease((ULONG_PTR)&qword_140467610);
  KeLeaveCriticalRegion();
}
