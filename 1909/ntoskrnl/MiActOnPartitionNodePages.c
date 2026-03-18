/*
 * XREFs of MiActOnPartitionNodePages @ 0x1402E8CAC
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1402E97F8 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1402EA404 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x1402EB134 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x14089C0A0 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x14089C3A4 (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14089C580 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseNonPagedResources @ 0x14008EDAC (MiReleaseNonPagedResources.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     RtlClearBitsEx @ 0x1400E8360 (RtlClearBitsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402BD698 (MiAcquireNonPagedResourcesForce.c)
 *     MiHotRemoveHugeRange @ 0x1402C1D90 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x1402C2708 (MiSetHugeRangePartitionId.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiSplitPfnBitMaps @ 0x14075122C (MiSplitPfnBitMaps.c)
 *     MiAddPhysicalMemoryChunks @ 0x140887CF4 (MiAddPhysicalMemoryChunks.c)
 *     MiHotAddHugeRange @ 0x1408890D0 (MiHotAddHugeRange.c)
 *     MiFreePartitionPageRun @ 0x14089BFA4 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x14089C358 (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, __int16 **a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  const signed __int64 *v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  const signed __int64 *v12; // r15
  __int64 i; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  char *v18; // r10
  unsigned __int64 j; // rax
  unsigned __int64 v20; // r14
  int v21; // ecx
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  ULONG_PTR *v28; // rcx
  __int16 v29; // dx
  __int64 v30; // rbp
  unsigned __int64 v31; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v36; // cl
  signed __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r10
  __int64 *v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rdx
  bool v49; // zf
  bool k; // zf
  __int16 *v51; // rdx
  bool v52; // r8
  __int16 *v53; // rax
  int v54; // [rsp+20h] [rbp-88h]
  unsigned __int64 v55; // [rsp+40h] [rbp-68h] BYREF
  __int64 v56; // [rsp+48h] [rbp-60h]
  unsigned __int64 v57[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v60; // [rsp+C0h] [rbp+18h]
  int v61; // [rsp+C8h] [rbp+20h] BYREF

  *((_DWORD *)a3 + 5) = 0;
  v60 = 0;
  v4 = a2;
  if ( a2 <= 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 < 0 )
    {
      v60 = 1;
      *(_QWORD *)(a1 + 24) = v5 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v6 = a1 + 32;
  v7 = 0LL;
  v56 = a1 + 32;
  while ( 1 )
  {
    v8 = *(const signed __int64 **)(v6 + 8);
    v9 = v7 & -(__int64)(v7 < *(_QWORD *)v6);
    v10 = *(_QWORD *)v6 - 1LL;
    while ( 1 )
    {
      if ( v10 - v9 == -1LL )
        goto LABEL_7;
      v12 = &v8[v9 >> 6];
      for ( i = ((1LL << (v9 & 0x3F)) - 1) | ~*v12; i == -1; i = ~*v12 )
      {
        if ( ++v12 > &v8[v10 >> 6] )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v11 = i + ((v12 - v8) << 6);
      if ( v11 > v10 )
      {
LABEL_7:
        v11 = -1LL;
      }
      else if ( v11 != -1LL )
      {
        break;
      }
      if ( !v9 )
        break;
      v14 = v7 + 1;
      if ( v7 + 1 > *(_QWORD *)v6 )
        v14 = *(_QWORD *)v6;
      v10 = v14 - 1;
      v9 = 0LL;
    }
    if ( v11 < v7 || v11 == -1LL )
      return;
    v15 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 <= v11 )
    {
      v16 = 0LL;
LABEL_44:
      v17 = *(_QWORD *)v6;
      goto LABEL_45;
    }
    v17 = v11;
    v18 = (char *)v8 + 4 * ((v15 - 1) >> 5);
    v10 = (unsigned __int64)v8 + 4 * (v11 >> 5);
    if ( (char *)v10 != v18 && (*(_DWORD *)v10 | dword_14037C900[v11 & 0x1F]) == -1 )
    {
      v17 = (v11 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
      for ( v10 += 4LL; v10 < (unsigned __int64)v18 && *(_DWORD *)v10 == -1; v10 += 4LL )
        v17 += 32LL;
    }
    while ( v17 < v15 && _bittest64(v8, v17) )
      ++v17;
    v16 = 0LL;
    if ( (char *)v10 != v18 && (*(_DWORD *)v10 & ~dword_14037C900[v17 & 0x1F]) == 0 )
    {
      v16 = 32 - (v17 & 0x1F);
      if ( v16 == -1 )
        goto LABEL_43;
      v10 += 4LL;
      while ( v10 < (unsigned __int64)v18 && !*(_DWORD *)v10 )
      {
        v10 += 4LL;
        v16 += 32LL;
        if ( v16 == -1 )
          goto LABEL_43;
      }
    }
    for ( j = v16 + v17; j < *(_QWORD *)v6; ++v16 )
    {
      if ( _bittest64(*(const signed __int64 **)(v6 + 8), j) )
        break;
      if ( v16 == -1 )
        break;
      ++j;
    }
LABEL_43:
    if ( !v16 )
      goto LABEL_44;
LABEL_45:
    v20 = v17 - v11;
    v7 = v20 + v16 + v11;
    v21 = 0;
    v22 = v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    if ( v4 != 9 )
    {
      if ( v22 > 0xFFFFFFFFFLL
        || (v10 = 0x20000000000000LL, (*(_QWORD *)(48 * v22 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0) )
      {
        v21 = 1;
      }
    }
    switch ( v4 )
    {
      case 5u:
        goto LABEL_133;
      case 6u:
        v23 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v23 = v22;
        v23[1] = v20;
        goto LABEL_133;
      case 0u:
        MiFreePartitionPageRun(*a3, v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL), v20, v60);
        goto LABEL_133;
    }
    if ( v4 == 1 )
      break;
    switch ( v4 )
    {
      case 2u:
        if ( !v21 )
        {
          v26 = (v22 + 511) & 0xFFFFFFFFFFFFFE00uLL;
          v27 = (v26 + v20) & 0xFFFFFFFFFFFFFE00uLL;
          if ( v26 < v27 )
            MiUpdateLargePageBitMap((__int64)*a3, v26, v27 - v26, 1, 0);
        }
        goto LABEL_133;
      case 3u:
        if ( !(unsigned int)MiSplitPfnBitMaps(*a3, v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL), v20) )
          *((_DWORD *)a3 + 5) = -1073741670;
        goto LABEL_133;
      case 4u:
        if ( !v21 && *a3 == (__int16 *)&MiSystemPartition )
          MiUpdateLargePageBitMap((__int64)*a3, v22, v20, 0, 0);
        LOBYTE(v54) = *((_BYTE *)a3 + 16);
        MiTransferPartitionPageRun(a3[1], *a3, v22, v20, v54);
        goto LABEL_133;
      case 8u:
        if ( v21 )
        {
          MiSetHugeRangePartitionId(
            (KSPIN_LOCK *)*a3,
            (unsigned __int64)a3[1],
            v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL),
            v20);
        }
        else
        {
          v28 = (ULONG_PTR *)a3[1];
          if ( v28 != &MiSystemPartition )
            MiUpdateLargePageBitMap((__int64)v28, v22, v20, 0, 0);
          v29 = **a3;
          v30 = 48 * v22 - 0x58000000000LL;
          v31 = v30 + 48 * v20;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v33 = v30 + 24;
          v34 = (unsigned __int64)(v29 & 0x3FF) << 40;
          do
          {
            v61 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v61);
              while ( *(__int64 *)v33 < 0 );
            }
            if ( (*(_BYTE *)(v33 + 11) & 0x40) != 0 )
            {
              MiAcquireNonPagedResourcesForce((ULONG_PTR *)*a3);
              MiReleaseNonPagedResources((__int64)a3[1], 1uLL);
            }
            *(_QWORD *)(v33 + 16) = v34 | *(_QWORD *)(v33 + 16) & 0xFFFC00FFFFFFFFFFuLL;
            _InterlockedAnd64((volatile signed __int64 *)v33, 0x7FFFFFFFFFFFFFFFuLL);
            v30 += 48LL;
            v33 += 48LL;
          }
          while ( v30 != v31 );
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          v6 = v56;
          v4 = a2;
        }
        goto LABEL_133;
      case 9u:
        v36 = *((_BYTE *)a3 + 17);
        v37 = v20 << 12;
        v49 = *((_BYTE *)a3 + 18) == 0;
        v55 = v20 << 12;
        if ( v49 )
        {
          v57[0] = v22 << 12;
          MiAddPhysicalMemoryChunks(*a3, v57, &v55, v36 != 0 ? 0x400 : 0);
          v37 = v55;
        }
        else
        {
          MiHotAddHugeRange((unsigned int)*a3, v22, v20, v36, *((unsigned __int8 *)a3 + 19));
        }
        v38 = v37 / 4096;
        if ( !*((_BYTE *)a3 + 18) && *a3 != (__int16 *)&MiSystemPartition )
        {
          v39 = (v22 + 511) & 0xFFFFFFFFFFFFFE00uLL;
          v40 = (v39 + v38) & 0xFFFFFFFFFFFFFE00uLL;
          if ( v39 < v40 )
            MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v39, v40 - v39, 1, 0);
        }
        if ( v38 == v20 )
          goto LABEL_133;
        *((_DWORD *)a3 + 5) = -1073741823;
        RtlClearBitsEx(v6, v11 + v38, *(_QWORD *)v6 - v11 - v38);
        if ( v38 )
          a3[4] = (__int16 *)((char *)a3[4] + 1);
        a3[5] = (__int16 *)((char *)a3[5] + v38);
        return;
    }
    *((_QWORD *)*a3 + 986) -= v20;
    *((_BYTE *)*a3 + 12) = 1;
    v41 = *((_QWORD *)*a3 + 3);
    if ( v41 )
    {
      v42 = *(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        v43 = *(_QWORD *)(v41 + 24) & 0x7FFFFFFFFFFFFFFFLL;
        if ( v42 < v43 )
        {
          v41 = *(_QWORD *)v41;
        }
        else
        {
          if ( v42 <= v43 )
            break;
          v41 = *(_QWORD *)(v41 + 8);
        }
      }
      while ( v41 );
    }
    RtlClearBitsEx(v41 + 32, v11, v20);
    v44 = *(_QWORD *)(v41 + 32);
    v45 = v44 - 1;
    if ( !v44 )
      goto LABEL_133;
    if ( v44 <= 1 )
    {
      if ( _bittest64(*(const signed __int64 **)(v41 + 40), 0) )
        goto LABEL_133;
LABEL_125:
      RtlAvlRemoveNode((unsigned __int64 *)*a3 + 3, (unsigned __int64 *)v41);
      v51 = a3[3];
      v52 = 0;
      if ( !v51 )
        goto LABEL_132;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v41 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v51 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
        {
          v53 = *(__int16 **)v51;
          if ( !*(_QWORD *)v51 )
          {
            v52 = 0;
LABEL_132:
            RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v51, v52, (_QWORD *)v41);
            goto LABEL_133;
          }
        }
        else
        {
          v53 = (__int16 *)*((_QWORD *)v51 + 1);
          if ( !v53 )
          {
            v52 = 1;
            goto LABEL_132;
          }
        }
        v51 = v53;
      }
    }
    v46 = *(__int64 **)(v41 + 40);
    v47 = *v46;
    v48 = &v46[v45 >> 6];
    if ( v46 == v48 )
    {
      v49 = (v47 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v44))) == 0;
    }
    else
    {
      for ( k = v47 == 0; ; k = *v46 == 0 )
      {
        if ( !k )
          goto LABEL_133;
        if ( ++v46 == v48 )
          break;
      }
      v49 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v45) & *v46) == 0;
    }
    if ( v49 )
      goto LABEL_125;
LABEL_133:
    a3[4] = (__int16 *)((char *)a3[4] + 1);
    a3[5] = (__int16 *)((char *)a3[5] + v20);
    if ( v7 >= *(_QWORD *)v6 )
      return;
  }
  v49 = v21 == 0;
  v24 = v11 + (*(_QWORD *)(a1 + 24) & 0x7FFFFFFFFFFFFFFFLL);
  if ( !v49 )
  {
    MiHotRemoveHugeRange(v24, v20);
    *((_DWORD *)a3 + 5) = 0;
LABEL_58:
    RtlClearBitsEx(v6, v11, v20);
    goto LABEL_133;
  }
  v25 = MiHotRemovePartitionPageRun(v24, v20, v10);
  *((_DWORD *)a3 + 5) = v25;
  if ( v25 >= 0 )
    goto LABEL_58;
}
