/*
 * XREFs of RtlLookupEntryHashTable @ 0x1400DD7B0
 * Callers:
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14065D1F4 (SepFindMatchingCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x14065D524 (SepFindMatchingLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1408A4A10 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1408A54D4 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // r9
  unsigned int Shift; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _QWORD *Directory; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v10; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v11; // r8
  _QWORD *v12; // rdx
  ULONG_PTR v13; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  unsigned int v15; // ecx
  char v16; // [rsp+0h] [rbp-28h] BYREF

  v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v16;
  Shift = HashTable->Shift;
  if ( Context )
    v4 = Context;
  v7 = (69069 * ((unsigned int)Signature >> Shift) + 1) & 0xFFFF0000 | ((1103515245 * ((unsigned int)Signature >> Shift)
                                                                       + 12345) >> 16);
  v8 = v7 & HashTable->DivisorMask;
  if ( v8 < HashTable->Pivot )
    v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
  Directory = HashTable->Directory;
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v15, v8 + 128);
    v8 = (v8 + 128) ^ (1 << v15);
    Directory = (_QWORD *)Directory[v15 - 7];
  }
  v10 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&Directory[2 * v8];
  v11 = v10;
  v12 = *v10;
  if ( *v10 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v10 )
  {
    do
    {
      v13 = v12[2];
      if ( v13 && v13 >= Signature )
        break;
      v11 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v12;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 != v10 );
  }
  v4->ChainHead = (_LIST_ENTRY *)v10;
  v4->PrevLinkage = (_LIST_ENTRY *)v11;
  v4->Signature = Signature;
  result = *v11;
  if ( v10 == (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v11 || result->Signature != Signature )
    return 0LL;
  return result;
}
