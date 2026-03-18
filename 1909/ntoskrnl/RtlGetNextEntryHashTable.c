/*
 * XREFs of RtlGetNextEntryHashTable @ 0x140117530
 * Callers:
 *     SepRmReferenceFindCap @ 0x14031E824 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14061FB28 (SepFindMatchingCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x14061FE58 (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1408E19E0 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1408E2294 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  struct _LIST_ENTRY *Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // r10

  Flink = Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
  if ( Flink->Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Flink;
    do
    {
      result = v4;
      if ( v4->Signature )
        break;
      Flink = &v4->Linkage;
      v4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v4->Linkage.Flink;
    }
    while ( v4 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = Flink;
  return result;
}
