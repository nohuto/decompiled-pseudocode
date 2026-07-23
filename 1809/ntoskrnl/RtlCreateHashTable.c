/*
 * XREFs of RtlCreateHashTable @ 0x14016A650
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14065CF5C (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071FBA8 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140728188 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14016A670 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
