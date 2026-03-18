/*
 * XREFs of RtlDereferenceAtomTable @ 0x14011EF0C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406C7580 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(struct _RTL_ATOM_TABLE *a1)
{
  return RtlDestroyAtomTable(a1);
}
