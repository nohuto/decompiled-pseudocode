/*
 * XREFs of RtlLookupEntryHashTable @ 0x180067260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800672AC @ 0x1800672AC (sub_1800672AC.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v3; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v6;
  if ( Context )
    v3 = Context;
  sub_1800672AC(HashTable, v3, Signature);
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->PrevLinkage->Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->ChainHead == result || result->Signature != Signature )
    return 0LL;
  return result;
}
