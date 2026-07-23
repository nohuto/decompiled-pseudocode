/*
 * XREFs of RtlWeaklyEnumerateEntryHashTable @ 0x1800F2290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlWeaklyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlEnumerateEntryHashTable(HashTable, Enumerator);
}
