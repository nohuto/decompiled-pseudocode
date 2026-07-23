/*
 * XREFs of PspLockJobAssignment @ 0x14060193C
 * Callers:
 *     PspLockJobChain @ 0x1406017CC (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1406076F0 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
