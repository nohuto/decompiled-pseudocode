/*
 * XREFs of NtAddAtom @ 0x1408D8400
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406ADC00 (NtAddAtomEx.c)
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
