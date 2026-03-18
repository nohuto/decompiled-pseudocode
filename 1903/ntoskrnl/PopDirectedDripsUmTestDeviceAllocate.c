/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x1408B9060
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopDirectedDripsUmTestDeviceAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x4D554444u);
}
