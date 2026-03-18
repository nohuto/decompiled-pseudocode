/*
 * XREFs of MiResolvePageFileFault @ 0x140163A68
 * Callers:
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140100DF4 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiObtainFaultCharges @ 0x140053790 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     MiComputeFaultNode @ 0x14005A620 (MiComputeFaultNode.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiInitializeReadInProgressPfn @ 0x1400A5280 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1400A57C0 (MiReduceMdl.c)
 *     MiAllocateInPageSupport @ 0x1400A6124 (MiAllocateInPageSupport.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400DAF6C (MiGetAvailablePagesBelowPriority.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiComputeFaultCluster @ 0x1400F55B4 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140102110 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsStoreProcess @ 0x14011F348 (MiIsStoreProcess.c)
 *     MiLockSetPfnPriority @ 0x140121F80 (MiLockSetPfnPriority.c)
 *     MiReturnFaultCharges @ 0x140135A54 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x14013AB2C (MiSetInPagePrefetchPriority.c)
 *     MiFlowThroughInsertNode @ 0x14013C26C (MiFlowThroughInsertNode.c)
 *     MiIsPteInStore @ 0x1401587DC (MiIsPteInStore.c)
 *     MiFreePageChain @ 0x1401649C4 (MiFreePageChain.c)
 *     MiKernelStackVaToStackNode @ 0x140164A04 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v2; // r11
  __int64 v3; // r10
  unsigned int v4; // edi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  ULONG_PTR v10; // r12
  unsigned __int64 v11; // rbx
  __int64 updated; // rsi
  __int64 v13; // rcx
  ULONG_PTR *v14; // rcx
  unsigned __int64 v15; // r15
  char v16; // r10
  unsigned __int64 v17; // r14
  int v18; // r13d
  __int64 v19; // r10
  int SystemRegionType; // edx
  unsigned __int64 v21; // r11
  __int64 v22; // r10
  ULONG_PTR *v23; // rcx
  int v24; // r9d
  __int64 Process; // r13
  unsigned int v26; // r15d
  unsigned __int64 v27; // rax
  int v28; // r14d
  unsigned __int64 Address; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // al
  int IsPteInStore; // eax
  ULONG_PTR *v34; // rcx
  char v35; // r9
  unsigned int v36; // r10d
  int v37; // edi
  _QWORD *v38; // r11
  __int64 v39; // r15
  unsigned int v40; // r10d
  unsigned int v41; // r13d
  unsigned __int64 v42; // r8
  unsigned int v43; // r12d
  unsigned __int64 v44; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v46; // r10
  __int64 v47; // r12
  unsigned int v48; // r11d
  unsigned __int64 v49; // r9
  __int64 v50; // rax
  int v51; // r11d
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rsi
  unsigned int v54; // eax
  __int64 v55; // r10
  unsigned __int64 v56; // r11
  __int64 v57; // r13
  unsigned int v58; // r9d
  __int64 v59; // rax
  int v60; // r9d
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rdx
  unsigned int v63; // r9d
  unsigned __int64 v64; // rbx
  unsigned int v65; // eax
  unsigned int v66; // r11d
  unsigned __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // r9
  ULONG_PTR *v70; // rcx
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // r8
  __int64 PageChain; // rax
  int v74; // ebx
  __int64 v75; // r12
  unsigned int v76; // r14d
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 *v79; // r10
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // eax
  int v83; // r9d
  int v84; // edx
  __int64 v85; // rbx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // r9
  unsigned int v88; // r11d
  int v89; // r8d
  unsigned __int64 v90; // r14
  __int64 v91; // r9
  __int64 v92; // r8
  unsigned __int64 v93; // rbx
  _QWORD *v94; // r10
  int v95; // r11d
  char v96; // si
  char v97; // r12
  ULONG_PTR v98; // rsi
  __int64 v99; // r9
  unsigned int v100; // eax
  __int64 v101; // rbx
  ULONG_PTR v102; // rdx
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 result; // rax
  ULONG_PTR *v108; // rax
  __int64 v109; // rax
  unsigned int v110; // r9d
  __int64 v111; // rcx
  unsigned __int64 v112; // r10
  unsigned int v113; // ecx
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  bool v116; // r10
  unsigned int v117; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v119; // r11d
  int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // r10
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  int v128; // eax
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  _QWORD *v134; // rbx
  unsigned int v135; // r12d
  _QWORD *v136; // rbx
  char v137; // [rsp+48h] [rbp-79h]
  char v138; // [rsp+48h] [rbp-79h]
  char v139; // [rsp+4Ch] [rbp-75h]
  unsigned int v140; // [rsp+50h] [rbp-71h] BYREF
  unsigned int v141; // [rsp+54h] [rbp-6Dh]
  unsigned __int64 v142; // [rsp+58h] [rbp-69h]
  __int64 v143; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR *v144; // [rsp+68h] [rbp-59h]
  __int64 v145; // [rsp+70h] [rbp-51h] BYREF
  unsigned __int64 v146; // [rsp+78h] [rbp-49h]
  unsigned __int64 v147; // [rsp+80h] [rbp-41h] BYREF
  int v148; // [rsp+88h] [rbp-39h]
  unsigned __int64 v149; // [rsp+90h] [rbp-31h]
  unsigned __int64 v150; // [rsp+98h] [rbp-29h] BYREF
  int v151; // [rsp+A0h] [rbp-21h]
  __int64 v152; // [rsp+A8h] [rbp-19h]
  __int64 v153; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v154; // [rsp+B8h] [rbp-9h]
  __int64 v155; // [rsp+C0h] [rbp-1h]
  __int64 v156; // [rsp+C8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp+Fh]
  unsigned int v159; // [rsp+128h] [rbp+67h]
  ULONG_PTR v161; // [rsp+138h] [rbp+77h] BYREF
  va_list va; // [rsp+138h] [rbp+77h]
  __int64 *v163; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v161 = va_arg(va1, _QWORD);
  v163 = va_arg(va1, __int64 *);
  v2 = *a1;
  v3 = a1[7];
  v4 = 0;
  v5 = a1[2];
  v152 = 0LL;
  v149 = v2;
  v156 = v3;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v145 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v161 )
      MiUnlockProtoPoolPage(v161, 0x11u);
    return 3221225633LL;
  }
  v10 = v161;
  v11 = v145;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140465B00 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140465B00;
    }
    v4 = 16;
    v155 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    updated = *(_QWORD *)(v155 + 16);
    v13 = (*(_QWORD *)(v155 + 40) >> 40) & 0x3FFLL;
  }
  else
  {
    v155 = 0LL;
    updated = v145;
    if ( v161 )
    {
      v108 = MiSharedVaToPartition(v8, v9, v7);
      v9 = v149;
      v14 = v108;
      goto LABEL_6;
    }
    v13 = *(unsigned __int16 *)(v8 + 174);
  }
  v14 = *(ULONG_PTR **)(qword_140466188 + 8 * v13);
LABEL_6:
  v15 = 0LL;
  v144 = v14;
  v16 = v5;
  v146 = 0LL;
  v17 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = 2;
  LODWORD(v143) = 2;
  v19 = v16 & 1;
  if ( v19 && *(_BYTE *)v17 == 5 )
  {
    v128 = *(_DWORD *)(v17 + 56);
    if ( (v128 & 4) != 0 && ((v128 & 0x10) != 0 || !(unsigned int)MiIsPteInStore((__int64)v14, updated)) )
    {
      if ( v10 )
        MiUnlockProtoPoolPage(v10, 0x11u);
      return 3221225495LL;
    }
    v146 = 0LL;
  }
  else if ( v19 )
  {
    if ( *(_BYTE *)v17 == 2 )
    {
      v15 = v17;
      v146 = v17;
    }
    else if ( *(_BYTE *)v17 == 1 )
    {
      v146 = v17;
      v15 = v17;
      if ( (v145 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v145) )
        return 0LL;
      v18 = 0;
      LODWORD(v143) = 0;
      v4 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v9);
  if ( v22 && *(_BYTE *)v17 == 4 )
  {
    v114 = *(_QWORD *)(v17 + 40);
    v151 = 8;
    v15 = v17;
    v146 = v17;
    LODWORD(v143) = v18 | 8;
    v23 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v114 + 544) + 1454LL));
    v144 = v23;
  }
  else if ( ((v11 >> 5) & 0x1F) == 0x1F )
  {
    v151 = 8;
    v121 = MiKernelStackVaToStackNode(v21);
    if ( v121 )
      v23 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(v121 + 40));
    else
      v23 = &MiSystemPartition;
    v21 = v149;
    LODWORD(v143) = v18 | 8;
    v144 = v23;
  }
  else
  {
    v23 = v144;
    v24 = 0;
    if ( SystemRegionType == 12 )
      v24 = 8;
    v151 = v24;
  }
  if ( v4 >= 0x20 && (*(_DWORD *)(v15 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore((__int64)v23, v11) )
    {
      if ( v10 )
        MiUnlockProtoPoolPage(v10, 0x11u);
      return 0LL;
    }
  }
  v148 = 0;
  v141 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v26 = 16;
  v140 = 16;
  v142 = a2;
  v139 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v27 = v11;
    v137 = v148;
    goto LABEL_17;
  }
  v137 = 16;
  v109 = MI_READ_PTE_LOCK_FREE(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v109) )
  {
    v137 = 48;
    goto LABEL_229;
  }
  if ( *(_QWORD *)(Process + 920) )
  {
LABEL_229:
    v26 = v110;
    v140 = v110;
  }
  v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v145);
LABEL_17:
  v154 = (v27 >> 5) & 0x1F;
  v147 = a1[11];
  v28 = MiComputeFaultNode(a1, 0LL, (__int64 *)&v147);
  Address = v147;
  if ( !v147 )
  {
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process) )
    {
      v30 = v149;
    }
    else
    {
      if ( (*(_BYTE *)(v156 + 184) & 7) != 0 )
        goto LABEL_25;
      v30 = v149;
      if ( v149 >= 0xFFFF800000000000uLL )
        goto LABEL_25;
      v31 = *(_QWORD *)(Process + 1296);
      if ( !*(_QWORD *)(v31 + 424) && !*(_QWORD *)(v31 + 432) )
        goto LABEL_25;
    }
    Address = MiLocateAddress(v30);
    v147 = Address;
    if ( !Address )
      goto LABEL_25;
  }
  v122 = *(unsigned int *)(Address + 52);
  LODWORD(v122) = v122 & 0x7FFFFFFF;
  if ( (v122 | ((unsigned __int64)*(unsigned __int8 *)(Address + 34) << 31)) != 0x7FFFFFFFELL )
  {
LABEL_25:
    v32 = 2;
    goto LABEL_26;
  }
  v32 = 7;
  v137 |= 0x80u;
  v139 = 7;
LABEL_26:
  if ( ((v11 >> 11) & 1) != 0 )
  {
    v140 = 1;
    v139 = v32 | 1;
    v26 = 1;
  }
  IsPteInStore = MiIsPteInStore((__int64)v144, updated);
  v37 = v36 & IsPteInStore | v4;
  if ( v26 != v36 )
  {
    if ( dword_140466824 )
    {
      v140 = v36;
      --dword_140466824;
      v26 = v36;
    }
    else
    {
      v38 = (_QWORD *)v146;
      if ( v146 )
      {
        v115 = v147;
        v116 = (v35 & 0x10) != 0;
        if ( (v35 & 0x10) != 0 && !v147 )
        {
          v115 = MiLocateAddress(v149);
          v34 = v144;
          v147 = v115;
        }
        v117 = MiComputeFaultCluster((__int64)v34, v38, v115 & -(__int64)v116, v37 & 1);
        v34 = v144;
        v26 = v117;
        v140 = v117;
        v36 = 1;
      }
      else if ( v149 > 0x7FFFFFFEFFFFLL )
      {
        v140 = v36;
        v26 = v36;
        if ( (v35 & 0x10) == 0 && (v149 < 0xFFFFF68000000000uLL || v149 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v26 = 16;
          v37 |= 4u;
          v140 = 16;
        }
      }
    }
  }
  LODWORD(v150) = v36 & v37;
  if ( (v36 & v37) != 0 )
  {
    if ( v26 > *((_DWORD *)v34 + 287) )
      v26 = *((_DWORD *)v34 + 287);
    v140 = v26;
  }
  v39 = MiAllocateInPageSupport(
          a2,
          (unsigned int)v143,
          &v140,
          (ULONG_PTR *)((unsigned __int64)va & -(__int64)(v10 != 0)));
  if ( !v39 )
  {
    result = 3221225626LL;
LABEL_241:
    if ( v146 )
      *(_BYTE *)(v146 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v11
    || ((v11 >> 11) & 1) != 0
    && ((*(_BYTE *)(v155 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v155 + 34) & 0x20) == 0
     || updated != *(_QWORD *)(v155 + 16)
     || (*(_DWORD *)(*(_QWORD *)v155 + 160LL) & 0x20) != 0) )
  {
    if ( v161 )
      MiUnlockProtoPoolPage(v161, 0x11u);
    MiFreeInPageSupportBlock((char *)v39);
    result = 3221226548LL;
    goto LABEL_241;
  }
  v40 = 1;
  if ( v146 && *(_BYTE *)v146 == 1 )
    MiSetInPagePrefetchPriority(v146, v39);
  v41 = v140;
  if ( v140 <= v40 || !(unsigned int)MiSufficientAvailablePages((__int64)v144, 0x140uLL) )
    goto LABEL_146;
  v42 = a2;
  v43 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  if ( (v137 & 0x10) != 0 )
  {
    v111 = v147;
    v112 = v149;
    if ( (v147 || (v147 = MiLocateAddress(v149), (v111 = v147) != 0))
      && (*(_DWORD *)(v111 + 48) & 0x100000) == 0
      && (MiGetProtoPteAddress(v111, v112 >> 12, 4, &v153), v153)
      && (*(_BYTE *)(v153 + 34) & 2) == 0 )
    {
      v42 = a2;
      v113 = ((__int64)(*(_QWORD *)(v153 + 8) + 8LL * *(unsigned int *)(v153 + 44) - a2) >> 3) - 1;
      if ( v113 >= v43 )
        v113 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
      v43 = v113;
    }
    else
    {
      v42 = a2;
      v41 = 1;
    }
  }
  if ( (v146 || (v37 & 4) != 0) && !v43 )
    v41 = 1;
  if ( v41 > 1 )
  {
    v143 = v11;
    v44 = v42 + 8;
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v143);
    v47 = PagingFileOffset;
    v48 = -3 - PagingFileOffset;
    if ( (unsigned __int64)PagingFileOffset + v46 < 0xFFFFFFFE )
      v48 = v46;
    if ( (_DWORD)v150 || v146 )
      v37 |= 8u;
    v49 = v11 & 0xFFFFFFFFFC00FF1DuLL;
    if ( v48 )
    {
      while ( 1 )
      {
        MiUpdatePageFileHighInPte(v49, ++v47);
        v50 = MI_READ_PTE_LOCK_FREE(v44);
        if ( (v50 & 0x3E0) != 0 && (v50 & 0xFFFFFFFFFC00FF1DuLL) == v49 )
        {
          v142 = v44;
        }
        else if ( (v37 & 8) != 0 )
        {
LABEL_57:
          v11 = v145;
          break;
        }
        v44 += 8LL;
        if ( v51 == 1 )
          goto LABEL_57;
      }
    }
    v52 = a2;
    v143 = v11;
    v53 = a2;
    v142 = (__int64)(v142 - a2) >> 3;
    v54 = MiGetPagingFileOffset((unsigned __int64)&v143);
    v57 = v54;
    v58 = v54 - 1;
    if ( v56 <= (unsigned __int64)v54 - 1 )
      v58 = v56;
    if ( v58 )
    {
      while ( 1 )
      {
        --v57;
        v53 -= 8LL;
        MiUpdatePageFileHighInPte(v55, v57);
        v59 = MI_READ_PTE_LOCK_FREE(v53);
        if ( (v59 & 0x3E0) != 0 && (v59 & 0xFFFFFFFFFC00FF1DuLL) == v55 )
        {
          v52 = v53;
        }
        else if ( (v37 & 8) != 0 )
        {
LABEL_67:
          v11 = v145;
          break;
        }
        if ( v60 == 1 )
          goto LABEL_67;
      }
    }
    v61 = a2;
    v62 = v11;
    if ( qword_140465B00 && (v11 & 0x10) == 0 )
      v62 = v11 & ~qword_140465B00;
    updated = MiUpdatePageFileHighInPte(v11, HIDWORD(v62) - (unsigned int)((__int64)(a2 - v52) >> 3));
    v141 = v63 + v142 + 1;
    v64 = a2 - 8LL * v63;
    v142 = v64;
  }
  else
  {
LABEL_146:
    v64 = v142;
    v61 = a2;
  }
  v65 = MiObtainFaultCharges(v144, v141, v139);
  v66 = v141;
  v67 = v65;
  v153 = v65;
  if ( v141 > (unsigned __int64)v65 )
  {
    v130 = updated;
    if ( qword_140465B00 && (updated & 0x10) == 0 )
      v130 = updated & ~qword_140465B00;
    v131 = v141 - v67;
    v132 = HIDWORD(v130);
    if ( v64 + 8 * v131 <= v61 )
    {
      v142 = v64 + 8 * v131;
    }
    else
    {
      v142 = v61;
      v131 = (__int64)(v61 - v64) >> 3;
    }
    updated = MiUpdatePageFileHighInPte(updated, v132 + v131);
    v141 = v67;
    v66 = v67;
  }
  v68 = v146;
  v69 = 0LL;
  v143 = 0LL;
  if ( v146 && *(_BYTE *)v146 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v144, ((*(_DWORD *)(v146 + 80) >> 3) & 7u) + 1);
    v69 = v143;
    v72 = AvailablePagesBelowPriority;
    v71 = v119;
    v150 = AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority <= v119 )
      goto LABEL_76;
    v72 = v119;
  }
  else
  {
    v70 = v144;
    v71 = v66;
    v72 = v66;
  }
  v150 = v71;
LABEL_76:
  if ( v72 )
  {
    PageChain = MiGetPageChain((__int64)v70, v156, v28, v154, v151, -1LL, &v150);
    v72 = v150;
    v69 = PageChain;
    v143 = PageChain;
  }
  if ( !v69 )
  {
    if ( v161 )
      MiUnlockProtoPoolPage(v161, 0x11u);
    MiFreeInPageSupportBlock((char *)v39);
    if ( v68 )
      *(_BYTE *)(v68 + 1) = 2;
    MiReturnFaultCharges((__int64)v144, v67, v139);
    return 3221225495LL;
  }
  if ( v72 != v71 )
  {
    v123 = v142;
    if ( v142 + 8 * v72 <= a2 )
    {
      v124 = updated;
      if ( qword_140465B00 && (updated & 0x10) == 0 )
        v124 = updated & ~qword_140465B00;
      v125 = HIDWORD(v124);
      v126 = v71 - v72;
      if ( v142 + 8 * (v71 - v72) > a2 )
      {
        v142 = a2;
        v126 = (__int64)(a2 - v123) >> 3;
      }
      else
      {
        v142 += 8 * (v71 - v72);
      }
      updated = MiUpdatePageFileHighInPte(updated, v125 + v126);
    }
    v141 = v72;
  }
  v74 = *(_DWORD *)(v39 + 192) >> 9;
  v75 = v39 + 272;
  v76 = 0;
  LODWORD(v150) = v74;
  v145 = v39 + 320;
  v159 = 0;
  while ( 1 )
  {
    v77 = MI_READ_PTE_LOCK_FREE(v142);
    if ( (v37 & 0x10) != 0 )
      goto LABEL_96;
    if ( (v77 & 1) == 0 && (v77 & 0x400) == 0 && (v77 & 0x800) == 0 )
    {
      v80 = v77;
      if ( qword_140465B00 )
      {
        if ( (v77 & 0x10) != 0 )
          v80 = v77 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v80 = v77 & ~qword_140465B00;
      }
      v81 = updated;
      if ( qword_140465B00 && (updated & 0x10) == 0 )
        v81 = updated & ~qword_140465B00;
      if ( ((v80 ^ v81) & 0xFFFFFFFF00000000uLL) == 0 && (v77 & 4) != 0 && ((v77 ^ updated) & 0xF000) == 0 )
      {
        v82 = MiIsPteInStore((__int64)v144, v77);
        if ( v82 == (v83 & v37) )
        {
          v78 = v143;
LABEL_96:
          ++v159;
          *v79 = (v78 + 0x58000000000LL) / 48;
          if ( v142 == a2 )
            LOBYTE(v84) = v74;
          else
            v84 = *(_DWORD *)(v39 + 192) >> 12;
          MiLockSetPfnPriority(v78, v84 & 7);
          v85 = *(_QWORD *)(v143 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v143, 0LL, 0);
          if ( v85 == 0xFFFFFFFFFLL )
            v143 = 0LL;
          else
            v143 = 48 * v85 - 0x58000000000LL;
          v79 = (__int64 *)v145;
LABEL_101:
          v145 = (__int64)(v79 + 1);
          if ( v68 )
            MiAdvanceFaultList((_QWORD *)v68);
          v86 = updated;
          v142 += 8LL;
          if ( qword_140465B00 && (updated & 0x10) == 0 )
            v86 = updated & ~qword_140465B00;
          updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v86) + 1);
          v76 += v89;
          goto LABEL_107;
        }
      }
    }
    if ( (v37 & 8) == 0 )
    {
      v37 |= 2u;
      *v79 = qword_140466858;
      goto LABEL_101;
    }
    v87 = v142;
    v133 = a2;
    if ( v142 > a2 )
      break;
    v134 = (_QWORD *)(v39 + 320);
    if ( v76 )
    {
      v135 = v159;
      do
      {
        if ( *v134 != qword_140466858 )
        {
          MiReleaseFreshPage(48LL * *v134 - 0x58000000000LL);
          --v135;
        }
        ++v134;
        --v76;
      }
      while ( v76 );
      v68 = v146;
      v133 = a2;
      v159 = v135;
      v75 = v39 + 272;
    }
    v37 &= ~2u;
    v145 = v39 + 320;
    v142 = v133;
    updated = MI_READ_PTE_LOCK_FREE(v133);
    v88 = 1;
    v141 = 1;
LABEL_107:
    if ( v76 >= v88 )
      goto LABEL_111;
    LOBYTE(v74) = v150;
  }
  v88 = v76;
LABEL_111:
  v90 = v87 - 8LL * v88;
  v154 = *(_QWORD *)(v39 + 320 + 8 * ((__int64)(a2 - v90) >> 3));
  if ( (v137 & 0x10) != 0 )
    v91 = 0LL;
  else
    v91 = (__int64)(v90 << 25) >> 16;
  *(_QWORD *)v75 = 0LL;
  v92 = v88 << 12;
  *(_DWORD *)(v75 + 40) = v92;
  *(_QWORD *)(v75 + 32) = v91 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v75 + 44) = v91 & 0xFFF;
  *(_WORD *)(v75 + 10) = 66;
  *(_WORD *)(v75 + 8) = 8 * ((((unsigned __int64)(v91 & 0xFFF) + v92 + 4095) >> 12) + 6);
  if ( (v37 & 2) != 0 )
  {
    v127 = MiReduceMdl(v75);
    if ( v127 )
    {
      v90 += 8 * v127;
      if ( (v137 & 0x10) == 0 )
        *(_QWORD *)(v75 + 32) += v127 << 12;
    }
  }
  else
  {
    *(_WORD *)(v75 + 10) = 16450;
  }
  v93 = MI_READ_PTE_LOCK_FREE(v90);
  v145 = v93;
  if ( v95 == 1 )
    v96 = v137 & 0xF8 | (*(_DWORD *)(v39 + 192) >> 9) & 7 | 8;
  else
    v96 = v137 & 0xDF;
  LOBYTE(v148) = v96;
  v97 = v96;
  v138 = v96;
  MiInitializeReadInProgressPfn(v149, v94, v95, v90, v39, v96);
  if ( (v37 & 0x10) != 0 )
  {
    if ( qword_140465B00 && (v93 & 0x10) == 0 )
      v93 &= ~qword_140465B00;
    v136 = (_QWORD *)(48 * ((v93 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    MiFlowThroughInsertNode(v39, v136);
    v93 = v136[2];
    v145 = v93;
  }
  v98 = v161;
  if ( (v97 & 0x10) != 0 )
    MiObtainProtoReference(v161, 0);
  *(_QWORD *)(v39 + 168) = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v39 + 232) = v99;
  if ( v68 )
  {
    if ( *(_BYTE *)v68 == 1 )
    {
      v120 = *(_DWORD *)(v39 + 192) | 8;
      *(_DWORD *)(v39 + 192) = v120;
      if ( (*(_DWORD *)(v68 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v39 + 192) = v120 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v39 + 192) |= 0x80u;
  if ( v147 && MiVadPageSizes[(*(_DWORD *)(v147 + 48) >> 18) & 3] == 16 )
    *(_DWORD *)(v39 + 192) |= 0x100000u;
  if ( v98 )
    MiUnlockProtoPoolPage(v98, 0x11u);
  MiFreePageChain(v143);
  if ( v159 != v153 )
    MiReturnFaultCharges((__int64)v144, v153 - v159, v139);
  *v163 = v39;
  v100 = MiGetPagingFileOffset((unsigned __int64)&v145);
  v101 = (unsigned __int16)v93 >> 12;
  LODWORD(v152) = v100;
  v102 = v144[v101 + 988];
  if ( (v138 & 0x10) != 0 )
    *(_QWORD *)(v39 + 160) = v98;
  if ( (v37 & 1) != 0 )
  {
    *(_DWORD *)(v39 + 192) |= 0x100u;
    *(_QWORD *)(v39 + 96) = v100 | (unsigned __int64)(v101 << 60);
  }
  else
  {
    HIDWORD(v152) = 0;
    *(_QWORD *)(v39 + 96) = (unsigned __int64)(unsigned int)v152 << 12;
  }
  v103 = *(_QWORD *)(v102 + 56);
  v104 = *(_DWORD *)(v39 + 192) | 0x200000;
  *(_DWORD *)(v39 + 192) = v104;
  *(_QWORD *)(v39 + 200) = v103;
  if ( *(_QWORD *)(v102 + 216)
    && (!v68 || *(_BYTE *)v68 != 1 || (*(_DWORD *)(v68 + 80) & 0x1000) == 0 || (dword_140571190 & 1) != 0) )
  {
    *(_DWORD *)(v39 + 192) = v104 | 0x400000;
  }
  v105 = v154;
  *(_QWORD *)(v39 + 240) = v90;
  v106 = 48 * v105 - 0x58000000000LL;
  result = 3221435187LL;
  *(_QWORD *)(v39 + 248) = v106;
  return result;
}
