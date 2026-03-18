/*
 * XREFs of MiHotAddPartitionMemory @ 0x14089C0A0
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x14089C6D0 (MmManagePartitionInitialAddMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     RtlAreBitsClearEx @ 0x140117040 (RtlAreBitsClearEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1402E9530 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x1402EA488 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14089C580 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int64 a1, unsigned __int64 *a2, int *a3)
{
  int updated; // ebx
  int v8; // ecx
  unsigned int v9; // r13d
  unsigned __int64 v10; // r12
  __int16 *v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // esi
  _QWORD *v16; // rax
  int v17; // r12d
  _QWORD *i; // rdi
  _QWORD **v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  int v23; // eax
  _QWORD *v24; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v25[4]; // [rsp+28h] [rbp-58h] BYREF
  __int16 *v26[7]; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+C8h] [rbp+48h]

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v24 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    updated = -1073741727;
LABEL_3:
    MiFreePartitionTree((__int16 *)a1, (unsigned __int64 *)&v24, 0, 0);
    return (unsigned int)updated;
  }
  *((_QWORD *)a3 + 1) = 0LL;
  v8 = *a3;
  v9 = a3[1];
  if ( (*a3 & 1) != 0 )
  {
    v27 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x40) != 0 || (v8 & 4) != 0 )
    {
      updated = -1073741584;
      goto LABEL_3;
    }
    v27 = 0;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = *a2;
      if ( *a2 < v10 )
        break;
      v14 = a2[1];
      v10 = v14 + v13;
      if ( v14 + v13 <= v13
        || (__int16 *)((char *)v11 + v14) <= v11
        || (*a3 & 4) != 0 && ((v13 & 0x3FFFF) != 0 || (v14 & 0x3FFFF) != 0) )
      {
        break;
      }
      v11 = (__int16 *)((char *)v11 + v14);
      if ( !MiAddRangeToPartitionTree((unsigned __int64 *)&v24, v13, v14, 0) )
      {
        updated = -1073741670;
        goto LABEL_3;
      }
      ++v12;
      a2 += 2;
      if ( v12 >= v9 )
      {
        v8 = *a3;
        goto LABEL_21;
      }
    }
    updated = -1073741811;
    goto LABEL_3;
  }
LABEL_21:
  if ( (v8 & 4) != 0 )
  {
    BYTE2(v26[2]) = 1;
    if ( (v8 & 2) != 0 )
      BYTE3(v26[2]) = 1;
  }
  else
  {
    updated = MiUpdatePartitionLargePfnBitMap(a1, &v24);
    if ( updated < 0 )
      goto LABEL_3;
  }
  updated = 0;
  v15 = v25[3];
  if ( (*(_DWORD *)(a1 + 4) & 0x40) != 0 )
  {
    v15 = LODWORD(v25[3]) | 8;
    BYTE1(v26[2]) = 1;
    LODWORD(v25[3]) |= 8u;
  }
  if ( v27 )
  {
    v16 = v24;
    v17 = 0;
    i = 0LL;
    v26[0] = (__int16 *)a1;
    while ( v16 )
    {
      i = v16;
      v16 = (_QWORD *)*v16;
    }
    while ( i )
    {
      v19 = (_QWORD **)i[1];
      v20 = (__int64)i;
      v21 = i;
      if ( v19 )
      {
        v22 = *v19;
        for ( i = (_QWORD *)i[1]; v22; v22 = (_QWORD *)*v22 )
          i = v22;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v21 )
            break;
          v21 = i;
        }
      }
      if ( v17 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v24, (unsigned __int64 *)v20);
        ExFreePoolWithTag(*(PVOID *)(v20 + 40), 0);
        ExFreePoolWithTag((PVOID)v20, 0);
      }
      else
      {
        MiActOnPartitionNodePages(v20, 9u, v26);
        if ( SHIDWORD(v26[2]) < 0 )
        {
          updated = HIDWORD(v26[2]);
          v17 = 1;
          if ( RtlAreBitsClearEx(v20 + 32, 0LL, 0x40000uLL) == 1 )
            i = (_QWORD *)v20;
        }
      }
    }
    v11 = v26[5];
    if ( !v26[5] )
      goto LABEL_3;
  }
  else
  {
    v15 |= 2u;
    LODWORD(v25[3]) = v15;
  }
  v23 = *a3;
  if ( (*a3 & 2) == 0 )
    LODWORD(v25[3]) = v15 | 1;
  v25[0] = &v24;
  if ( (v23 & 4) != 0 )
    MiFreePartitionTree((__int16 *)a1, (unsigned __int64 *)&v24, 0, 0);
  else
    MiInsertPartitionPages((__int64)&MiSystemPartition, a1, (__int64)v25, (unsigned __int64)v11);
  *((_QWORD *)a3 + 1) = v11;
  return (unsigned int)updated;
}
