/*
 * XREFs of PspUnlockJobsAndProcessExclusive @ 0x140605AEC
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspAssignProcessToJob @ 0x140605664 (PspAssignProcessToJob.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     PspUnlockJobChain @ 0x140600864 (PspUnlockJobChain.c)
 */

__int64 __fastcall PspUnlockJobsAndProcessExclusive(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rcx

  v3 = *a1;
  while ( v3 )
  {
    v7 = *(_QWORD *)&a1[4 * --v3 + 2];
    if ( LOBYTE(a1[4 * v3 + 4]) )
      PspUnlockJobChain(v7, 0LL, 0);
    else
      ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
  }
  return KiLeaveGuardedRegionUnsafe(a3);
}
