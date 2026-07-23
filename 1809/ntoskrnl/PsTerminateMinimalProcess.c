/*
 * XREFs of PsTerminateMinimalProcess @ 0x14088C4F4
 * Callers:
 *     PspTeardownPartition @ 0x14088E690 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x1408B17C0 (VmTerminateMemoryProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 */

bool __fastcall PsTerminateMinimalProcess(_DWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // ebp
  volatile signed __int64 *v6; // rsi
  signed __int32 v7; // r14d
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  v5 = 8;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(BugCheckParameter1 + 182);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 182), 0LL);
  if ( !BugCheckParameter1[294] )
  {
    v5 = 33554440;
    if ( BugCheckParameter1[393] == 259 )
      BugCheckParameter1[393] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 193);
  v7 = _InterlockedOr(BugCheckParameter1 + 193, v5);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((__int64)BugCheckParameter1, 1);
  return result;
}
