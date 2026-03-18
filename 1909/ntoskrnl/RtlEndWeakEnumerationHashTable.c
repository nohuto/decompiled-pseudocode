/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x14030E2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x140132B00 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
