/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x1408B9060
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopDirectedDripsUmTestDeviceAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x4D554444u);
}
