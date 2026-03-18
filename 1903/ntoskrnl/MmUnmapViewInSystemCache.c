/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140070300
 * Callers:
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001FA84 (MiUnlockWsle.c)
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiRemoveWsleList @ 0x140023730 (MiRemoveWsleList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C330 (MiDecrementAndInsertStandbyPages.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiRebuildPageTableLeafAges @ 0x14002DC60 (MiRebuildPageTableLeafAges.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x14005D5C8 (MiLockWorkingSetOptimal.c)
 *     MiReleaseSystemCacheView @ 0x14006FE50 (MiReleaseSystemCacheView.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x1400714B0 (MiRemoveViewsFromSection.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140075CD0 (MiGetSystemCacheReverseMap.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     MiLockSetPfnPriority @ 0x140121F80 (MiLockSetPfnPriority.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401290E4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v4; // rbp
  unsigned __int64 v5; // r14
  int v6; // r13d
  __int64 v7; // rdx
  ULONG_PTR SystemCacheReverseMap; // rcx
  __int64 v9; // r10
  __int64 v10; // r11
  ULONG_PTR v11; // rax
  unsigned int *MmInternal; // rbx
  __int64 v13; // rdx
  char *v14; // r10
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  __int64 v20; // rdi
  ULONG_PTR v21; // rsi
  char v22; // cl
  unsigned int v23; // r9d
  char v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  size_t v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r12d
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rbp
  int v40; // r13d
  __int64 v41; // r15
  unsigned int v42; // r14d
  __int64 v43; // rdi
  __int64 v44; // r12
  int v45; // r13d
  ULONG_PTR v46; // rbp
  unsigned __int64 v47; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v49; // r14
  __int64 v50; // r15
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r11
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // r11
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r11
  __int64 v71; // rbx
  __int64 v72; // rsi
  int v73; // r9d
  signed __int8 v74; // al
  __int64 *v75; // r9
  __int64 v76; // rax
  _KPROCESS *Process; // rdx
  __int64 v78; // rsi
  unsigned __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // r10
  unsigned __int64 v82; // r11
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // rcx
  char WsleContents; // di
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  unsigned __int64 v90; // r11
  bool v91; // zf
  char *v92; // rax
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rcx
  char v95; // al
  __int64 v96; // rcx
  char v97; // al
  __int64 v98; // rax
  __int64 v99; // r11
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r10
  unsigned __int64 v102; // rcx
  bool v103; // cf
  __int64 v104; // r8
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // rcx
  int HasShadow; // eax
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  char v123; // r9
  __int64 v124; // r10
  char v125; // r9
  __int64 v126; // r10
  signed __int32 v127[8]; // [rsp+0h] [rbp-108h] BYREF
  char v128; // [rsp+30h] [rbp-D8h]
  int v129; // [rsp+34h] [rbp-D4h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-D0h]
  __int64 v131; // [rsp+40h] [rbp-C8h] BYREF
  int v132; // [rsp+48h] [rbp-C0h]
  unsigned int v133; // [rsp+4Ch] [rbp-BCh]
  int v134; // [rsp+50h] [rbp-B8h]
  __int64 v135; // [rsp+58h] [rbp-B0h]
  int v136; // [rsp+64h] [rbp-A4h] BYREF
  ULONG_PTR v137; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v138; // [rsp+70h] [rbp-98h]
  __int64 v139; // [rsp+78h] [rbp-90h]
  char *v140; // [rsp+80h] [rbp-88h]
  ULONG_PTR v141; // [rsp+88h] [rbp-80h]
  __int64 v142; // [rsp+90h] [rbp-78h]
  unsigned __int64 v143; // [rsp+98h] [rbp-70h]
  __int64 v144; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v145; // [rsp+A8h] [rbp-60h]
  __int64 v146; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v147; // [rsp+B8h] [rbp-50h]
  ULONG_PTR BugCheckParameter3a; // [rsp+110h] [rbp+8h]
  unsigned __int8 v151; // [rsp+128h] [rbp+20h] BYREF

  BugCheckParameter3a = BugCheckParameter3;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v147 = v5;
  v143 = v5 + 512;
  v145 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v146 = MiSectionControlArea(BugCheckParameter4);
  v6 = 0;
  v132 = 0;
  v7 = *(_WORD *)(v146 + 60) & 0x3FF;
  v138 = *(_QWORD *)(v146 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v129 = 0;
  v134 = 0;
  v139 = 0LL;
  v142 = *(_QWORD *)(qword_140466188 + 8 * v7);
  v133 = 2;
  v135 = v142 + 0x2000;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v4, v7);
  v141 = SystemCacheReverseMap;
  v11 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v137 = v11;
  if ( v11 )
  {
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
      v133 = 4;
      v137 = v11;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v11;
    }
    if ( *(_QWORD *)v11 != v10 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v144 = MiLockWorkingSetOptimal(v9, v5, &v151);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v13 = *(_QWORD *)MmInternal;
  *(_DWORD *)(v13 + 8) = MmInternal[6];
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)v13 = 0;
  *(_WORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  v14 = (char *)*((_QWORD *)MmInternal + 2);
  v15 = MmInternal[6];
  BugCheckParameter2 = *((_QWORD *)MmInternal + 1);
  v140 = v14;
  memset(v14, 0, 8 * v15);
  v16 = *(_QWORD *)MmInternal;
  v17 = 0LL;
  v18 = 0xFFFFF6FFFFFFFFFFuLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  *(_BYTE *)(v16 + 4) |= 4u;
  while ( 1 )
  {
    v20 = 1LL;
    v21 = v4;
    if ( *(_DWORD *)v16 != 1 )
    {
      v22 = *(_BYTE *)(v16 + 4);
      if ( (v22 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= v18 )
        *(_BYTE *)(v16 + 4) = v22 | 8;
    }
    v23 = *(_DWORD *)(v16 + 12);
    if ( !v23 )
      goto LABEL_12;
    v24 = *(_BYTE *)(v16 + 4) & 4;
    if ( !v24 )
    {
      v99 = v16 + 8LL * (v23 - 1);
      v100 = *(_QWORD *)(v99 + 24);
      if ( (v100 & 0xC00) == 0 )
      {
        v101 = *(_QWORD *)(v99 + 24) & 0x3FFLL;
        if ( (v100 & 0xFFFFFFFFFFFFF000uLL) + ((v101 + 1) << 12) == v4 )
        {
          v102 = v101 + 1;
          v103 = v101 + 1 < v101;
          v19 = 0xFFFFF6FB7DBED7F8uLL;
          if ( !v103 && v102 <= 0x3FF )
          {
            ++*(_QWORD *)(v16 + 16);
            *(_QWORD *)(v99 + 24) = ((unsigned __int16)v100 ^ (unsigned __int16)(v100 + 1)) & 0x3FF ^ v100;
            goto LABEL_18;
          }
        }
        else
        {
          v19 = 0xFFFFF6FB7DBED7F8uLL;
        }
      }
    }
    if ( v24
      || (v104 = v16 + 8LL * (v23 - 1), v105 = *(_QWORD *)(v104 + 24), (v105 & 0xC00) != 0)
      || (v105 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v106 = *(_QWORD *)(v104 + 24) & 0x3FFLL, v106 + 1 < v106)
      || v106 + 1 > 0x3FF )
    {
LABEL_12:
      if ( v23 >= *(_DWORD *)(v16 + 8) )
      {
        *(_BYTE *)(v16 + 5) = 1;
      }
      else
      {
        while ( 1 )
        {
          v25 = (unsigned __int64)(v20 - 1) > 0x3FF ? 1024LL : v20;
          v26 = v21 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v25 - 1) & 0x3FF;
          v20 -= v25;
          v21 += v25 << 12;
          *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(v16 + 12))++ + 24) = v26;
          v27 = *(unsigned int *)(v16 + 12);
          *(_QWORD *)(v16 + 16) += v25;
          if ( (_DWORD)v27 == *(_DWORD *)(v16 + 8) && (*(_BYTE *)(v16 + 4) & 4) == 0 )
          {
            qsort((void *)(v16 + 24), v27, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v16);
            v107 = *(unsigned int *)(v16 + 12);
            if ( (_DWORD)v107 == *(_DWORD *)(v16 + 8) )
              break;
          }
          if ( !v20 )
          {
            v19 = 0xFFFFF6FB7DBED7F8uLL;
            goto LABEL_18;
          }
        }
        v19 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v20 )
        {
          *(_BYTE *)(v16 + 5) = 1;
          *(_QWORD *)(v16 + 16) = v107;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v16 + 16);
      *(_QWORD *)(v104 + 24) = ((unsigned __int16)(v105 - 4096) ^ (unsigned __int16)(v105 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v105 - 4096);
    }
LABEL_18:
    v28 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= v19
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v28 & 1) != 0
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v109 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v5 >> 3) & 0x1FF));
        v110 = v28 | 0x20;
        if ( (v109 & 0x20) == 0 )
          v110 = *(_QWORD *)v5;
        v28 = v110;
        if ( (v109 & 0x42) != 0 )
          v28 = v110 | 0x42;
      }
    }
    v29 = (__int64 *)BugCheckParameter2;
    v131 = v28;
    *(_QWORD *)(BugCheckParameter2 + 8 * v17) = v28;
    if ( (v28 & 1) != 0 )
    {
      v78 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v131) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140466368 )
      {
        v93 = (__int64)(v5 << 25) >> 16;
        if ( v93 >= 0xFFFFF68000000000uLL && v93 <= v82 )
          goto LABEL_103;
        v79 = ((v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v94 = *(_QWORD *)v79;
        if ( v79 >= 0xFFFFF6FB7DBED000uLL && v79 <= v81 && (MiFlags & 0xC00000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v94 & 1) != 0 && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v111 = Process[2].DeepFreezeStartTime;
            if ( v111 )
            {
              v112 = *(_QWORD *)(v111 + 8 * ((v79 >> 3) & 0x1FF));
              v79 = v94 | 0x20;
              Process = (_KPROCESS *)(unsigned __int8)v112;
              LOBYTE(Process) = v112 & 0x20;
              if ( (v112 & 0x20) == 0 )
                v79 = v94;
              HIBYTE(v94) = HIBYTE(v79);
              if ( (v112 & 0x42) != 0 )
                HIBYTE(v94) = HIBYTE(v79);
            }
          }
        }
        if ( (HIBYTE(v94) & 0xF) != 7 )
        {
LABEL_103:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v135, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v78 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v95 = *(_BYTE *)(v78 + 35);
        if ( ((v95 & 8) != 0 || (v95 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v78, Process, v79, v80) <= 5 )
          MiLockSetPfnPriority(v96, 2LL);
      }
      v83 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v84 = *(_QWORD *)v83;
      if ( v83 >= 0xFFFFF6FB7DBED000uLL
        && v83 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v84 & 1) != 0
        && ((v84 & 0x20) == 0 || (v84 & 0x42) == 0) )
      {
        v113 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v113 )
        {
          v114 = *(_QWORD *)(v113 + 8 * ((v83 >> 3) & 0x1FF));
          v115 = v84 | 0x20;
          if ( (v114 & 0x20) == 0 )
            v115 = v84;
          v84 = v115;
          if ( (v114 & 0x42) != 0 )
            v84 = v115 | 0x42;
        }
      }
      WsleContents = HIBYTE(v84) & 0xF | (16 * ((v84 >> 60) & 7));
      if ( (HIBYTE(v84) & 0xF) == 8 )
      {
        MiUnlockWsle(v135, v4, v78);
        WsleContents = MiGetWsleContents(v116, v4);
      }
      v86 = ZeroPte;
      v87 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL) )
      {
        LOBYTE(v87) = v87 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v87) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v87 & 0x20) != 0 )
      {
        if ( !MiPteInShadowRange(v5) )
        {
          v90 = 0x8000000000000000uLL;
          goto LABEL_95;
        }
        HasShadow = MiPteHasShadow(v88);
        v90 = 0x8000000000000000uLL;
        if ( HasShadow )
        {
          if ( !HIBYTE(word_140465BEC) && (v89 & 1) != 0 )
            v89 |= 0x8000000000000000uLL;
          *(_QWORD *)v5 = v89;
          MiWritePteShadow(v5, v89);
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v89 & 1) != 0 )
          {
            v89 |= 0x8000000000000000uLL;
          }
