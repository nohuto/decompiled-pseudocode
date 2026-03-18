/*
 * XREFs of RtlCreateAtomTable @ 0x1406B71F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14010AA70 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __stdcall RtlCreateAtomTable(ULONG TableSize, PRTL_ATOM_TABLE *AtomTable)
{
  return RtlCreateAtomTableEx(TableSize, 0, AtomTable);
}
