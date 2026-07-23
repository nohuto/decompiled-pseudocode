/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180073E30
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180073DA0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180084050 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180074110 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
