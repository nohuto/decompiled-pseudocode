/*
 * XREFs of PspUnlockJobAssignment @ 0x1406139F0
 * Callers:
 *     PspLockJobChain @ 0x14061372C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140696FC0 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  char result; // al

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  result = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
    return KiLeaveGuardedRegionUnsafe(a1);
  return result;
}
