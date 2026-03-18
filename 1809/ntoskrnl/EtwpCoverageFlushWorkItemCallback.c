/*
 * XREFs of EtwpCoverageFlushWorkItemCallback @ 0x140684760
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpCoverageFlushPending @ 0x140684830 (EtwpCoverageFlushPending.c)
 *     EtwpCoverageReset @ 0x1408B6A48 (EtwpCoverageReset.c)
 */

_QWORD *__fastcall EtwpCoverageFlushWorkItemCallback(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di

  *(_DWORD *)(EtwpCoverageNonPagedContext + 12) = 0;
  if ( (a1[9] & 1) != 0 )
    EtwpCoverageReset(a1, 4LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(*(_QWORD *)a1 + 16LL) >= a1[7] )
    EtwpCoverageFlushPending(a1);
  EtwpCoverageLockOwner = 0LL;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
