/*
 * XREFs of RtlDereferenceAtomTable @ 0x14011FCBC
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C5CC4 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406C5E60 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(struct _RTL_ATOM_TABLE *a1)
{
  return RtlDestroyAtomTable(a1);
}
