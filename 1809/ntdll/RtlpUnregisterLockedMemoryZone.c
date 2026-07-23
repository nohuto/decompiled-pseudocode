/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180079960
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800798D0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180088010 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180079C40 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
