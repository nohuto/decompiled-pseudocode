/*
 * XREFs of RtlCreateHashTable @ 0x140157F10
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14061F890 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14074958C (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x14075C998 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140157F30 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
