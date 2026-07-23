/*
 * XREFs of RtlExpandHashTable @ 0x18008C5E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x180070210 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x180077B08 (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  void **v7; // rdi
  unsigned int Pivot; // edx
  _QWORD *ChainHead; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // r10
  int v15; // eax
  unsigned int DivisorMask; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  void *Directory; // r14
  _QWORD *Heap; // rax
  _QWORD *v23; // rdi
  PVOID SecondLevelDir; // rax
  char v25; // [rsp+40h] [rbp+8h]

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = (TableSize + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v3 - 7;
  v25 = v6;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v23 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v6 = v25;
    *v23 = Directory;
    HashTable->Directory = v23;
  }
  v7 = (void **)HashTable->Directory;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v6);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = ChainHead;
  v12 = (_QWORD *)(16LL * v4 + v11);
  v12[1] = v12;
  *v12 = v12;
  v13 = (_QWORD *)*ChainHead;
  if ( (_QWORD *)*v10 != v10 )
  {
    v14 = ChainHead;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v18 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (v19 = (_QWORD *)v13[1], (_QWORD *)*v19 != v13)
          || (*v19 = v18, *(_QWORD *)(v18 + 8) = v19, v20 = (_QWORD *)v12[1], (_QWORD *)*v20 != v12) )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        v13[1] = v20;
        *v20 = v13;
        v12[1] = v13;
      }
      else
      {
        v14 = v13;
      }
      v13 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v10 == v10 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
