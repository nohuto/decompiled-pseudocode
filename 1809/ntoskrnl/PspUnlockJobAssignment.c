/*
 * XREFs of PspUnlockJobAssignment @ 0x1406008EC
 * Callers:
 *     PspLockJobChain @ 0x1406007CC (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140605664 (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1406066F0 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobAssignment(__int64 a1)
{
  __int64 result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  result = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
    return KiLeaveGuardedRegionUnsafe(a1);
  return result;
}
