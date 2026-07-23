/*
 * XREFs of sub_180073890 @ 0x180073890
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180073800 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800839B0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180073B70 (RtlUnlockModuleSection.c)
 */

void sub_180073890()
{
  RtlAcquireSRWLockExclusive(&stru_180166358);
  if ( !--dword_180166034 )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&stru_180166358);
}
