/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180079950
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800798C0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180088000 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180079C30 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
