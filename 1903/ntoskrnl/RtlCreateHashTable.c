/*
 * XREFs of RtlCreateHashTable @ 0x140157870
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14061DD74 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14074768C (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140758104 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140157890 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
