/*
 * XREFs of KiComputeNumaCosts @ 0x1409C6C3C
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140010F40 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlQueryNumaDistance @ 0x140271700 (HvlQueryNumaDistance.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x1409F7554 (KiGetHalNumaConversionFactor.c)
 */

void KiComputeNumaCosts()
{
  __int64 v0; // rsi
  unsigned int v1; // r14d
  PVOID PoolWithTag; // rax
  int v3; // r8d
  unsigned int v4; // esi
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // ecx
  __int16 v9; // di
  unsigned int v10; // r15d
  __int64 *v11; // rax
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v13; // r14d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v15; // r13
  char *v16; // rdi
  unsigned __int8 CurrentIrql; // r12
  char *v18; // rdx
  unsigned __int64 v19; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 v21; // cx
  unsigned __int64 v22; // r11
  int v23; // edi
  unsigned int v24; // esi
  int i; // edx
  __int64 v26; // r8
  unsigned __int16 v27; // ax
  unsigned int v28; // r15d
  int v29; // r9d
  __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned __int16 v32; // ax
  _QWORD *v33; // r12
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // r13
  int v37; // ecx
  __int64 v38; // r10
  __int64 v39; // r9
  unsigned int v40; // r14d
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v42; // rcx
  unsigned int v43; // edi
  unsigned int v44; // esi
  unsigned int v45; // r9d
  int v46; // r14d
  _QWORD *v47; // r8
  __int64 *v48; // r10
  __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rdx
  unsigned __int16 v52; // cx
  unsigned int v53; // edi
  int j; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  int v57; // [rsp+48h] [rbp-C0h]
  int v58; // [rsp+48h] [rbp-C0h]
  unsigned int v59; // [rsp+4Ch] [rbp-BCh]
  unsigned int v60; // [rsp+4Ch] [rbp-BCh]
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-B0h]
  int v63[2]; // [rsp+60h] [rbp-A8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-88h] BYREF
  _WORD Base[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v68[127]; // [rsp+A0h] [rbp-68h] BYREF

  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v0 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
    v1 = (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ((2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v0, 0x634E654Bu);
    KiNodeGraph = PoolWithTag;
    if ( PoolWithTag )
    {
      v57 = 0;
      v3 = 0;
      KiActualNodeCost = (void *)(((unsigned __int64)PoolWithTag + 2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (_DWORD)v0 )
        memset((void *)(((unsigned __int64)PoolWithTag + 2 * v0 + 7) & 0xFFFFFFFFFFFFFFF8uLL), 0xFFu, 8LL * v1);
      v63[0] = -1;
      v63[1] = -1;
      Affinity.Mask = 0LL;
      v4 = 0;
      *(_QWORD *)&Affinity.Group = 0LL;
      v59 = 0;
      v5 = (unsigned __int16)KeNumberNodes;
      if ( KeNumberNodes )
      {
        while ( 1 )
        {
          v6 = KeNodeBlock[v4];
          if ( (HvlEnlightenments & 0x800) != 0 )
          {
            v7 = 0;
            if ( v5 )
            {
              do
              {
                HvlQueryNumaDistance(v4, v7, &v65);
                v8 = v4 * (unsigned __int16)KeNumberNodes;
                if ( v65 == -1 )
                  *((_QWORD *)KiActualNodeCost + v7 + v8) = -1LL;
                else
                  *((_QWORD *)KiActualNodeCost + v7 + v8) = (unsigned __int64)(v65 << 9) >> 10;
                ++v7;
              }
              while ( v7 < (unsigned __int16)KeNumberNodes );
LABEL_46:
              v3 = v57;
            }
          }
          else
          {
            v9 = *(_WORD *)(v6 + 146);
            if ( v9 == *(_WORD *)(v6 + 148) )
            {
              if ( *(_QWORD *)(v6 + 136) )
              {
                v10 = v4;
              }
              else
              {
                v10 = 0;
                if ( v5 )
                {
                  v11 = KeNodeBlock;
                  do
                  {
                    v6 = *v11;
                    if ( *(_WORD *)(*v11 + 148) == v9 && *(_QWORD *)(v6 + 136) )
                      break;
                    ++v10;
                    ++v11;
                  }
                  while ( v10 < v5 );
                }
                if ( v10 == v5 )
                  goto LABEL_47;
              }
              Affinity.Group = *(_WORD *)(v6 + 144);
              Affinity.Mask = *(_QWORD *)(v6 + 136) & (*(_QWORD *)(v6 + 136) ^ (*(_QWORD *)(v6 + 136) - 1LL));
              if ( v3 )
              {
                p_PreviousAffinity = 0LL;
              }
              else
              {
                v57 = 1;
                p_PreviousAffinity = &PreviousAffinity;
              }
              KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
              v13 = 0;
              if ( KeNumberNodes )
              {
                do
                {
                  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                              0,
                                                              v63[0],
                                                              0LL,
                                                              0x1000uLL,
                                                              0,
                                                              v13,
                                                              7,
                                                              0LL);
                  v15 = PartitionNodePagesForMdl;
                  if ( PartitionNodePagesForMdl )
                  {
                    v16 = (char *)MmMapLockedPagesSpecifyCache(
                                    PartitionNodePagesForMdl,
                                    0,
                                    MmNonCached,
                                    0LL,
                                    0,
                                    0x40000020u);
                    if ( v16 )
                    {
                      CurrentIrql = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                      v18 = v16 + 4096;
                      v62 = __rdtsc();
                      while ( v16 < v18 )
                        v16 += 8;
                      v19 = __rdtsc();
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                      }
                      __writecr8(CurrentIrql);
                      *((_QWORD *)KiActualNodeCost + v13 + v10 * (unsigned __int16)KeNumberNodes) = v19 - v62;
                    }
                    MiFreePagesFromMdl((ULONG_PTR)v15, 0);
                    ExFreePoolWithTag(v15, 0);
                  }
                  ++v13;
                }
                while ( v13 < (unsigned __int16)KeNumberNodes );
                v4 = v59;
              }
              goto LABEL_46;
            }
          }
LABEL_47:
          v59 = ++v4;
          v5 = (unsigned __int16)KeNumberNodes;
          if ( v4 >= (unsigned __int16)KeNumberNodes )
          {
            if ( v3 == 1 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            break;
          }
        }
      }
      v21 = KeNumberNodes;
      v22 = 0LL;
      LODWORD(v61) = 0;
      v23 = 0;
      v60 = 0;
      v24 = 0;
      for ( i = (unsigned __int16)KeNumberNodes; v24 < v21; v60 = v24 )
      {
        v26 = KeNodeBlock[v24];
        v27 = *(_WORD *)(v26 + 146);
        if ( v27 == *(_WORD *)(v26 + 148) )
        {
          v28 = 0;
          v29 = i * v27;
          v58 = v29;
          if ( i )
          {
            v30 = KeNodeBlock[v24];
            do
            {
              v31 = KeNodeBlock[v28];
              v32 = *(_WORD *)(v31 + 146);
              if ( v32 == *(_WORD *)(v31 + 148) )
              {
                v33 = KiActualNodeCost;
                v34 = v32;
                v35 = (unsigned int)v32 + v29;
                v36 = (unsigned int)v35;
                if ( *((_QWORD *)KiActualNodeCost + v35) == -1LL )
                {
                  v37 = *(unsigned __int16 *)(v30 + 146);
                  v38 = (unsigned int)(v37 + i * v34);
                  v39 = *((_QWORD *)KiActualNodeCost + v38);
                  if ( v39 == -1 )
                  {
                    v40 = *((_DWORD *)KeNodeDistance + v34 + i * v37);
                    if ( v40 != 1 || (v40 = *((_DWORD *)KeNodeDistance + (int)v38), v40 != 1) )
                    {
                      if ( !v23 )
                      {
                        HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v61);
                        v23 = v61;
                        v22 = HalNumaConversionFactor;
                      }
                      if ( v23 == 2 )
                      {
                        v42 = v22 * v40 / 0x64;
                      }
                      else if ( v23 == 3 )
                      {
                        v42 = 100 * (unsigned __int64)v40 / v22;
                      }
                      else
                      {
                        v42 = -1LL;
                      }
                      v33[v36] = v42;
                    }
                  }
                  else
                  {
                    *((_QWORD *)KiActualNodeCost + v35) = v39;
                  }
                  v29 = v58;
                }
              }
              v21 = KeNumberNodes;
              ++v28;
              i = (unsigned __int16)KeNumberNodes;
            }
            while ( v28 < (unsigned __int16)KeNumberNodes );
            v24 = v60;
          }
        }
        ++v24;
        i = v21;
      }
      v43 = v21;
      v44 = 0;
      if ( v21 )
      {
        do
        {
          v45 = 0;
          v46 = v43 * *(unsigned __int16 *)(KeNodeBlock[v44] + 148);
          if ( v43 )
          {
            v47 = v68;
            v48 = KeNodeBlock;
            do
            {
              v49 = *v48;
              *((_DWORD *)v47 - 2) = v45;
              if ( v49 )
              {
                v50 = *((_QWORD *)KiActualNodeCost + v46 + (unsigned int)*(unsigned __int16 *)(v49 + 146));
                *v47 = v50;
                if ( !v50 )
                  *v47 = 1LL;
              }
              else
              {
                *v47 = -1LL;
              }
              ++v45;
              ++v48;
              v47 += 2;
            }
            while ( v45 < v43 );
          }
          v51 = (unsigned __int16)KeNumberNodes;
          v68[2 * v44] = 0LL;
          qsort(Base, v51, 0x10uLL, MiNodeCostSort);
          v52 = KeNumberNodes;
          v53 = 0;
          for ( j = (unsigned __int16)KeNumberNodes;
                v53 < (unsigned __int16)KeNumberNodes;
                j = (unsigned __int16)KeNumberNodes )
          {
            v55 = 2LL * v53;
            v56 = v53 + v44 * j;
            ++v53;
            *((_WORD *)KiNodeGraph + v56) = Base[4 * v55];
            v52 = KeNumberNodes;
          }
          ++v44;
          v43 = v52;
        }
        while ( v44 < v52 );
      }
    }
  }
}
