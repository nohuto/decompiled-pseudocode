/*
 * XREFs of PiDcAllocateGenericTableEntry @ 0x1407620B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PiDcAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x47706E50u);
}
