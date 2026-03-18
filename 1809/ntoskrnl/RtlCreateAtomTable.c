/*
 * XREFs of RtlCreateAtomTable @ 0x1406963D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1401112B0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __stdcall RtlCreateAtomTable(ULONG TableSize, PRTL_ATOM_TABLE *AtomTable)
{
  return RtlCreateAtomTableEx(TableSize, 0, AtomTable);
}
