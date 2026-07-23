/*
 * XREFs of RtlRemoveEntryHashTable @ 0x1800781E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800672AC @ 0x1800672AC (sub_1800672AC.c)
 */

BOOLEAN __cdecl RtlRemoveEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  ULONG_PTR Signature; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // rax

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
    sub_1800672AC(HashTable, (__int64)Context, Signature);
  return 1;
}
