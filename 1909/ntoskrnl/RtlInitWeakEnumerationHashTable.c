/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x14030E2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x1400864A0 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
