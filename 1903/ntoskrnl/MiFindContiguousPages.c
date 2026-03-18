/*
 * XREFs of MiFindContiguousPages @ 0x1400D9FE0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiFindPagesForMdl @ 0x1400EF844 (MiFindPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSlabEntry @ 0x1402DB498 (MiAllocateSlabEntry.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x1402E8CF8 (MiRebuildLargePage.c)
 *     MiAllocateDriverPage @ 0x14066D148 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408892E0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiConvertContiguousPages @ 0x1400A1890 (MiConvertContiguousPages.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiClaimPhysicalRun @ 0x1400D9208 (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x1400DA57C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400DA610 (MiPfnsWorthTrying.c)
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x140129568 (MiSetPfnOwnedAndActive.c)
 *     MiDereferencePageRunsEx @ 0x14012B7B0 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14012F194 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131AD8 (MiReleasePteCopyList.c)
 *     MiQueueWorkingSetRequest @ 0x14017F1F0 (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFindLargeNodePage @ 0x1402C08B8 (MiFindLargeNodePage.c)
 *     MiEmptyKernelStackCache @ 0x1402D1990 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v12; // r15
  int v13; // r13d
  unsigned __int8 CurrentIrql; // di
  unsigned int v16; // ecx
  int *v17; // r8
  unsigned int v18; // edi
  unsigned int *v19; // rdx
  __int64 v20; // r11
  unsigned int v21; // ebx
  _BYTE *v22; // r10
  ULONG_PTR v23; // rsi
  unsigned int *v24; // r9
  _BYTE *v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  bool v38; // cc
  int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned int v42; // edi
  unsigned __int64 v43; // rbx
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  unsigned __int64 *LargeNodePage; // rax
  unsigned __int64 *v49; // rbx
  unsigned int v50; // ebx
  __int64 v51; // r10
  __int64 v52; // rdx
  unsigned int v53; // r9d
  _QWORD *v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  ULONG_PTR v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // ecx
  unsigned __int8 v60; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  BOOL v62; // eax
  struct _KPRCB *v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // [rsp+50h] [rbp-B0h]
  BOOL v66; // [rsp+54h] [rbp-ACh]
  int v67; // [rsp+58h] [rbp-A8h]
  _BYTE *v68; // [rsp+68h] [rbp-98h]
  unsigned int *v69; // [rsp+70h] [rbp-90h]
  int v70; // [rsp+78h] [rbp-88h] BYREF
  int v71; // [rsp+7Ch] [rbp-84h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  unsigned int *v73; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+98h] [rbp-68h] BYREF
  int v76; // [rsp+9Ch] [rbp-64h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  int v78; // [rsp+A8h] [rbp-58h]
  int v79; // [rsp+ACh] [rbp-54h]
  int v80; // [rsp+B0h] [rbp-50h]
  _BYTE *v81; // [rsp+B8h] [rbp-48h]
  __int64 v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  _QWORD v84[7]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  __int64 *v87; // [rsp+118h] [rbp+18h]
  _QWORD v88[3]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v89; // [rsp+138h] [rbp+38h] BYREF
  __int64 v90; // [rsp+140h] [rbp+40h]
  _QWORD v91[2]; // [rsp+148h] [rbp+48h] BYREF

  v12 = a1;
  v13 = a9;
  v77 = a10;
  v87 = a11;
  BugCheckParameter2 = a3;
  v74 = a1;
  v67 = a9;
  memset(v88, 0, sizeof(v88));
  memset(v84, 0, sizeof(v84));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a7 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(1984LL * a7 + *(_QWORD *)(v12 + 16) + 1808)
    && (_DWORD)InitializationPhase )
  {
    return 3221225495LL;
  }
  if ( CurrentIrql == 2 )
  {
    v13 = a9 | 8;
    v67 = a9 | 8;
  }
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v12, a5, 1u) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v12, a5, 0LL) )
    {
      MiReturnCommit(v12, a5);
      return 3221225626LL;
    }
  }
  if ( v77 )
    v76 = a5 + (*(_DWORD *)(v77 + 40) >> 12);
  else
    v76 = 0;
  if ( (v13 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0x20) != 0 || (unsigned int)MiSufficientAvailablePages(v12, a5 + 160) )
    {
      v78 = v13 & 0x10000000;
      if ( (v13 & 0x10000000) != 0 || (MiCreatePteCopyList(a5, 64LL, v88), HIDWORD(v88[0])) )
      {
        v66 = 0;
        if ( (v13 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
          v66 = CurrentIrql != 2;
        v16 = a7 | 0x80000000;
        if ( a7 < (unsigned __int16)KeNumberNodes )
          v16 = a7;
        v65 = v16;
        v69 = (unsigned int *)MiReferencePageRuns(v12, 1LL);
        v17 = (int *)v69;
        v85 = 0LL;
        v18 = -1;
        v82 = 0LL;
        v19 = &v69[4 * *v69 + 4];
        v73 = v19;
        if ( ((a4 - 1) & a4) != 0 )
          a4 = 0LL;
        v84[4] = a4;
        v80 = v13 & 0x2000;
        v84[2] = a2;
        v84[5] = a5;
        LOBYTE(v84[6]) = (v13 & 0x2000) != 0;
        v20 = *(_QWORD *)(v12 + 16);
        v83 = v20;
        v71 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = MmNumberOfChannels;
            v22 = 0LL;
            v23 = BugCheckParameter2;
            v68 = 0LL;
            if ( (unsigned int)MmNumberOfChannels > 1 )
            {
              v24 = (unsigned int *)v65;
              if ( (v65 & 0x80000000) == 0 )
              {
                v58 = v65;
              }
              else
              {
                if ( v18 == -1 )
                {
                  v57 = *(_QWORD *)(v12 + 7880);
                  if ( BugCheckParameter2 <= v57 )
                    v57 = BugCheckParameter2;
                  v18 = MiPageToNode(v57, 0);
                  v24 = (unsigned int *)v65;
                  v20 = v83;
                  v22 = 0LL;
                  v82 = qword_140465A50 + 4LL * v18 * (unsigned __int16)KeNumberNodes;
                  v19 = v73;
                  v17 = (int *)v69;
                  v85 = (unsigned int *)(v82 + 4LL * (unsigned __int16)KeNumberNodes);
                }
                v58 = v18;
              }
              if ( (*(_DWORD *)(1984 * v58 + v20 + 1912) & 1) != 0 )
              {
                v22 = (_BYTE *)(1984 * v58 + v20 + 1942);
                v68 = v22;
                if ( a8 >= 0 )
                {
                  v59 = 0;
                  if ( v21 )
                  {
                    do
                    {
                      if ( (unsigned __int8)*v22 == a8 )
                        break;
                      ++v22;
                      ++v59;
                    }
                    while ( v59 < v21 );
                    v68 = v22;
                  }
                  v21 = 1;
                }
              }
            }
            else
            {
              v24 = (unsigned int *)v65;
            }
            v25 = &v22[v21];
            v81 = v25;
            do
            {
              v26 = *v17;
              v84[3] = v23;
              if ( v26 )
              {
                while ( 1 )
                {
                  v27 = (unsigned int)(v26 - 1);
                  v79 = v27;
                  v28 = *((unsigned __int8 *)v19 + 2 * v27);
                  v29 = *((unsigned __int8 *)v19 + 2 * v27 + 1);
                  v27 *= 2LL;
                  v30 = *(_QWORD *)&v17[2 * v27 + 4];
                  v31 = *(_QWORD *)&v17[2 * v27 + 6];
                  v84[0] = v30;
                  v84[1] = v31 + v30;
                  if ( v84[2] >= (unsigned __int64)(v31 + v30) )
                    break;
                  if ( ((int)v24 < 0 || (_DWORD)v28 == (_DWORD)v24) && (!v22 || (_BYTE)v29 == *v22) )
                  {
                    while ( 1 )
                    {
                      if ( !(unsigned int)MiCollapseRunTopDown(v84, v29)
                        || !*(_QWORD *)(*(_QWORD *)(v12 + 16) + 1984 * v28 + 1808) && (_DWORD)InitializationPhase )
                      {
                        goto LABEL_61;
                      }
                      v32 = v84[1];
                      v75 = 0;
                      v33 = v84[5];
                      v34 = v84[1] - v84[5];
                      v86 = v84[1] - v84[5];
                      if ( LOBYTE(v84[6]) == 1 && v84[1] - v84[0] < v84[5] )
                      {
                        v34 = v84[0];
                        v86 = v84[0];
                      }
                      v35 = 48 * v34 - 0x58000000000LL;
                      if ( LOBYTE(v84[6]) == 1 )
                      {
                        if ( v84[5] > v84[1] - v84[0] )
                          v33 = v84[1] - v84[0];
                      }
                      else
                      {
                        v36 = MiPfnsWorthTrying(v12, 48 * (int)v34, v84[5], v67, (__int64)&v75);
                        if ( v36 )
                          goto LABEL_31;
                        if ( v75 == 1 )
                          MiEmptyKernelStackCache();
                        v12 = v74;
                      }
                      v36 = MiClaimPhysicalRun(v12, v34, v33, v84[3], (__int64)v88, v67, -1, v77, a6, 0LL);
                      if ( v77 )
                      {
                        v39 = *(_DWORD *)(v77 + 40) >> 12;
                        if ( v39 == v76 )
                          goto LABEL_44;
                        v84[5] = (unsigned int)(v76 - v39);
                      }
                      else if ( !v36 )
                      {
LABEL_44:
                        MiDereferencePageRunsEx(v69, 1LL);
                        MiReleasePteCopyList(v88);
                        if ( v80 )
                        {
                          v42 = a6;
                        }
                        else
                        {
                          v40 = (v34 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                          v41 = (a5 + v34) & 0xFFFFFFFFFFFFFE00uLL;
                          if ( v40 < v41 )
                            MiUpdateLargePageBitMap(v74, v40, v41 - v40, 1, 1);
                          v42 = a6;
                          MiConvertContiguousPages((unsigned __int64 *)(48 * v34 - 0x58000000000LL), a5, a6);
                        }
                        if ( (v67 & 0x40000000) == 0 )
                        {
                          v43 = v35 + 48 * a5;
                          do
                          {
                            MiSetPfnOwnedAndActive(v35, 0, -8, v42, ((v67 & 0x100000) != 0) + 1);
                            v35 += 48LL;
                          }
                          while ( v35 != v43 );
                          v34 = v86;
                        }
                        *v87 = v34;
                        return 0LL;
                      }
                      if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v35 + 40) >> 40) & 0x3FFLL)) == v74 )
                      {
                        if ( (*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                          && (*(_BYTE *)(v35 + 34) & 7) == 5 )
                        {
                          v60 = MiLockPageInline(48 * v34 - 0x58000000000LL);
                          if ( (*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                            && (*(_BYTE *)(v35 + 34) & 7) == 5 )
                          {
                            if ( v78 )
                            {
                              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v60 < 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                              }
                              __writecr8(v60);
                              v12 = v74;
                              v19 = v73;
                              v62 = 0;
                              v17 = (int *)v69;
                              v24 = (unsigned int *)v65;
                              v22 = v68;
                              v25 = v81;
                              v23 = BugCheckParameter2;
                              v66 = 0;
                              goto LABEL_131;
                            }
                          }
                          else
                          {
                            v71 = 1;
                          }
                          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v60 < 2u )
                          {
                            v63 = KeGetCurrentPrcb();
                            _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
                            KiRemoveSystemWorkPriorityKick(v63);
                          }
                          __writecr8(v60);
                          v32 = v84[1];
                        }
                        else
                        {
                          v71 = 1;
                        }
                      }
LABEL_31:
                      v37 = v32 - v36;
                      v38 = v36 <= v34 - v84[0];
                      v12 = v74;
                      if ( !v38 )
                      {
                        v84[3] = v37 - 1;
LABEL_61:
                        v17 = (int *)v69;
                        v24 = (unsigned int *)v65;
                        v22 = v68;
                        break;
                      }
                      v84[1] = v37;
                    }
                  }
                  v26 = v79;
                  v19 = v73;
                  if ( !v79 )
                    goto LABEL_129;
                }
                v19 = v73;
LABEL_129:
                v23 = BugCheckParameter2;
                v25 = v81;
              }
              v62 = v66;
LABEL_131:
              if ( !v22 )
                goto LABEL_136;
              v68 = ++v22;
            }
            while ( v22 < v25 );
            if ( v18 == -1 )
              break;
            v24 = (unsigned int *)(v82 + 4);
            v82 = (__int64)v24;
            if ( v24 == v85 )
              break;
            v18 = *v24;
            v20 = v83;
          }
LABEL_136:
          if ( !v62 || v71 != 1 )
            break;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
          {
            v89 = 0LL;
            v90 = 0LL;
            v91[1] = 16LL;
            v64 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            v90 = a5 << 12;
            v89 = v64;
            v91[0] = &v89;
            EtwTraceKernelEvent((unsigned int)v91, 1, 537919488, 625, 4200962);
            v19 = v73;
            v17 = (int *)v69;
          }
          if ( byte_140466954 )
          {
            MiQueueWorkingSetRequest(v12, 32LL, v17, v24);
            v19 = v73;
            v17 = (int *)v69;
          }
          v20 = v83;
          v18 = -1;
          v66 = 0;
        }
        v50 = -1073741801;
        MiDereferencePageRunsEx(v17, 1LL);
        v13 = v67;
      }
      else
      {
        v50 = -1073741670;
      }
    }
    else
    {
      v50 = -1073741670;
    }
LABEL_144:
    MiReleasePteCopyList(v88);
    if ( (v13 & 0x20000000) == 0 )
    {
      if ( (ULONG_PTR *)v12 == &MiSystemPartition )
        MiReturnResidentAvailable(a5);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8128), a5);
      MiReturnCommit(v12, a5);
    }
    return v50;
  }
  v45 = (KeFeatureBits & 0x2000000000LL) == 0;
  v70 = v45;
  v46 = v45;
  do
  {
    v47 = v46;
    if ( a5 == MiLargePageSizes[v46] )
      break;
    ++v46;
    v70 = v47 + 1;
    v45 = v47 + 1;
  }
  while ( (unsigned int)(v47 + 1) < 3 );
  v13 |= 0x4000u;
  LargeNodePage = (unsigned __int64 *)MiFindLargeNodePage(v12, a7, (unsigned int)&v70, v45, v13, 0);
  v49 = LargeNodePage;
  if ( !LargeNodePage )
  {
    v50 = -1073741801;
    goto LABEL_144;
  }
  if ( a6 != 1 )
    MiConvertContiguousPages(LargeNodePage, a5, a6);
  v51 = v77;
  v52 = (__int64)(v49 + 0xB000000000LL) / 48;
  *v87 = v52;
  if ( v51 )
  {
    v53 = *(_DWORD *)(v51 + 40);
    v54 = (_QWORD *)(v51 + 8 * (((unsigned __int64)v53 >> 12) + 6));
    v55 = MiLargePageSizes[v70];
    if ( (v49[2] & 0x3E0) != 0 )
      *(_QWORD *)(v51 + 24) = 1LL;
    if ( v55 )
    {
      v56 = v55;
      do
      {
        *v54++ = v52++;
        --v56;
      }
      while ( v56 );
      v53 = *(_DWORD *)(v51 + 40);
    }
    *(_DWORD *)(v51 + 40) = v53 + ((_DWORD)v55 << 12);
  }
  return 0LL;
}
