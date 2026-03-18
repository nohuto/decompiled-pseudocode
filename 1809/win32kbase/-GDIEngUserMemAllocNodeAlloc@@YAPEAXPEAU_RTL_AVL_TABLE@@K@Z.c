/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C0085AF0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 */

PVOID __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return PALLOCMEM2(ByteSize, 1634555207LL, 0);
}
