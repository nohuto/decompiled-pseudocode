/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x14030E880
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x140086080 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
