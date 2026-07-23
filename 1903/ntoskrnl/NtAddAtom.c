/*
 * XREFs of NtAddAtom @ 0x1409143D0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406CF2F0 (NtAddAtomEx.c)
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
