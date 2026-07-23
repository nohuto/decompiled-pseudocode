/*
 * XREFs of RtlInitStrongEnumerationHashTable @ 0x1800673E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x1800674FC (RtlpPopulateContext.c)
 */

BOOLEAN __cdecl RtlInitStrongEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  _LIST_ENTRY *v3; // rax
  _LIST_ENTRY *v5; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(HashTable, &v5, 0LL);
  Enumerator->HashEntry.Linkage.Blink = 0LL;
  Enumerator->HashEntry.Signature = 0LL;
  *(_QWORD *)&Enumerator->BucketIndex = 0LL;
  v3 = v5;
  Enumerator->ChainHead = v5;
  Enumerator->HashEntry.Linkage.Flink = v3;
  return 1;
}
