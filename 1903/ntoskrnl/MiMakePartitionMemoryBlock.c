/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x14089CB84
 * Callers:
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x1402EB9D8 (MiUpdatePartitionMemory.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCreateNodeLists @ 0x1407504FC (MiCreateNodeLists.c)
 *     MiConvertInitialMemoryBlock @ 0x140750A14 (MiConvertInitialMemoryBlock.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int16 *v8; // rsi
  int v9; // ebx
  _DWORD *PoolWithTag; // rax
  void *v11; // rdi
  _QWORD *j; // rbx
  _QWORD *v13; // rcx
  _QWORD **v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rbx
  _QWORD v19[4]; // [rsp+28h] [rbp-39h] BYREF
  __int16 *v20[7]; // [rsp+48h] [rbp-19h] BYREF
  __int16 *v21[7]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
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
    MiActOnPartitionNodePages(v5, 5u, v20);
  }
  v8 = v20[5];
  if ( v20[5] )
  {
    v9 = (int)v20[4];
    if ( v20[4] <= (__int16 *)0x7FFFFFFFFFFFFFFLL )
    {
      *(_OWORD *)&v19[1] = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((__int64)v20[4] + 1), 0x6C4D6D4Du);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v9;
        j = 0LL;
        *((_QWORD *)PoolWithTag + 1) = v8;
        v13 = *(_QWORD **)(a1 + 24);
        v21[6] = (__int16 *)PoolWithTag;
        while ( v13 )
        {
          j = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( j )
        {
          v14 = (_QWORD **)j[1];
          v15 = (__int64)j;
          v16 = j;
          if ( v14 )
          {
            v17 = *v14;
            for ( j = (_QWORD *)j[1]; v17; v17 = (_QWORD *)*v17 )
              j = v17;
          }
          else
          {
            while ( 1 )
            {
              j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !j || (_QWORD *)*j == v16 )
                break;
              v16 = j;
            }
          }
          MiActOnPartitionNodePages(v15, 6u, v21);
        }
        v19[1] = MiConvertInitialMemoryBlock(a1, (__int64)v11);
        v18 = v19[1];
        ExFreePoolWithTag(v11, 0);
        if ( v18 )
          v19[2] = MiCreateNodeLists(a1, v18);
      }
      MiUpdatePartitionMemory(a1, (__int64)v19);
    }
  }
}
