/*
 * XREFs of RtlExpandHashTable @ 0x180086440
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180067480 @ 0x180067480 (sub_180067480.c)
 *     sub_18006FB9C @ 0x18006FB9C (sub_18006FB9C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  ULONG TableSize; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  PVOID *v7; // rdi
  ULONG Pivot; // edx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r10
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  ULONG DivisorMask; // edx
  PVOID v21; // rax
  PVOID Directory; // r14
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
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
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap + 1, 0, 0x78uLL);
    v6 = v25;
    *v24 = Directory;
    HashTable->Directory = v24;
  }
  v7 = (PVOID *)HashTable->Directory;
  if ( !v7[v5] )
  {
    v21 = sub_18006FB9C(v6);
    if ( v21 )
    {
      v7[v5] = v21;
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
  v9 = (_QWORD *)sub_180067480((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = v9;
  v12 = (_QWORD *)(v11 + 16LL * v4);
  v12[1] = v12;
  *v12 = v12;
  v13 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 != v9 )
  {
    v14 = v9;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v16 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13
          || (v17 = (_QWORD *)v13[1], (_QWORD *)*v17 != v13)
          || (*v17 = v16, *(_QWORD *)(v16 + 8) = v17, v18 = (_QWORD *)v12[1], (_QWORD *)*v18 != v12) )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        v13[1] = v18;
        *v18 = v13;
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
