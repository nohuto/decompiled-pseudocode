/*
 * XREFs of RtlDereferenceAtomTable @ 0x140126618
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1405DF038 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406AD360 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(struct _RTL_ATOM_TABLE *a1)
{
  return RtlDestroyAtomTable(a1);
}
