/*
 * XREFs of PopPowerRequestAllocate @ 0x1406CFF00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopPowerRequestAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x6C564150u);
}
