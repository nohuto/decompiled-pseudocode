/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x140829A20
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x47706E50u);
}
