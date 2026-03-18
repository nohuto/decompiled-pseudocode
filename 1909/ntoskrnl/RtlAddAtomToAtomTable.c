/*
 * XREFs of RtlAddAtomToAtomTable @ 0x1406EC4C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14001C7F0 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __stdcall RtlAddAtomToAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTable, AtomName, Atom, 0);
}
