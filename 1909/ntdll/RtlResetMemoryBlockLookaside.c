/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1800E8A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     InitializeSListHead @ 0x18006F2CC (InitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x1800E8A80 (RtlResetMemoryZone.c)
 */

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int v3; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    InitializeSListHead((PSLIST_HEADER)(32LL * i + a1 + 48));
  v3 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v3;
}
