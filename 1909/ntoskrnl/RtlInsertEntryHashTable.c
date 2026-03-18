/*
 * XREFs of RtlInsertEntryHashTable @ 0x140085BC0
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 *     SepGetCachedHandlesEntry @ 0x14061FA4C (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14061FD34 (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2330 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpGetChainHead @ 0x140085CD0 (RtlpGetChainHead.c)
 *     RtlpPopulateContext @ 0x140086408 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  _LIST_ENTRY *ChainHead; // rax
  unsigned __int64 v10; // r9
  _LIST_ENTRY *v11; // r8
  _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v17; // [rsp+20h] [rbp-28h] BYREF
  _LIST_ENTRY *v18; // [rsp+28h] [rbp-20h]
  unsigned __int64 v19; // [rsp+30h] [rbp-18h]

  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  v4 = Context;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( Context )
  {
    ChainHead = Context->ChainHead;
    if ( !Context->ChainHead )
    {
      RtlpPopulateContext(HashTable, Context, Signature, Signature, v17, v18, v19);
      ChainHead = v4->ChainHead;
    }
  }
  else
  {
    v7 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                    * ((unsigned int)Signature >> HashTable->Shift)
                                                                                    + 12345) >> 16);
    v8 = v7 & HashTable->DivisorMask;
    if ( (unsigned int)v8 < HashTable->Pivot )
      v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
    ChainHead = (_LIST_ENTRY *)RtlpGetChainHead(HashTable, v8, Signature, Signature, v17, v18, v19);
    v11 = ChainHead;
    for ( i = ChainHead->Flink; i != ChainHead; i = i->Flink )
    {
      Flink = i[1].Flink;
      if ( Flink && (unsigned __int64)Flink >= v10 )
        break;
      v11 = i;
    }
    v17 = ChainHead;
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v17;
    v18 = v11;
    v19 = v10;
  }
  if ( ChainHead->Flink == ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  v14 = PrevLinkage->Flink;
  if ( PrevLinkage->Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Entry->Linkage.Blink = PrevLinkage;
  Entry->Linkage.Flink = v14;
  v14->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