LABEL_95:
          *(_QWORD *)v5 = v89;
        }
LABEL_96:
        v134 = 1;
      }
      else
      {
        v97 = MI_INTERLOCKED_EXCHANGE_PTE(v5, v86);
        v90 = 0x8000000000000000uLL;
        if ( (v97 & 0x20) != 0 )
          goto LABEL_96;
      }
      v91 = v138 == 0;
      v92 = v140;
      v140[8 * v17] = WsleContents;
      v92[8 * v17 + 1] = 1;
      if ( !v91 )
        v139 = v90 | *(_QWORD *)(v78 + 8);
      v29 = (__int64 *)BugCheckParameter2;
      v33 = v6 + 1;
      v129 = v6 + 1;
      v19 = 0xFFFFF6FB7DBED7F8uLL;
      v18 = 0xFFFFF6FFFFFFFFFFuLL;
      goto LABEL_29;
    }
    if ( (v28 & 0x400) == 0 )
      break;
    if ( v138 )
    {
      v30 = v28;
      if ( qword_140465B00 && (v28 & 0x10) == 0 )
        v30 = v28 & ~qword_140465B00;
      v139 = v30 >> 16;
    }
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v32) )
      {
        if ( !HIBYTE(word_140465BEC) && (v31 & 1) != 0 )
          v31 |= v118;
        *(_QWORD *)v5 = v31;
        MiWritePteShadow(v5, v31);
        v19 = 0xFFFFF6FB7DBED7F8uLL;
        goto LABEL_28;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v31 & 1) != 0 )
      {
        v31 |= v118;
      }
    }
    *(_QWORD *)v5 = v31;
