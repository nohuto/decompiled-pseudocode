/*
 * XREFs of PspLockJobAssignment @ 0x140615550
 * Callers:
 *     PspLockJobChain @ 0x14061523C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x14068917C (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14068A530 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
