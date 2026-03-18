/*
 * XREFs of RtlCreateHashTable @ 0x14016A530
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14065BDBC (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071E928 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140726F08 (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14016A550 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
