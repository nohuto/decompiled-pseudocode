/*
 * XREFs of NtAddAtom @ 0x140913E30
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406CE400 (NtAddAtomEx.c)
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
