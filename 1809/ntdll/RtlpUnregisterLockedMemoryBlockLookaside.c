/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180079990
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180079860 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180087FA0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180079C30 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryBlockLookaside(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 (__fastcall **v5)(); // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryBlockLookasideLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v5 = RtlpMemoryBlockLookasideCriticalRoutines;
    v6 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v5++);
      --v6;
    }
    while ( v6 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
