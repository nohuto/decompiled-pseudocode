/*
 * XREFs of HvSnapshotHiveToOffsetArray @ 0x140806EE0
 * Callers:
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140802398 (CmDumpKey.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

__int64 __fastcall HvSnapshotHiveToOffsetArray(__int64 a1, int *a2, __int64 *a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r10d
  const void *v8; // r15
  __int64 CellMap; // rax
  int v12; // r10d
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rax
  size_t v17; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v19; // ebx
  unsigned int v20; // esi
  PVOID v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // r12d
  _DWORD *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // eax
  unsigned int *v29; // rdx
  unsigned int v30; // r15d
  int v31; // ebp
  int v32; // r10d
  unsigned int v33; // eax
  PVOID v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rbp
  __int64 v39; // rax
  int v40; // r10d
  __int16 v41; // r11
  unsigned int v42; // edx
  void *v43; // rcx
  unsigned int *Src; // [rsp+20h] [rbp-48h]
  __int16 v46; // [rsp+28h] [rbp-40h]
  unsigned int v47; // [rsp+70h] [rbp+8h]
  int v48; // [rsp+78h] [rbp+10h]
  int v49; // [rsp+80h] [rbp+18h]

  v4 = *(_DWORD *)(a1 + 272);
  *a3 = 0LL;
  v5 = 0;
  *a2 = 0;
  v46 = 0;
  v8 = *(const void **)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(a1, v5);
      if ( *(_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 1852400232 )
        break;
      if ( *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 4) != v12 )
        break;
      v13 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      v5 = v13 + v12;
      if ( v5 > v4 || (v13 & 0xFFF) != 0 )
        break;
      v46 = 0;
      if ( v5 >= v4 )
        goto LABEL_7;
    }
    v19 = -1073741492;
    goto LABEL_37;
  }
LABEL_7:
  v14 = v4 + 4096;
  v15 = (v4 + 4096) >> 20;
  v16 = v15 + 1;
  if ( ((v4 + 4096) & 0xFFFFF) == 0 )
    v16 = v15;
  v17 = 24 * v16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v16, 0x20204D43u);
  *a3 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v17);
    *a4 = v14;
    v20 = 0x100000;
    if ( v14 < 0x100000 )
      v20 = v4 + 4096;
    v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x20204D43u);
    v22 = *a3;
    *(_QWORD *)(*a3 + 8) = v21;
    if ( v21 )
    {
      *(_DWORD *)v22 = 0;
      v23 = 4096;
      *(_DWORD *)(v22 + 16) = v20;
      memmove(v21, v8, 0x1000uLL);
      v24 = *(_DWORD **)(v22 + 8);
      v24[2] = v24[1];
      v24[10] = v4;
      v25 = HvpHeaderCheckSum(v24);
      v26 = 0;
      *(_DWORD *)(v27 + 508) = v25;
      v28 = *(_DWORD *)(a1 + 272);
      v29 = 0LL;
      v30 = 0;
      v47 = 0;
      v48 = 4096;
      v31 = 4096;
      Src = 0LL;
      *a2 = 1;
      if ( !v28 )
        return 0;
      v32 = 1;
      while ( 1 )
      {
        v49 = v32;
        if ( v23 == v20 )
        {
          v33 = v28 - v26;
          v20 = 0x100000;
          if ( v33 < 0x100000 )
            v20 = v33;
          v34 = ExAllocatePoolWithTag(PagedPool, v20, 0x20204D43u);
          v35 = (unsigned int)*a2;
          v22 = *a3;
          v36 = 3 * v35;
          *(_QWORD *)(*a3 + 24 * v35 + 8) = v34;
          if ( !v34 )
            break;
          v32 = v35 + 1;
          *(_DWORD *)(v22 + 24 * v35) = v31;
          v29 = Src;
          v23 = 0;
          *(_DWORD *)(v22 + 8 * v36 + 16) = v20;
          v26 = v47;
          v49 = v32;
          *a2 = v32;
        }
        if ( v30 )
        {
          v37 = v30;
          if ( v30 > v20 )
            v37 = v20;
          LODWORD(v38) = v37;
          memmove(*(void **)(v22 + 24LL * (unsigned int)(v32 - 1) + 8), v29, v37);
          v30 -= v38;
          if ( !v30 )
            v46 = 0;
        }
        else
        {
          v39 = HvpGetCellMap(a1, v26);
          if ( !v39 )
          {
            v19 = -1073741275;
            goto LABEL_37;
          }
          v46 |= v41;
          Src = (unsigned int *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
          v42 = Src[2];
          v30 = v20 - v23 < v42 ? v42 - (v20 - v23) : 0;
          if ( v42 > v20 - v23 )
            v42 = v20 - v23;
          v38 = v42;
          memmove(
            (void *)(*(_QWORD *)(v22 + 24LL * (unsigned int)(v40 - 1) + 8) + v23),
            (const void *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0uLL),
            v42);
          if ( v30 )
          {
            v29 = (unsigned int *)((char *)Src + v38);
            Src = (unsigned int *)((char *)Src + v38);
            goto LABEL_34;
          }
          v46 = 0;
        }
        v29 = Src;
LABEL_34:
        v23 += v38;
        v48 += v38;
        v26 = v38 + v47;
        v28 = *(_DWORD *)(a1 + 272);
        v47 = v26;
        if ( v26 >= v28 )
          return 0;
        v32 = v49;
        v31 = v48;
      }
    }
  }
  v19 = -1073741801;
LABEL_37:
  v43 = (void *)*a3;
  if ( *a3 )
  {
    if ( *a2 )
    {
      do
        ExFreePoolWithTag(*(PVOID *)(*a3 + 24LL * (unsigned int)--*a2 + 8), 0);
      while ( *a2 );
      v43 = (void *)*a3;
    }
    ExFreePoolWithTag(v43, 0);
    *a2 = 0;
  }
  return v19;
}
