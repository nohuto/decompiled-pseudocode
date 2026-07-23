/*
 * XREFs of MiActOnPartitionNodePages @ 0x1402D0308
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1402D0CB8 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1402D1B18 (MiFreePartitionNodePages.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x1402D27C4 (MiReturnPartitionPagesToParent.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140861A88 (MiUpdatePartitionLargePfnBitMap.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402A63E0 (MiAcquireNonPagedResourcesForce.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 *     MiSplitPfnBitMaps @ 0x14072BC10 (MiSplitPfnBitMaps.c)
 *     MiAddPhysicalMemoryChunks @ 0x14084E040 (MiAddPhysicalMemoryChunks.c)
 *     MiFreePartitionPageRun @ 0x1408615A4 (MiFreePartitionPageRun.c)
 *     MiHotRemovePartitionPageRun @ 0x140861870 (MiHotRemovePartitionPageRun.c)
 */

void __fastcall MiActOnPartitionNodePages(__int64 a1, unsigned int a2, unsigned __int16 **a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rbx
  __int64 i; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 NextForwardRunClearCapped; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rsi
  unsigned __int64 *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  ULONG_PTR *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v32; // rbx
  unsigned __int64 v33; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbp
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r10
  __int64 *v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rdx
  bool v46; // zf
  bool j; // zf
  unsigned __int16 *v48; // rdx
  bool v49; // r8
  unsigned __int16 *v50; // rax
  int v51; // [rsp+20h] [rbp-88h]
  signed __int64 v52; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-70h]
  unsigned __int64 v54; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 *v55; // [rsp+48h] [rbp-60h]
  unsigned __int64 v56[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v58; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C0h] [rbp+18h] BYREF
  int v60; // [rsp+C8h] [rbp+20h]

  *((_DWORD *)a3 + 5) = 0;
  v58 = 0;
  v5 = a1;
  if ( a2 <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 < 0 )
    {
      v58 = 1;
      *(_QWORD *)(a1 + 24) = v6 & 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  v7 = (unsigned __int64 *)(a1 + 32);
  v8 = 0LL;
  v55 = (unsigned __int64 *)(a1 + 32);
  do
  {
    v9 = *v7;
    v10 = v7[1];
    v11 = v8 & -(__int64)(v8 < *v7);
    v12 = *v7 - 1;
    while ( 1 )
    {
      if ( v12 - v11 == -1LL )
        goto LABEL_7;
      v14 = (_QWORD *)(v10 + 8 * (v11 >> 6));
      for ( i = ((1LL << (v11 & 0x3F)) - 1) | ~*v14; i == -1; i = ~*v14 )
      {
        if ( (unsigned __int64)++v14 > v10 + 8 * (v12 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v13 = i + ((__int64)((__int64)v14 - v10) >> 3 << 6);
      v60 = i;
      if ( v13 > v12 )
      {
LABEL_7:
        v13 = -1LL;
      }
      else if ( v13 != -1LL )
      {
        break;
      }
      if ( !v11 )
        break;
      v16 = v8 + 1;
      if ( v8 + 1 > v9 )
        v16 = v9;
      v12 = v16 - 1;
      v11 = 0LL;
    }
    if ( v13 < v8 || v13 == -1LL )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v7, v13, v12, &v54);
    v19 = v54;
    if ( !NextForwardRunClearCapped )
      v19 = *v7;
    v20 = v19 - v13;
    v21 = v13 + (*(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL);
    v8 = NextForwardRunClearCapped + v13 + v20;
    v53 = v8;
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        v22 = (unsigned __int64 *)&a3[6][8 * ((_QWORD)a3[4] + 1)];
        *v22 = v21;
        v22[1] = v20;
      }
      else if ( a2 )
      {
        switch ( a2 )
        {
          case 1u:
            v23 = MiHotRemovePartitionPageRun(v21, v20);
            *((_DWORD *)a3 + 5) = v23;
            if ( v23 < 0 )
              return;
            RtlClearBitsEx((__int64)v7, v13, v20);
            break;
          case 2u:
            v24 = (v21 + 511) & 0xFFFFFFFFFFFFFE00uLL;
            v25 = (v24 + v20) & 0xFFFFFFFFFFFFFE00uLL;
            if ( v24 < v25 )
              MiUpdateLargePageBitMap((__int64)*a3, v24, v25 - v24, 1, 0);
            break;
          case 3u:
            if ( !(unsigned int)MiSplitPfnBitMaps(*a3, v21, v20) )
              *((_DWORD *)a3 + 5) = -1073741670;
            break;
          case 4u:
            v26 = (__int64)*a3;
            if ( *a3 == (unsigned __int16 *)&MiSystemPartition )
            {
              MiUpdateLargePageBitMap(v26, v21, v20, 0, 0);
              v26 = (__int64)*a3;
            }
            LOBYTE(v51) = *((_BYTE *)a3 + 16);
            MiTransferPartitionPageRun(a3[1], v26, v21, v20, v51);
            break;
          case 8u:
            v27 = (ULONG_PTR *)a3[1];
            if ( v27 != &MiSystemPartition )
              MiUpdateLargePageBitMap((__int64)v27, v21, v20, 0, 0);
            v28 = **a3;
            v29 = 48 * v21 - 0x58000000000LL;
            v30 = v29 + 48 * v20;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v32 = v29 + 24;
            v33 = (unsigned __int64)(v28 & 0x3FF) << 40;
            do
            {
              v59 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v59, v28, v18);
                while ( *(__int64 *)v32 < 0 );
              }
              if ( (*(_BYTE *)(v32 + 11) & 0x40) != 0 )
              {
                MiAcquireNonPagedResourcesForce((ULONG_PTR *)*a3);
                MiReleaseNonPagedResources((__int64)a3[1], 1uLL);
              }
              *(_QWORD *)(v32 + 16) = v33 | *(_QWORD *)(v32 + 16) & 0xFFFC00FFFFFFFFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)v32, 0x7FFFFFFFFFFFFFFFuLL);
              v29 += 48LL;
              v32 += 48LL;
            }
            while ( v29 != v30 );
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(CurrentIrql);
            v7 = v55;
            v8 = v53;
            goto LABEL_93;
          default:
            v35 = (__int64)*a3;
            if ( a2 == 9 )
            {
              v56[0] = v21 << 12;
              v52 = v20 << 12;
              MiAddPhysicalMemoryChunks(v35, v56, &v52, 0LL);
              v36 = v52 / 4096;
              if ( *a3 != (unsigned __int16 *)&MiSystemPartition )
              {
                v37 = (v21 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                if ( v37 < ((v37 + v36) & 0xFFFFFFFFFFFFFE00uLL) )
                  MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v37, v52 / 4096, 1, 0);
              }
              if ( v36 != v20 )
              {
                *((_DWORD *)a3 + 5) = -1073741823;
                RtlClearBitsEx((__int64)v7, v13 + v36, *v7 - v13 - v36);
                if ( v36 )
                  a3[4] = (unsigned __int16 *)((char *)a3[4] + 1);
                a3[5] = (unsigned __int16 *)((char *)a3[5] + v36);
                return;
              }
              v8 = v53;
            }
            else
            {
              *(_QWORD *)(v35 + 7120) -= v20;
              *((_BYTE *)*a3 + 12) = 1;
              v38 = *((_QWORD *)*a3 + 3);
              if ( v38 )
              {
                v39 = *(_QWORD *)(v5 + 24) & 0x7FFFFFFFFFFFFFFFLL;
                do
                {
                  v40 = *(_QWORD *)(v38 + 24) & 0x7FFFFFFFFFFFFFFFLL;
                  if ( v39 < v40 )
                  {
                    v38 = *(_QWORD *)v38;
                  }
                  else
                  {
                    if ( v39 <= v40 )
                      break;
                    v38 = *(_QWORD *)(v38 + 8);
                  }
                }
                while ( v38 );
              }
              RtlClearBitsEx(v38 + 32, v13, v20);
              v41 = *(_QWORD *)(v38 + 32);
              v42 = v41 - 1;
              if ( !v41 )
                goto LABEL_93;
              if ( v41 <= 1 )
              {
                if ( _bittest64(*(const signed __int64 **)(v38 + 40), 0) )
                  goto LABEL_93;
LABEL_85:
                RtlAvlRemoveNode((unsigned __int64 *)*a3 + 3, (unsigned __int64 *)v38);
                v48 = a3[3];
                v49 = 0;
                if ( !v48 )
                  goto LABEL_92;
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v38 + 24) & 0x7FFFFFFFFFFFFFFFuLL) < (*((_QWORD *)v48 + 3) & 0x7FFFFFFFFFFFFFFFuLL) )
                  {
                    v50 = *(unsigned __int16 **)v48;
                    if ( !*(_QWORD *)v48 )
                    {
                      v49 = 0;
LABEL_92:
                      RtlAvlInsertNodeEx((unsigned __int64 *)a3 + 3, (unsigned __int64)v48, v49, (_QWORD *)v38);
                      goto LABEL_93;
                    }
                  }
                  else
                  {
                    v50 = (unsigned __int16 *)*((_QWORD *)v48 + 1);
                    if ( !v50 )
                    {
                      v49 = 1;
                      goto LABEL_92;
                    }
                  }
                  v48 = v50;
                }
              }
              v43 = *(__int64 **)(v38 + 40);
              v44 = *v43;
              v45 = &v43[v42 >> 6];
              if ( v43 == v45 )
              {
                v46 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v41)) & v44) == 0;
              }
              else
              {
                for ( j = v44 == 0; ; j = *v43 == 0 )
                {
                  if ( !j )
                    goto LABEL_93;
                  if ( ++v43 == v45 )
                    break;
                }
                v46 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v42) & *v43) == 0;
              }
              if ( v46 )
                goto LABEL_85;
LABEL_93:
              v5 = a1;
            }
            break;
        }
      }
      else
      {
        MiFreePartitionPageRun(*a3, v21, v20, v58);
      }
    }
    a3[4] = (unsigned __int16 *)((char *)a3[4] + 1);
    a3[5] = (unsigned __int16 *)((char *)a3[5] + v20);
  }
  while ( v8 < *v7 );
}
