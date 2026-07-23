/*
 * XREFs of RtlpLockAtomTable @ 0x18005B888
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18005B0C0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18005B1C0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005B3CC (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x18005B5E0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x180088AF0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x180088CA0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E8950 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
