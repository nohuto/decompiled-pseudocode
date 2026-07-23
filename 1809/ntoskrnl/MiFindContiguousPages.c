/*
 * XREFs of MiFindContiguousPages @ 0x14009A050
 * Callers:
 *     MiFindPagesForMdl @ 0x140011954 (MiFindPagesForMdl.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x14084EB60 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 * Callees:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiCollapseRunTopDown @ 0x14009A65C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14009A6F0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14009BE60 (MiClaimPhysicalRun.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x14012969C (MiSetPfnOwnedAndActive.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     MiQueueWorkingSetRequest @ 0x140175DFC (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiEmptyKernelStackCache @ 0x1402BB874 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  unsigned __int64 v12; // r9
  __int64 v14; // rcx
  int v16; // r12d
  unsigned __int8 CurrentIrql; // di
  signed int v18; // r12d
  int v19; // r11d
  int *v20; // r8
  __int64 v21; // rdx
  unsigned int *v22; // rdx
  int v23; // esi
  __int64 v24; // r10
  unsigned int v25; // ebx
  _BYTE *v26; // r9
  unsigned __int64 v27; // rdi
  _BYTE *v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r12
  int v37; // r15d
  __int64 v38; // rbx
  __int64 v39; // r14
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  bool v42; // cc
  int v43; // ecx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r8
  unsigned int v46; // r15d
  unsigned __int64 v47; // rdi
  BOOL v49; // eax
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  unsigned __int64 *LargeNodePage; // rax
  unsigned __int64 *v55; // rbx
  __int64 v56; // r10
  __int64 v57; // rdx
  unsigned int v58; // r9d
  _QWORD *v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned int v63; // ecx
  __int64 v64; // rcx
  unsigned int v65; // ecx
  unsigned __int8 v66; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v68; // rcx
  unsigned __int16 *v69; // r14
  __int64 v70; // rcx
  int v71; // [rsp+50h] [rbp-B0h]
  BOOL v72; // [rsp+54h] [rbp-ACh]
  signed int v73; // [rsp+60h] [rbp-A0h]
  int v74; // [rsp+64h] [rbp-9Ch]
  _BYTE *v75; // [rsp+68h] [rbp-98h]
  unsigned int *v76; // [rsp+70h] [rbp-90h]
  int v77; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v79; // [rsp+80h] [rbp-80h]
  unsigned int *v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  int v82; // [rsp+98h] [rbp-68h] BYREF
  int v83; // [rsp+9Ch] [rbp-64h]
  int v84; // [rsp+A0h] [rbp-60h]
  unsigned int v85; // [rsp+A4h] [rbp-5Ch]
  int v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+ACh] [rbp-54h]
  _BYTE *v88; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v89; // [rsp+B8h] [rbp-48h]
  __int64 v90; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v91; // [rsp+C8h] [rbp-38h]
  __int64 *v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v94; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v98; // [rsp+100h] [rbp+0h]
  bool v99; // [rsp+108h] [rbp+8h]
  _QWORD v100[3]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v101; // [rsp+128h] [rbp+28h] BYREF
  __int64 v102; // [rsp+130h] [rbp+30h]
  _QWORD v103[2]; // [rsp+138h] [rbp+38h] BYREF

  v12 = a5;
  v14 = a10;
  v16 = a9;
  v92 = a11;
  memset(v100, 0, sizeof(v100));
  v79 = a3;
  v71 = a9;
  v81 = a10;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a7 < (unsigned __int16)KeNumberNodes && (a7 & 0x80000000) == 0 )
  {
    if ( !*(_QWORD *)(1984LL * a7 + *(_QWORD *)(a1 + 16) + 1808) && (_DWORD)InitializationPhase )
      return 3221225495LL;
    v14 = v81;
  }
  if ( CurrentIrql == 2 )
  {
    v16 = a9 | 8;
    v71 = a9 | 8;
  }
  if ( (v16 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1u) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, a5, 0LL) )
    {
      MiReturnCommit(a1, a5);
      return 3221225626LL;
    }
    v14 = v81;
    v12 = a5;
  }
  if ( v14 )
    v83 = v12 + (*(_DWORD *)(v14 + 40) >> 12);
  else
    v83 = 0;
  if ( (v16 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 || (unsigned int)MiSufficientAvailablePages(a1, v12 + 160) )
    {
      v84 = v16 & 0x10000000;
      if ( (v16 & 0x10000000) != 0 || (MiCreatePteCopyList(a5, 64LL, v100), HIDWORD(v100[0])) )
      {
        v72 = 0;
        if ( (v16 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
          v72 = CurrentIrql != 2;
        v18 = a7 | 0x80000000;
        if ( a7 < (unsigned __int16)KeNumberNodes )
          v18 = a7;
        v73 = v18;
        v76 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
        v19 = -1;
        v91 = 0LL;
        v20 = (int *)v76;
        v74 = -1;
        v21 = *v76 + 1LL;
        v89 = 0LL;
        v22 = &v76[4 * v21];
        v80 = v22;
        if ( ((a4 - 1) & a4) != 0 )
          a4 = 0LL;
        v97 = a4;
        v23 = v71;
        v95 = a2;
        v87 = v71 & 0x2000;
        v98 = a5;
        v99 = (v71 & 0x2000) != 0;
        v24 = *(_QWORD *)(a1 + 16);
        v90 = v24;
        v78 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = MmNumberOfChannels;
            v26 = 0LL;
            v27 = v79;
            v75 = 0LL;
            if ( (unsigned int)MmNumberOfChannels > 1 )
            {
              if ( v18 >= 0 )
              {
                v63 = v18;
              }
              else
              {
                if ( v19 == -1 )
                {
                  v62 = *(_QWORD *)(a1 + 7112);
                  if ( v79 <= v62 )
                    v62 = v79;
                  v19 = MiPageToNode(v62, 0LL, v20, 0LL);
                  v24 = v90;
                  v26 = 0LL;
                  v74 = v19;
                  v22 = v80;
                  v89 = (unsigned __int16 *)((char *)qword_14043B110
                                           + 2 * v19 * (unsigned int)(unsigned __int16)KeNumberNodes);
                  v20 = (int *)v76;
                  v91 = &v89[(unsigned __int16)KeNumberNodes];
                }
                v63 = v19;
              }
              v64 = 1984LL * v63;
              if ( (*(_DWORD *)(v64 + v24 + 1888) & 1) != 0 )
              {
                v26 = (_BYTE *)(v64 + v24 + 1918);
                v75 = v26;
                if ( a8 >= 0 )
                {
                  v65 = 0;
                  if ( v25 )
                  {
                    do
                    {
                      if ( (unsigned __int8)*v26 == a8 )
                        break;
                      ++v26;
                      ++v65;
                    }
                    while ( v65 < v25 );
                    v75 = v26;
                  }
                  v25 = 1;
                }
              }
            }
            v28 = &v26[v25];
            v88 = v28;
            do
            {
              v29 = *v20;
              v96 = v27;
              if ( v29 )
              {
                while ( 1 )
                {
                  v30 = (unsigned int)(v29 - 1);
                  v86 = v30;
                  v31 = *((unsigned __int8 *)v22 + 2 * v30);
                  v32 = *((unsigned __int8 *)v22 + 2 * v30 + 1);
                  v30 *= 2LL;
                  v85 = v31;
                  v33 = *(_QWORD *)&v20[2 * v30 + 4];
                  v34 = *(_QWORD *)&v20[2 * v30 + 6];
                  v93 = v33;
                  v94 = v34 + v33;
                  if ( v95 >= v34 + v33 )
                    break;
                  if ( (v18 < 0 || v31 == v18) && (!v26 || (_BYTE)v32 == *v26) )
                  {
                    while ( 1 )
                    {
                      if ( !(unsigned int)MiCollapseRunTopDown(&v93, v32)
                        || !*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1984LL * v31 + 1808) && (_DWORD)InitializationPhase )
                      {
                        goto LABEL_58;
                      }
                      v35 = v94;
                      v36 = v93;
                      v82 = 0;
                      v37 = v98;
                      v38 = v94 - v98;
                      if ( v99 && v94 - v93 < v98 )
                        v38 = v93;
                      v39 = 48 * v38 - 0x58000000000LL;
                      if ( v99 )
                      {
                        if ( v98 > v94 - v93 )
                          v37 = v94 - v93;
                      }
                      else
                      {
                        v40 = MiPfnsWorthTrying(a1, 48 * (int)v38, v98, v23, (__int64)&v82);
                        if ( v40 )
                          goto LABEL_30;
                        if ( v82 == 1 )
                          MiEmptyKernelStackCache();
                      }
                      v40 = MiClaimPhysicalRun(a1, v38, v37, v96, (__int64)v100, v71, -1, v81, a6, 0LL);
                      if ( v81 )
                      {
                        v43 = *(_DWORD *)(v81 + 40) >> 12;
                        if ( v43 == v83 )
                          goto LABEL_43;
                        v98 = (unsigned int)(v83 - v43);
                      }
                      else if ( !v40 )
                      {
LABEL_43:
                        MiDereferencePageRunsEx(v76, 1LL);
                        MiReleasePteCopyList(v100);
                        if ( v87 )
                        {
                          v46 = a6;
                        }
                        else
                        {
                          v44 = (v38 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                          v45 = (a5 + v38) & 0xFFFFFFFFFFFFFE00uLL;
                          if ( v44 < v45 )
                            MiUpdateLargePageBitMap(a1, v44, v45 - v44, 1, 1);
                          v46 = a6;
                          MiConvertContiguousPages((unsigned __int64 *)(48 * v38 - 0x58000000000LL), a5, a6);
                        }
                        if ( (v71 & 0x40000000) == 0 )
                        {
                          v47 = v39 + 48 * a5;
                          do
                          {
                            MiSetPfnOwnedAndActive(v39, 0, -8, v46, ((v71 & 0x100000) != 0) + 1);
                            v39 += 48LL;
                          }
                          while ( v39 != v47 );
                        }
                        *v92 = v38;
                        return 0LL;
                      }
                      if ( *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v39 + 40) >> 40) & 0x3FFLL)) == a1 )
                      {
                        if ( (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                          && (*(_BYTE *)(v39 + 34) & 7) == 5 )
                        {
                          v66 = MiLockPageInline(48 * v38 - 0x58000000000LL);
                          if ( (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                            && (*(_BYTE *)(v39 + 34) & 7) == 5 )
                          {
                            if ( v84 )
                            {
                              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                              }
                              __writecr8(v66);
                              v23 = v71;
                              v22 = v80;
                              v49 = 0;
                              v20 = (int *)v76;
                              v18 = v73;
                              v26 = v75;
                              v28 = v88;
                              v27 = v79;
                              v72 = 0;
                              goto LABEL_62;
                            }
                          }
                          else
                          {
                            v78 = 1;
                          }
                          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
                          {
                            v68 = KeGetCurrentPrcb();
                            _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
                            KiRemoveSystemWorkPriorityKick(v68);
                          }
                          __writecr8(v66);
                          v35 = v94;
                          v36 = v93;
                        }
                        else
                        {
                          v78 = 1;
                        }
                      }
LABEL_30:
                      v41 = v35 - v40;
                      v42 = v40 <= v38 - v36;
                      v23 = v71;
                      if ( !v42 )
                      {
                        v96 = v41 - 1;
LABEL_58:
                        v20 = (int *)v76;
                        v18 = v73;
                        v26 = v75;
                        break;
                      }
                      v31 = v85;
                      v94 = v41;
                    }
                  }
                  v29 = v86;
                  v22 = v80;
                  if ( !v86 )
                    goto LABEL_60;
                }
                v22 = v80;
LABEL_60:
                v27 = v79;
                v28 = v88;
              }
              v49 = v72;
LABEL_62:
              if ( !v26 )
                goto LABEL_63;
              v75 = ++v26;
            }
            while ( v26 < v28 );
            if ( v74 == -1 )
              break;
            v69 = v89 + 1;
            v89 = v69;
            if ( v69 == v91 )
              break;
            v19 = *v69;
            v24 = v90;
            v74 = v19;
          }
LABEL_63:
          if ( !v49 || v78 != 1 )
            break;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
          {
            v101 = 0LL;
            v102 = 0LL;
            v103[1] = 16LL;
            v70 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            v102 = a5 << 12;
            v101 = v70;
            v103[0] = &v101;
            EtwTraceKernelEvent((unsigned int)v103, 1, 537919488, 625, 4200962);
            v22 = v80;
            v20 = (int *)v76;
          }
          if ( byte_14043BF94 )
          {
            MiQueueWorkingSetRequest(a1, 32LL, v20);
            v22 = v80;
            v20 = (int *)v76;
          }
          v24 = v90;
          v19 = -1;
          v74 = -1;
          v72 = 0;
        }
        v50 = -1073741801;
        MiDereferencePageRunsEx(v20, 1LL);
      }
      else
      {
        v23 = v71;
        v50 = -1073741670;
      }
    }
    else
    {
      v23 = v71;
      v50 = -1073741670;
    }
LABEL_66:
    MiReleasePteCopyList(v100);
    if ( (v23 & 0x20000000) == 0 )
    {
      if ( (ULONG_PTR *)a1 == &MiSystemPartition )
        MiReturnResidentAvailable(a5);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a5);
      MiReturnCommit(a1, a5);
    }
    return v50;
  }
  v51 = (KeFeatureBits & 0x2000000000LL) == 0;
  v77 = v51;
  v52 = v51;
  do
  {
    v53 = v52;
    if ( v12 == MiLargePageSizes[v52] )
      break;
    ++v52;
    v77 = v53 + 1;
    v51 = v53 + 1;
  }
  while ( (unsigned int)(v53 + 1) < 3 );
  v23 = v71 | 0x4000;
  LargeNodePage = (unsigned __int64 *)MiFindLargeNodePage(a1, a7, (unsigned int)&v77, v51, v71 | 0x4000u, 0);
  v55 = LargeNodePage;
  if ( !LargeNodePage )
  {
    v50 = -1073741801;
    goto LABEL_66;
  }
  if ( a6 != 1 )
    MiConvertContiguousPages(LargeNodePage, a5, a6);
  v56 = v81;
  v57 = (__int64)(v55 + 0xB000000000LL) / 48;
  *v92 = v57;
  if ( v56 )
  {
    v58 = *(_DWORD *)(v56 + 40);
    v59 = (_QWORD *)(v56 + 8 * (((unsigned __int64)v58 >> 12) + 6));
    v60 = MiLargePageSizes[v77];
    if ( (v55[2] & 0x3E0) != 0 )
      *(_QWORD *)(v56 + 24) = 1LL;
    if ( v60 )
    {
      v61 = v60;
      do
      {
        *v59++ = v57++;
        --v61;
      }
      while ( v61 );
      v58 = *(_DWORD *)(v56 + 40);
    }
    *(_DWORD *)(v56 + 40) = v58 + ((_DWORD)v60 << 12);
  }
  return 0LL;
}