LABEL_28:
    v33 = v129;
LABEL_29:
    ++v6;
    v4 += 4096LL;
    ++v17;
    v132 = v6;
    v5 += 8LL;
    BugCheckParameter3a = v4;
    if ( v5 >= v143 )
      goto LABEL_30;
  }
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow(v120) )
    {
      if ( !HIBYTE(word_140465BEC) && (v119 & 1) != 0 )
        v119 |= v121;
      *(_QWORD *)v5 = v119;
      MiWritePteShadow(v5, v119);
      goto LABEL_217;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v119 & 1) != 0 )
    {
      v119 |= v121;
    }
  }
  *(_QWORD *)v5 = v119;
LABEL_217:
  v33 = v129;
LABEL_30:
  if ( v33 )
  {
    v34 = v16;
    v35 = v135;
    v36 = MiRemoveWsleList(v135, v34, v140, v33);
    if ( v36 )
      MiRebuildPageTableLeafAges(0LL, v36 << 25 >> 16 << 25 >> 16);
  }
  else
  {
    v35 = v135;
  }
  if ( *(_QWORD *)(v141 + 16) )
  {
    v37 = 1;
    *(_QWORD *)(v141 + 16) = 0LL;
  }
  else
  {
    v37 = 0;
  }
  v128 = v37;
  MiUnlockPageTableInternal(v35);
  LOBYTE(v38) = 2;
  MiUnlockWorkingSetShared(v35, v38);
  _InterlockedOr(v127, 0);
  v39 = v132;
  v40 = KiTbFlushTimeStamp;
  v41 = 0LL;
  v129 = KiTbFlushTimeStamp;
  v42 = 0;
  v43 = 0LL;
  if ( v132 > 0 )
  {
    v44 = v142;
    v45 = 0;
    while ( 1 )
    {
      if ( (v29[v43] & 1) != 0 )
      {
        ++v41;
        v71 = 0LL;
        v72 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29[v45]) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v74 = _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL);
        if ( v42 )
        {
          if ( v74 )
          {
            v29 = (__int64 *)BugCheckParameter2;
            MiDecrementAndInsertStandbyPages((__int64 *)BugCheckParameter2, v42, 2u);
            --v45;
            --v43;
            v42 = 0;
            --v41;
            goto LABEL_38;
          }
        }
        else
        {
          v136 = v73;
          if ( v74 )
          {
            do
            {
              do
                KeYieldProcessorEx(&v136);
              while ( *(__int64 *)(v72 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) );
          }
        }
        v75 = (__int64 *)BugCheckParameter2;
        if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v43) & 0x42) != 0 )
        {
          v98 = MiCaptureDirtyBitToPfn(v72);
          v75 = (__int64 *)BugCheckParameter2;
          v71 = v98;
LABEL_121:
          if ( v42 )
          {
            MiDecrementAndInsertStandbyPages(v75, v42, 0x11u);
            v42 = 0;
          }
          MiDecrementShareCount(v72);
          _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v71 )
            MiReleasePageFileInfo(v44, v71, 0LL);
          v29 = (__int64 *)BugCheckParameter2;
          goto LABEL_38;
        }
        if ( (*(_QWORD *)(v72 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || *(_WORD *)(v72 + 32) != 1
          || (*(_QWORD *)(v72 + 24) & 0x4000000000000000LL) != 0
          || (*(_BYTE *)(v72 + 35) & 0x40) != 0
          || (*(_BYTE *)(v72 + 34) & 0x10) != 0 )
        {
          goto LABEL_121;
        }
        v76 = v42++;
        *(_QWORD *)(BugCheckParameter2 + 8 * v76) = v72;
        v29 = v75;
      }
LABEL_38:
      ++v45;
      if ( ++v43 >= v39 )
      {
        v37 = v128;
        v40 = v129;
        if ( v42 )
          MiDecrementAndInsertStandbyPages(v29, v42, 2u);
        break;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v151 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v151);
  v46 = v137;
  if ( v37 == 1 )
    MiManageSubsectionView(v137, v141, v133);
  if ( v41 )
  {
    v47 = v145;
    MiLockPageInline(v145);
    *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) - v41)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    CurrentIrql = v151;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v151 = CurrentIrql;
  }
  v49 = 0LL;
  if ( !v138 )
    v46 = 0LL;
  v50 = v146;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v146 + 72));
  if ( v46 )
  {
    v51 = v139;
    while ( 1 )
    {
      v52 = MiRemoveViewsFromSection(v46);
      v53 = *(_QWORD *)(v46 + 8);
      v49 += v52;
      if ( v51 >= v53 && v51 < v53 + 8LL * *(unsigned int *)(v46 + 44) )
        break;
      v46 = *(_QWORD *)(v46 + 16);
      if ( !v46 )
        KeBugCheckEx(0x1Au, 0x783uLL, (ULONG_PTR)v29, BugCheckParameter3a, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v50 + 40);
  --*(_DWORD *)(v50 + 88);
  MiCheckControlArea(v50, CurrentIrql);
  if ( v49 )
    MiReturnCrossPartitionSectionCharges(v142, 1LL, v49);
  v131 = MiSwizzleInvalidPte((unsigned __int64)(v40 & 0xFFFFF) << 28, v54, v55, v56);
  if ( MiPteInShadowRange(v147 + 16) )
  {
    if ( !(unsigned int)MiPteHasShadow(v58) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v123 & 1) != 0 )
      {
        v57 |= 0x8000000000000000uLL;
      }
      goto LABEL_55;
    }
    if ( !HIBYTE(word_140465BEC) && (v123 & 1) != 0 )
      v57 |= 0x8000000000000000uLL;
    *(_QWORD *)(v59 + 16) = v57;
    MiWritePteShadow(v59 + 16, v57);
  }
  else
  {
LABEL_55:
    *(_QWORD *)(v59 + 16) = v57;
  }
  if ( MiPteInShadowRange(v59 + 8) )
  {
    if ( !(unsigned int)MiPteHasShadow(v61) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v60 & 1) != 0 )
      {
        v60 |= v124;
      }
      goto LABEL_57;
    }
    if ( !HIBYTE(word_140465BEC) && (v60 & 1) != 0 )
      v60 |= v124;
    *(_QWORD *)(v64 + 8) = v60;
    MiWritePteShadow(v64 + 8, v60);
  }
  else
  {
LABEL_57:
    *(_QWORD *)(v64 + 8) = v60;
  }
  v65 = v131;
  if ( v134 == 1 )
  {
    if ( qword_140465B00 )
    {
      if ( (v131 & 0x10) != 0 )
        v65 = v131 & 0xFFFFFFEF;
      else
        v65 = v131 & ~(_DWORD)qword_140465B00;
    }
    v66 = v65 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140465B00 )
    {
      if ( (v131 & 0x10) != 0 )
        v65 = v131 & 0xFFFFFFEF;
      else
        v65 = v131 & ~(_DWORD)qword_140465B00;
    }
    v66 = v65 & 0xFFFFFFF;
  }
  v131 = MiSwizzleInvalidPte(v66, qword_140465B00, v62, v63);
  if ( MiPteInShadowRange(v67 + 24) )
  {
    if ( !(unsigned int)MiPteHasShadow(v69) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v125 & 1) != 0 )
      {
        v68 |= v126;
      }
      goto LABEL_64;
    }
    if ( !HIBYTE(word_140465BEC) && (v125 & 1) != 0 )
      v68 |= v126;
    *(_QWORD *)(v70 + 24) = v68;
    MiWritePteShadow(v70 + 24, v68);
  }
  else
  {
LABEL_64:
    *(_QWORD *)(v70 + 24) = v68;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView(v70, v68);
}
