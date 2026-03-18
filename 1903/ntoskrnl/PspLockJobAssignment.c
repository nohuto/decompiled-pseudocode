/*
 * XREFs of PspLockJobAssignment @ 0x140613A40
 * Callers:
 *     PspLockJobChain @ 0x14061372C (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140696FC0 (PspGetJobLockHierarchyForDeletion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
