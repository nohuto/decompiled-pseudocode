/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0098190
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 */

PVOID __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return PALLOCMEM2(ByteSize, 0x616D5547u, 0);
}
