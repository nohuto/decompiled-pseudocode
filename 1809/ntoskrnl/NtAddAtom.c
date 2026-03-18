/*
 * XREFs of NtAddAtom @ 0x1408D7160
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406AC980 (NtAddAtomEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx((char *)AtomName, *(size_t *)&AtomNameLength, Atom, 0);
}
