/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x1408618BC
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x1402D2DC0 (MiUpdatePartitionMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiCreateNodeLists @ 0x14072C620 (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x14075C9E8 (MiConvertInitialMemoryBlock.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  unsigned __int16 *v8; // r14
  int v9; // ebx
  _DWORD *PoolWithTag; // rax
  void *v11; // rdi
  _QWORD *k; // rbx
  _QWORD *j; // rax
  _QWORD **v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  unsigned __int16 *v18; // rbx
  unsigned __int16 *v19[7]; // [rsp+28h] [rbp-19h] BYREF
  unsigned __int16 *v20[7]; // [rsp+60h] [rbp+1Fh] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v19, 0, sizeof(v19));
  v2 = *(_QWORD **)(a1 + 24);
  i = 0LL;
  while ( v2 )
  {
    i = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( i )
  {
    v4 = (_QWORD **)i[1];
    v5 = (__int64)i;
    v6 = i;
    if ( v4 )
    {
      v7 = *v4;
      for ( i = (_QWORD *)i[1]; v7; v7 = (_QWORD *)*v7 )
        i = v7;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v6 )
          break;
        v6 = i;
      }
    }
    MiActOnPartitionNodePages(v5, 5u, v19);
  }
  v8 = v19[5];
  if ( v19[5] )
  {
    v9 = (int)v19[4];
    if ( v19[4] <= (unsigned __int16 *)0x7FFFFFFFFFFFFFFLL )
    {
      *(_OWORD *)&v19[1] = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((__int64)v19[4] + 1), 0x6C4D6D4Du);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v9;
        k = 0LL;
        v20[6] = (unsigned __int16 *)PoolWithTag;
        *((_QWORD *)PoolWithTag + 1) = v8;
        for ( j = *(_QWORD **)(a1 + 24); j; j = (_QWORD *)*j )
          k = j;
        while ( k )
        {
          v14 = (_QWORD **)k[1];
          v15 = (__int64)k;
          v16 = k;
          if ( v14 )
          {
            v17 = *v14;
            for ( k = (_QWORD *)k[1]; v17; v17 = (_QWORD *)*v17 )
              k = v17;
          }
          else
          {
            while ( 1 )
            {
              k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !k || (_QWORD *)*k == v16 )
                break;
              v16 = k;
            }
          }
          MiActOnPartitionNodePages(v15, 6u, v20);
        }
        v19[1] = (unsigned __int16 *)MiConvertInitialMemoryBlock(a1, (__int64)v11);
        v18 = v19[1];
        ExFreePoolWithTag(v11, 0);
        if ( v18 )
          v19[2] = (unsigned __int16 *)MiCreateNodeLists(a1, (__int64)v18);
      }
      MiUpdatePartitionMemory(a1, (__int64)v19);
    }
  }
}
