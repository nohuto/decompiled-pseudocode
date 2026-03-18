/*
 * XREFs of PsTerminateMinimalProcess @ 0x1408C9048
 * Callers:
 *     PspTeardownPartition @ 0x1408CB2A0 (PspTeardownPartition.c)
 *     VmTerminateMemoryProcess @ 0x1408ED040 (VmTerminateMemoryProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
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
  v6 = (volatile signed __int64 *)(BugCheckParameter1 + 184);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(BugCheckParameter1 + 184), 0LL);
  if ( !BugCheckParameter1[294] )
  {
    v5 = 33554440;
    if ( BugCheckParameter1[405] == 259 )
      BugCheckParameter1[405] = a2;
  }
  _m_prefetchw(BugCheckParameter1 + 195);
  v7 = _InterlockedOr(BugCheckParameter1 + 195, v5);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = (v5 & 0x2000000) != 0;
  if ( (v7 & 0x2000000) == 0 && result )
    return PspRundownSingleProcess((ULONG_PTR)BugCheckParameter1, 1);
  return result;
}
