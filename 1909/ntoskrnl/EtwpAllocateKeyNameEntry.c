/*
 * XREFs of EtwpAllocateKeyNameEntry @ 0x140196860
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpAllocateKeyNameEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x74777445u);
}
