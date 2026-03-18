/*
 * XREFs of MiFindContiguousPages @ 0x1400B9E60
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiFindPagesForMdl @ 0x1400DCF54 (MiFindPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1400F5D4C (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSlabEntry @ 0x1402DB1F8 (MiAllocateSlabEntry.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x1402E8A58 (MiRebuildLargePage.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x140888B00 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408994D0 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     MiClaimPhysicalRun @ 0x1400B9088 (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x1400BA3FC (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400BA490 (MiPfnsWorthTrying.c)
 *     MiUpdateLargePageBitMap @ 0x1400BD2AC (MiUpdateLargePageBitMap.c)
 *     MiConvertContiguousPages @ 0x1400C4818 (MiConvertContiguousPages.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x140129F88 (MiSetPfnOwnedAndActive.c)
 *     MiDereferencePageRunsEx @ 0x14012C280 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14012FB84 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1401322E8 (MiReleasePteCopyList.c)
 *     MiQueueWorkingSetRequest @ 0x14017F8E0 (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFindLargeNodePage @ 0x1402C0618 (MiFindLargeNodePage.c)
 *     MiEmptyKernelStackCache @ 0x1402D16F0 (MiEmptyKernelStackCache.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
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
  int v42; // edi
  unsigned __int64 v43; // rbx
  __int64 v45; // r9
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  __int64 LargeNodePage; // rax
  __int64 v50; // rbx
  unsigned int v51; // ebx
  __int64 v52; // r10
  __int64 v53; // rdx
  unsigned int v54; // r9d
  _QWORD *v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rax
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // ecx
  unsigned __int8 v61; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  BOOL v63; // eax
  struct _KPRCB *v64; // rcx
  __int64 v65; // rcx
  unsigned int v66; // [rsp+50h] [rbp-B0h]
  BOOL v67; // [rsp+54h] [rbp-ACh]
  int v68; // [rsp+58h] [rbp-A8h]
  _BYTE *v69; // [rsp+68h] [rbp-98h]
  unsigned int *v70; // [rsp+70h] [rbp-90h]
  int v71; // [rsp+78h] [rbp-88h] BYREF
  int v72; // [rsp+7Ch] [rbp-84h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h]
  unsigned int *v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+98h] [rbp-68h] BYREF
  int v77; // [rsp+9Ch] [rbp-64h]
  __int64 v78; // [rsp+A0h] [rbp-60h]
  int v79; // [rsp+A8h] [rbp-58h]
  int v80; // [rsp+ACh] [rbp-54h]
  int v81; // [rsp+B0h] [rbp-50h]
  _BYTE *v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  __int64 v84; // [rsp+C8h] [rbp-38h]
  _QWORD v85[7]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v86; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+110h] [rbp+10h]
  __int64 *v88; // [rsp+118h] [rbp+18h]
  _QWORD v89[3]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v90; // [rsp+138h] [rbp+38h] BYREF
  __int64 v91; // [rsp+140h] [rbp+40h]
  _QWORD v92[2]; // [rsp+148h] [rbp+48h] BYREF

  v12 = a1;
  v13 = a9;
  v78 = a10;
  v88 = a11;
  BugCheckParameter2 = a3;
  v75 = a1;
  v68 = a9;
  memset(v89, 0, sizeof(v89));
  memset(v85, 0, sizeof(v85));
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
    v68 = a9 | 8;
  }
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v12, a5, 1u) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident(v12, a5, 0LL, v45) )
    {
      MiReturnCommit(v12, a5);
      return 3221225626LL;
    }
  }
  if ( v78 )
    v77 = a5 + (*(_DWORD *)(v78 + 40) >> 12);
  else
    v77 = 0;
  if ( (v13 & 0x40) == 0 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0x20) != 0 || (unsigned int)MiSufficientAvailablePages(v12, a5 + 160) )
    {
      v79 = v13 & 0x10000000;
      if ( (v13 & 0x10000000) != 0 || (MiCreatePteCopyList(a5, 64LL, v89), HIDWORD(v89[0])) )
      {
        v67 = 0;
        if ( (v13 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
          v67 = CurrentIrql != 2;
        v16 = a7 | 0x80000000;
        if ( a7 < (unsigned __int16)KeNumberNodes )
          v16 = a7;
        v66 = v16;
        v70 = (unsigned int *)MiReferencePageRuns(v12, 1LL);
        v17 = (int *)v70;
        v86 = 0LL;
        v18 = -1;
        v83 = 0LL;
        v19 = &v70[4 * *v70 + 4];
        v74 = v19;
        if ( ((a4 - 1) & a4) != 0 )
          a4 = 0LL;
        v85[4] = a4;
        v81 = v13 & 0x2000;
        v85[2] = a2;
        v85[5] = a5;
        LOBYTE(v85[6]) = (v13 & 0x2000) != 0;
        v20 = *(_QWORD *)(v12 + 16);
        v84 = v20;
        v72 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = MmNumberOfChannels;
            v22 = 0LL;
            v23 = BugCheckParameter2;
            v69 = 0LL;
            if ( (unsigned int)MmNumberOfChannels > 1 )
            {
              v24 = (unsigned int *)v66;
              if ( (v66 & 0x80000000) == 0 )
              {
                v59 = v66;
              }
              else
              {
                if ( v18 == -1 )
                {
                  v58 = *(_QWORD *)(v12 + 7880);
                  if ( BugCheckParameter2 <= v58 )
                    v58 = BugCheckParameter2;
                  v18 = MiPageToNode(v58);
                  v24 = (unsigned int *)v66;
                  v20 = v84;
                  v22 = 0LL;
                  v83 = qword_140465750 + 4LL * v18 * (unsigned __int16)KeNumberNodes;
                  v19 = v74;
                  v17 = (int *)v70;
                  v86 = (unsigned int *)(v83 + 4LL * (unsigned __int16)KeNumberNodes);
                }
                v59 = v18;
              }
              if ( (*(_DWORD *)(1984 * v59 + v20 + 1912) & 1) != 0 )
              {
                v22 = (_BYTE *)(1984 * v59 + v20 + 1942);
                v69 = v22;
                if ( a8 >= 0 )
                {
                  v60 = 0;
                  if ( v21 )
                  {
                    do
                    {
                      if ( (unsigned __int8)*v22 == a8 )
                        break;
                      ++v22;
                      ++v60;
                    }
                    while ( v60 < v21 );
                    v69 = v22;
                  }
                  v21 = 1;
                }
              }
            }
            else
            {
              v24 = (unsigned int *)v66;
            }
            v25 = &v22[v21];
            v82 = v25;
            do
            {
              v26 = *v17;
              v85[3] = v23;
              if ( v26 )
              {
                while ( 1 )
                {
                  v27 = (unsigned int)(v26 - 1);
                  v80 = v27;
                  v28 = *((unsigned __int8 *)v19 + 2 * v27);
                  v29 = *((unsigned __int8 *)v19 + 2 * v27 + 1);
                  v27 *= 2LL;
                  v30 = *(_QWORD *)&v17[2 * v27 + 4];
                  v31 = *(_QWORD *)&v17[2 * v27 + 6];
                  v85[0] = v30;
                  v85[1] = v31 + v30;
                  if ( v85[2] >= (unsigned __int64)(v31 + v30) )
                    break;
                  if ( ((int)v24 < 0 || (_DWORD)v28 == (_DWORD)v24) && (!v22 || (_BYTE)v29 == *v22) )
                  {
                    while ( 1 )
                    {
                      if ( !(unsigned int)MiCollapseRunTopDown(v85, v29)
                        || !*(_QWORD *)(*(_QWORD *)(v12 + 16) + 1984 * v28 + 1808) && (_DWORD)InitializationPhase )
                      {
                        goto LABEL_61;
                      }
                      v32 = v85[1];
                      v76 = 0;
                      v33 = v85[5];
                      v34 = v85[1] - v85[5];
                      v87 = v85[1] - v85[5];
                      if ( LOBYTE(v85[6]) == 1 && v85[1] - v85[0] < v85[5] )
                      {
                        v34 = v85[0];
                        v87 = v85[0];
                      }
                      v35 = 48 * v34 - 0x58000000000LL;
                      if ( LOBYTE(v85[6]) == 1 )
                      {
                        if ( v85[5] > v85[1] - v85[0] )
                          v33 = v85[1] - v85[0];
                      }
                      else
                      {
                        v36 = MiPfnsWorthTrying(v12, 48 * (int)v34, v85[5], v68, (__int64)&v76);
                        if ( v36 )
                          goto LABEL_31;
                        if ( v76 == 1 )
                          MiEmptyKernelStackCache();
                        v12 = v75;
                      }
                      v36 = MiClaimPhysicalRun(v12, v34, v33, v85[3], (__int64)v89, v68, -1, v78, a6, 0LL);
                      if ( v78 )
                      {
                        v39 = *(_DWORD *)(v78 + 40) >> 12;
                        if ( v39 == v77 )
                          goto LABEL_44;
                        v85[5] = (unsigned int)(v77 - v39);
                      }
                      else if ( !v36 )
                      {
LABEL_44:
                        MiDereferencePageRunsEx(v70, 1LL);
                        MiReleasePteCopyList(v89);
                        if ( v81 )
                        {
                          v42 = a6;
                        }
                        else
                        {
                          v40 = (v34 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                          v41 = (a5 + v34) & 0xFFFFFFFFFFFFFE00uLL;
                          if ( v40 < v41 )
                            MiUpdateLargePageBitMap(v75, v40, v41 - v40, 1, 1);
                          v42 = a6;
                          MiConvertContiguousPages(48 * v34 - 0x58000000000LL, a5);
                        }
                        if ( (v68 & 0x40000000) == 0 )
                        {
                          v43 = v35 + 48 * a5;
                          do
                          {
                            MiSetPfnOwnedAndActive(v35, 0, -8, v42, ((v68 & 0x100000) != 0) + 1);
                            v35 += 48LL;
                          }
                          while ( v35 != v43 );
                          v34 = v87;
                        }
                        *v88 = v34;
                        return 0LL;
                      }
                      if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v35 + 40) >> 40) & 0x3FFLL)) == v75 )
                      {
                        if ( (*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                          && (*(_BYTE *)(v35 + 34) & 7) == 5 )
                        {
                          v61 = MiLockPageInline(48 * v34 - 0x58000000000LL);
                          if ( (*(_QWORD *)(v35 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL
                            && (*(_BYTE *)(v35 + 34) & 7) == 5 )
                          {
                            if ( v79 )
                            {
                              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v61 < 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                              }
                              __writecr8(v61);
                              v12 = v75;
                              v19 = v74;
                              v63 = 0;
                              v17 = (int *)v70;
                              v24 = (unsigned int *)v66;
                              v22 = v69;
                              v25 = v82;
                              v23 = BugCheckParameter2;
                              v67 = 0;
                              goto LABEL_131;
                            }
                          }
                          else
                          {
                            v72 = 1;
                          }
                          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v61 < 2u )
                          {
                            v64 = KeGetCurrentPrcb();
                            _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
                            KiRemoveSystemWorkPriorityKick(v64);
                          }
                          __writecr8(v61);
                          v32 = v85[1];
                        }
                        else
                        {
                          v72 = 1;
                        }
                      }
LABEL_31:
                      v37 = v32 - v36;
                      v38 = v36 <= v34 - v85[0];
                      v12 = v75;
                      if ( !v38 )
                      {
                        v85[3] = v37 - 1;
LABEL_61:
                        v17 = (int *)v70;
                        v24 = (unsigned int *)v66;
                        v22 = v69;
                        break;
                      }
                      v85[1] = v37;
                    }
                  }
                  v26 = v80;
                  v19 = v74;
                  if ( !v80 )
                    goto LABEL_129;
                }
                v19 = v74;
LABEL_129:
                v23 = BugCheckParameter2;
                v25 = v82;
              }
              v63 = v67;
LABEL_131:
              if ( !v22 )
                goto LABEL_136;
              v69 = ++v22;
            }
            while ( v22 < v25 );
            if ( v18 == -1 )
              break;
            v24 = (unsigned int *)(v83 + 4);
            v83 = (__int64)v24;
            if ( v24 == v86 )
              break;
            v18 = *v24;
            v20 = v84;
          }
LABEL_136:
          if ( !v63 || v72 != 1 )
            break;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
          {
            v90 = 0LL;
            v91 = 0LL;
            v92[1] = 16LL;
            v65 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            v91 = a5 << 12;
            v90 = v65;
            v92[0] = &v90;
            EtwTraceKernelEvent((unsigned int)v92, 1, 537919488, 625, 4200962);
            v19 = v74;
            v17 = (int *)v70;
          }
          if ( byte_140466654 )
          {
            MiQueueWorkingSetRequest(v12, 32LL, v17, v24);
            v19 = v74;
            v17 = (int *)v70;
          }
          v20 = v84;
          v18 = -1;
          v67 = 0;
        }
        v51 = -1073741801;
        MiDereferencePageRunsEx(v17, 1LL);
        v13 = v68;
      }
      else
      {
        v51 = -1073741670;
      }
    }
    else
    {
      v51 = -1073741670;
    }
LABEL_144:
    MiReleasePteCopyList(v89);
    if ( (v13 & 0x20000000) == 0 )
    {
      if ( (ULONG_PTR *)v12 == &MiSystemPartition )
        MiReturnResidentAvailable(a5);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8128), a5);
      MiReturnCommit(v12, a5);
    }
    return v51;
  }
  v46 = (KeFeatureBits & 0x2000000000LL) == 0;
  v71 = v46;
  v47 = v46;
  do
  {
    v48 = v47;
    if ( a5 == MiLargePageSizes[v47] )
      break;
    ++v47;
    v71 = v48 + 1;
    v46 = v48 + 1;
  }
  while ( (unsigned int)(v48 + 1) < 3 );
  v13 |= 0x4000u;
  LargeNodePage = MiFindLargeNodePage(v12, a7, (unsigned int)&v71, v46, v13, 0);
  v50 = LargeNodePage;
  if ( !LargeNodePage )
  {
    v51 = -1073741801;
    goto LABEL_144;
  }
  if ( a6 != 1 )
    MiConvertContiguousPages(LargeNodePage, a5);
  v52 = v78;
  v53 = (v50 + 0x58000000000LL) / 48;
  *v88 = v53;
  if ( v52 )
  {
    v54 = *(_DWORD *)(v52 + 40);
    v55 = (_QWORD *)(v52 + 8 * (((unsigned __int64)v54 >> 12) + 6));
    v56 = MiLargePageSizes[v71];
    if ( (*(_DWORD *)(v50 + 16) & 0x3E0LL) != 0 )
      *(_QWORD *)(v52 + 24) = 1LL;
    if ( v56 )
    {
      v57 = v56;
      do
      {
        *v55++ = v53++;
        --v57;
      }
      while ( v57 );
      v54 = *(_DWORD *)(v52 + 40);
    }
    *(_DWORD *)(v52 + 40) = v54 + ((_DWORD)v56 << 12);
  }
  return 0LL;
}
