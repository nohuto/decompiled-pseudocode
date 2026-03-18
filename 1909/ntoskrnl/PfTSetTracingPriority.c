/*
 * XREFs of PfTSetTracingPriority @ 0x1405AC70C
 * Callers:
 *     PfpLogEventRequest @ 0x14072A4AC (PfpLogEventRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmSetAccessLogging @ 0x14017E6B4 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140467310, 0LL);
  MmSetAccessLogging(dword_14046730C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140467310, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140467310);
  KeAbPostRelease((ULONG_PTR)&qword_140467310);
  KeLeaveCriticalRegion();
}
