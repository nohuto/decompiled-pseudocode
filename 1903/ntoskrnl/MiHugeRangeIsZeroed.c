/*
 * XREFs of MiHugeRangeIsZeroed @ 0x1402C256C
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(int a1)
{
  return (*(_DWORD *)(qword_1404661B0 + 8 * (*(_QWORD *)&a1 & 0x3FFFFLL)) & 0x3FFFFLL) != 1;
}
