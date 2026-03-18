/*
 * XREFs of rimUserMemAllocNodeAlloc @ 0x1C0111ED0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 */

__int64 __fastcall rimUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x656D7552u);
}
