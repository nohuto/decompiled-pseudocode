/*
 * XREFs of PopAvlAllocatePowerRequestStats @ 0x1406D0700
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopAvlAllocatePowerRequestStats(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x54515750u);
}
