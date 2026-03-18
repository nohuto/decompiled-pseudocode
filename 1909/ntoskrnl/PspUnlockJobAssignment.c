/*
 * XREFs of PspUnlockJobAssignment @ 0x140615500
 * Callers:
 *     PspLockJobChain @ 0x14061523C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14068A530 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
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
