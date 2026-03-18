/*
 * XREFs of RtlCreateAtomTable @ 0x1406BB9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14010AEA0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __stdcall RtlCreateAtomTable(ULONG TableSize, PRTL_ATOM_TABLE *AtomTable)
{
  return RtlCreateAtomTableEx(TableSize, 0, AtomTable);
}
