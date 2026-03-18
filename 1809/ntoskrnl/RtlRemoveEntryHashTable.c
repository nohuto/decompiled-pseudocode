/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1400D9C40
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D99A0 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405DF038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405DF178 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408A3DDC (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4324 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1408A4ECC (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x1400D9D20 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned __int64 Signature; // r8
  struct _LIST_ENTRY *Flink; // r9
  struct _LIST_ENTRY *Blink; // rax

  Signature = Entry->Signature;
  --HashTable->NumEntries;
  Flink = Entry->Linkage.Flink;
  Blink = Entry->Linkage.Blink;
  if ( Entry->Linkage.Flink == Blink )
  {
    --HashTable->NonEmptyBuckets;
    Blink = Entry->Linkage.Blink;
    Flink = Entry->Linkage.Flink;
  }
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Blink != Entry || (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Blink->Flink != Entry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Context && !Context->ChainHead )
    RtlpPopulateContext(HashTable, Context, Signature);
  return 1;
}
