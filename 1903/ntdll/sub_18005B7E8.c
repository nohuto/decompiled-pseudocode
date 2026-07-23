/*
 * XREFs of sub_18005B7E8 @ 0x18005B7E8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18005B020 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18005B120 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTable_0 @ 0x18005B32C (RtlAddAtomToAtomTable_0.c)
 *     RtlLookupAtomInAtomTable @ 0x18005B540 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x180088450 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x180088600 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E8860 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_18005B7E8(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
