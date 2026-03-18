/*
 * XREFs of RtlAddAtomToAtomTable @ 0x1406EB200
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x14001C400 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __stdcall RtlAddAtomToAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTable, AtomName, Atom, 0);
}
