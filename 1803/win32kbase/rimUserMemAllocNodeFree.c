/*
 * XREFs of rimUserMemAllocNodeFree @ 0x1C0011E40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall rimUserMemAllocNodeFree(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  Win32FreePool(Buffer);
}
