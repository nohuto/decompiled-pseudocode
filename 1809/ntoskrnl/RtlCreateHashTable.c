/*
 * XREFs of RtlCreateHashTable @ 0x14016A550
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14065BD9C (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071E908 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140726EE8 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14016A570 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
