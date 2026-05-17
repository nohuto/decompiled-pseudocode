/*
 * XREFs of RtlpLockAtomTable @ 0x180073658
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180072E60 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007319C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1800733B0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008B5A0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008B660 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB850 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
