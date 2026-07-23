/*
 * XREFs of ExInsertPoolTag @ 0x1400E6A34
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 * Callees:
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 */

_BOOL8 __fastcall ExInsertPoolTag(int a1, int a2, int a3, int a4, int a5)
{
  return ExpAllocateBigPool(a2, a4, a3, a1, a5) != 0;
}
