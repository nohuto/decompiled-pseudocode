/*
 * XREFs of RtlGetNextEntryHashTable @ 0x180080BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // r9
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v5; // rdx

  Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)Context->PrevLinkage->Flink;
  result = *Flink;
  if ( *Flink == (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v5 = *Flink;
    do
    {
      result = v5;
      if ( v5->Signature )
        break;
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v5;
      v5 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v5->Linkage.Flink;
    }
    while ( v5 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = (_LIST_ENTRY *)Flink;
  return result;
}
