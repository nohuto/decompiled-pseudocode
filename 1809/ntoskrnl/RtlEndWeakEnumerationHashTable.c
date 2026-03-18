/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1402EFBB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x14012F740 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
