/*
 * XREFs of RtlContractHashTable @ 0x18007FF50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180067480 @ 0x180067480 (sub_180067480.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  ULONG TableSize; // edx
  ULONG Pivot; // eax
  ULONG DivisorMask; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *j; // r8
  _QWORD *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // r8
  PVOID *Directory; // rsi
  __int64 v17; // rbx

  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  sub_180067480((__int64)HashTable, TableSize - 1);
  v7 = (_QWORD *)sub_180067480((__int64)HashTable, HashTable->Pivot);
  --HashTable->TableSize;
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*v7 != v7 )
    --HashTable->NonEmptyBuckets;
  for ( i = v7; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 )
      goto LABEL_19;
    v10 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_19;
    *v6 = v10;
    *(_QWORD *)(v10 + 8) = v6;
    for ( j = (_QWORD *)*i; j != v7; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v12 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
LABEL_19:
      __fastfail(3u);
    *v9 = v12;
    v9[1] = i;
    v12[1] = v9;
  }
  v13 = HashTable->TableSize + 128;
  _BitScanReverse(&v14, v13);
  v15 = v14 - 7;
  if ( 1 << v14 == v13 )
  {
    Directory = (PVOID *)HashTable->Directory;
    v17 = (unsigned int)v15;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v15]);
    Directory[v17] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
