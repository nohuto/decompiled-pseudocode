/*
 * XREFs of RtlCreateAtomTable @ 0x140697570
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140111340 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __stdcall RtlCreateAtomTable(ULONG TableSize, PRTL_ATOM_TABLE *AtomTable)
{
  return RtlCreateAtomTableEx(TableSize, 0, AtomTable);
}
