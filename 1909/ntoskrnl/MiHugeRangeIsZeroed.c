/*
 * XREFs of MiHugeRangeIsZeroed @ 0x1402C22CC
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_140465EB0 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
