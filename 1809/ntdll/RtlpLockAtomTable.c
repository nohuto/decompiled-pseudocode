/*
 * XREFs of RtlpLockAtomTable @ 0x180073668
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180072E60 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800731AC (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1800733C0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008B5B0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008B670 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB850 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
