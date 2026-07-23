/*
 * XREFs of MiResolvePageFileFault @ 0x140154C44
 * Callers:
 *     MiIssueFlowThroughFault @ 0x140003D9C (MiIssueFlowThroughFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiComputeFaultCluster @ 0x14002B4B8 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiAllocateInPageSupport @ 0x14002C548 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14002C918 (MiComputeFaultNode.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiFlowThroughInsertNode @ 0x14010F660 (MiFlowThroughInsertNode.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiSetInPagePrefetchPriority @ 0x140113C24 (MiSetInPagePrefetchPriority.c)
 *     MiReduceMdl @ 0x14011A9A4 (MiReduceMdl.c)
 *     MiLockSetPfnPriority @ 0x140121FE8 (MiLockSetPfnPriority.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiIsPteInStore @ 0x140141908 (MiIsPteInStore.c)
 *     MiFreePageChain @ 0x140155B98 (MiFreePageChain.c)
 *     MiKernelStackVaToStackNode @ 0x140155BC0 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r14
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 updated; // rsi
  __int64 v13; // rcx
  ULONG_PTR *v14; // rcx
  unsigned __int64 v15; // r13
  char v16; // r10
  unsigned __int64 v17; // r14
  __int64 v18; // r10
  int SystemRegionType; // edx
  int v20; // r8d
  unsigned __int64 v21; // r11
  __int64 v22; // r10
  ULONG_PTR *v23; // rcx
  int v24; // r10d
  __int64 Process; // r13
  unsigned int v26; // r14d
  unsigned __int64 v27; // rax
  unsigned __int64 Address; // rax
  char v29; // al
  int IsPteInStore; // eax
  char v31; // r9
  unsigned int v32; // r10d
  ULONG_PTR *v33; // r11
  __int64 v34; // r13
  int v35; // edi
  __int64 v36; // r14
  unsigned int v37; // r10d
  unsigned int v38; // r13d
  unsigned __int64 v39; // r8
  unsigned int v40; // r12d
  unsigned int v41; // r15d
  unsigned int v42; // r13d
  unsigned __int64 v43; // rsi
  unsigned int PagingFileOffset; // eax
  __int64 v45; // r10
  __int64 v46; // r15
  unsigned int v47; // r11d
  unsigned __int64 v48; // r9
  __int64 v49; // rax
  int v50; // r11d
  unsigned __int64 v51; // rsi
  unsigned int v52; // r13d
  unsigned __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // r10
  __int64 v56; // r15
  unsigned int v57; // r9d
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rdx
  __int64 v60; // r9
  unsigned __int64 v61; // r12
  unsigned int v62; // r9d
  unsigned __int64 v63; // rbx
  unsigned int v64; // eax
  unsigned int v65; // r11d
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r13
  __int64 v68; // r9
  ULONG_PTR *v69; // rcx
  unsigned __int64 v70; // rbx
  unsigned __int64 v71; // r8
  __int64 PageChain; // rax
  int v73; // ebx
  __int64 v74; // r12
  unsigned int v75; // r15d
  __int64 v76; // rax
  __int64 v77; // r8
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
  unsigned __int64 v90; // r15
  __int64 v91; // r9
  __int64 v92; // r8
  unsigned __int64 v93; // rbx
  _QWORD *v94; // r10
  int v95; // r11d
  char v96; // si
  char v97; // r12
  __int64 v98; // rsi
  __int64 v99; // r9
  unsigned int v100; // eax
  __int64 v101; // rbx
  ULONG_PTR v102; // rdx
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 result; // rax
  unsigned __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // r9d
  __int64 v112; // rax
  unsigned __int64 v113; // rax
  bool v114; // r10
  unsigned int v115; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v117; // r11d
  int v118; // edx
  __int64 v119; // rax
  ULONG_PTR *v120; // rax
  unsigned __int64 v121; // rax
  unsigned int v122; // r9d
  __int64 v123; // rcx
  unsigned __int64 v124; // r10
  __int64 v125; // rdx
  __int64 v126; // rax
  unsigned int v127; // ecx
  unsigned __int64 v128; // r10
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  _QWORD *v132; // rbx
  int v133; // eax
  __int64 v135; // rcx
  unsigned __int64 v136; // rax
  __int64 v137; // rcx
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rax
  _QWORD *v140; // rbx
  int v141; // r12d
  __int64 v142; // rax
  char v143; // [rsp+48h] [rbp-79h]
  unsigned int v144; // [rsp+4Ch] [rbp-75h] BYREF
  unsigned __int64 v145; // [rsp+50h] [rbp-71h]
  unsigned __int64 v146; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR *v147; // [rsp+60h] [rbp-61h]
  __int64 v148; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v149; // [rsp+70h] [rbp-51h] BYREF
  __int64 v150; // [rsp+78h] [rbp-49h]
  unsigned __int64 v151; // [rsp+80h] [rbp-41h]
  unsigned __int64 v152; // [rsp+88h] [rbp-39h] BYREF
  int v153; // [rsp+90h] [rbp-31h]
  unsigned __int64 v154; // [rsp+98h] [rbp-29h]
  int v155; // [rsp+A0h] [rbp-21h]
  int v156; // [rsp+A4h] [rbp-1Dh]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-19h]
  __int64 v158; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v159; // [rsp+B8h] [rbp-9h]
  __int64 v160; // [rsp+C0h] [rbp-1h]
  __int64 v161; // [rsp+C8h] [rbp+7h]
  char v162; // [rsp+128h] [rbp+67h]
  char v163; // [rsp+128h] [rbp+67h]
  __int64 v165; // [rsp+138h] [rbp+77h] BYREF
  va_list va; // [rsp+138h] [rbp+77h]
  __int64 *v167; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v165 = va_arg(va1, _QWORD);
  v167 = va_arg(va1, __int64 *);
  v3 = a1[7];
  v4 = a1[2];
  v5 = 0;
  v154 = *a1;
  v161 = v3;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v148 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v165 )
      MiUnlockProtoPoolPage(v165, 0x11u);
    return 3221225633LL;
  }
  v10 = v165;
  v11 = v148;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_14043B180 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_14043B180;
    }
    v5 = 16;
    v160 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    updated = *(_QWORD *)(v160 + 16);
    v13 = (*(_QWORD *)(v160 + 40) >> 40) & 0x3FFLL;
  }
  else
  {
    v160 = 0LL;
    updated = v148;
    if ( v165 )
    {
      v120 = MiSharedVaToPartition(v8, v9, v7);
      v9 = v154;
      v14 = v120;
      goto LABEL_6;
    }
    v13 = *(unsigned __int16 *)(v8 + 174);
  }
  v14 = *(ULONG_PTR **)(qword_14043B808 + 8 * v13);
LABEL_6:
  v15 = 0LL;
  v147 = v14;
  v16 = v4;
  v151 = 0LL;
  v17 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  LODWORD(v146) = 2;
  v18 = v16 & 1;
  if ( v18 && *(_BYTE *)v17 == 5 )
  {
    v133 = *(_DWORD *)(v17 + 56);
    if ( (v133 & 4) != 0 && ((v133 & 0x10) != 0 || !(unsigned int)MiIsPteInStore((__int64)v14, updated)) )
    {
      if ( v10 )
        MiUnlockProtoPoolPage(v10, 0x11u);
      return 3221225495LL;
    }
    v151 = 0LL;
  }
  else if ( v18 )
  {
    if ( *(_BYTE *)v17 == 2 )
    {
      v15 = v17;
      v151 = v17;
    }
    else if ( *(_BYTE *)v17 == 1 )
    {
      v151 = v17;
      v15 = v17;
      if ( (v148 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v148) )
        return 0LL;
      LODWORD(v146) = 0;
      v5 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v9);
  if ( v22 && *(_BYTE *)v17 == 4 )
  {
    v112 = *(_QWORD *)(v17 + 40);
    v155 = 8;
    v15 = v17;
    v151 = v17;
    LODWORD(v146) = v20 | 8;
    v23 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v112 + 544) + 1454LL));
    v147 = v23;
  }
  else if ( ((v11 >> 5) & 0x1F) == 0x1F )
  {
    v155 = 8;
    v119 = MiKernelStackVaToStackNode(v21);
    if ( v119 )
      v23 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v119 + 40));
    else
      v23 = &MiSystemPartition;
    LODWORD(v146) = v146 | 8;
    v21 = v154;
    v147 = v23;
  }
  else
  {
    v23 = v147;
    v24 = 0;
    if ( SystemRegionType == 12 )
      v24 = 8;
    v155 = v24;
  }
  if ( v5 >= 0x20 && (*(_DWORD *)(v15 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore((__int64)v23, v11) )
    {
      if ( v10 )
        MiUnlockProtoPoolPage(v10, 0x11u);
      return 0LL;
    }
  }
  v153 = 0;
  LODWORD(v149) = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v26 = 16;
  v144 = 16;
  v145 = a2;
  v143 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v27 = v11;
    v162 = v153;
    goto LABEL_17;
  }
  v162 = 16;
  v121 = MI_READ_PTE_LOCK_FREE(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v121) )
  {
    v162 = 48;
    goto LABEL_228;
  }
  if ( *(_QWORD *)(Process + 912) )
  {
LABEL_228:
    v26 = v122;
    v144 = v122;
  }
  v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v148);
LABEL_17:
  v152 = a1[11];
  v159 = (v27 >> 5) & 0x1F;
  v156 = MiComputeFaultNode(a1, 0LL, (__int64 *)&v152);
  Address = v152;
  if ( !v152 )
  {
    if ( a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process) )
    {
      v108 = v154;
    }
    else
    {
      if ( (*(_BYTE *)(v161 + 184) & 7) != 0 )
        goto LABEL_20;
      v108 = v154;
      if ( v154 >= 0xFFFF800000000000uLL )
        goto LABEL_20;
      v109 = *(_QWORD *)(Process + 1296);
      if ( !*(_QWORD *)(v109 + 376) && !*(_QWORD *)(v109 + 384) )
        goto LABEL_20;
    }
    Address = MiLocateAddress(v108);
    v152 = Address;
    if ( !Address )
      goto LABEL_20;
  }
  v135 = *(unsigned int *)(Address + 52);
  LODWORD(v135) = v135 & 0x7FFFFFFF;
  if ( (v135 | ((unsigned __int64)*(unsigned __int8 *)(Address + 34) << 31)) != 0x7FFFFFFFELL )
  {
LABEL_20:
    v29 = 2;
    goto LABEL_21;
  }
  v29 = 7;
  v162 |= 0x80u;
  v143 = 7;
LABEL_21:
  if ( ((v11 >> 11) & 1) != 0 )
  {
    v144 = 1;
    v143 = v29 | 1;
    v26 = 1;
  }
  IsPteInStore = MiIsPteInStore((__int64)v147, updated);
  v34 = v151;
  v35 = v32 & IsPteInStore | v5;
  if ( v26 != v32 )
  {
    if ( dword_14043BE64 )
    {
      v144 = v32;
      --dword_14043BE64;
      v26 = v32;
    }
    else if ( v151 )
    {
      v113 = v152;
      v114 = (v31 & 0x10) != 0;
      if ( (v31 & 0x10) != 0 && !v152 )
      {
        v113 = MiLocateAddress(v154);
        v152 = v113;
      }
      v115 = MiComputeFaultCluster((__int64)v33, (_QWORD *)v34, v113 & -(__int64)v114, v35 & 1);
      v33 = v147;
      v26 = v115;
      v144 = v115;
      v32 = 1;
    }
    else if ( v154 > 0x7FFFFFFEFFFFLL )
    {
      v144 = v32;
      v26 = v32;
      if ( (v31 & 0x10) == 0 && (v154 < 0xFFFFF68000000000uLL || v154 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        v26 = 16;
        v35 |= 4u;
        v144 = 16;
      }
    }
  }
  LODWORD(v150) = v32 & v35;
  if ( (v32 & v35) != 0 )
  {
    if ( v26 > *((_DWORD *)v33 + 287) )
      v26 = *((_DWORD *)v33 + 287);
    v144 = v26;
  }
  v36 = MiAllocateInPageSupport(a2, v146, &v144, (__int64 *)((unsigned __int64)va & -(__int64)(v10 != 0)));
  if ( !v36 )
  {
    result = 3221225626LL;
LABEL_276:
    if ( v34 )
      *(_BYTE *)(v34 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v11
    || ((v11 >> 11) & 1) != 0
    && ((*(_BYTE *)(v160 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v160 + 34) & 0x20) == 0
     || updated != *(_QWORD *)(v160 + 16)
     || (*(_DWORD *)(*(_QWORD *)v160 + 160LL) & 0x20) != 0) )
  {
    if ( v165 )
      MiUnlockProtoPoolPage(v165, 0x11u);
    MiFreeInPageSupportBlock((char *)v36);
    result = 3221226548LL;
    goto LABEL_276;
  }
  v37 = 1;
  if ( v34 && *(_BYTE *)v34 == 1 )
    MiSetInPagePrefetchPriority(v34, v36);
  v38 = v144;
  if ( v144 <= v37 || !(unsigned int)MiSufficientAvailablePages((__int64)v147, 0x140uLL) )
    goto LABEL_165;
  v39 = a2;
  v40 = ((unsigned int)a2 >> 3) & 0x1FF;
  v41 = 511 - v40;
  if ( (v162 & 0x10) != 0 )
  {
    v123 = v152;
    v124 = v154;
    if ( (v152 || (v152 = MiLocateAddress(v154), (v123 = v152) != 0))
      && (*(_DWORD *)(v123 + 48) & 0x4000) == 0
      && (MiGetProtoPteAddress(v123, v124 >> 12, 4, &v158), v158)
      && (*(_BYTE *)(v158 + 34) & 2) == 0 )
    {
      v125 = *(_QWORD *)(v158 + 8);
      v39 = a2;
      v126 = (__int64)(a2 - v125) >> 3;
      v127 = ((__int64)(v125 + 8LL * *(unsigned int *)(v158 + 44) - a2) >> 3) - 1;
      if ( v127 >= v41 )
        v127 = 511 - v40;
      v41 = v127;
      if ( (unsigned int)v126 >= v40 )
        LODWORD(v126) = ((unsigned int)a2 >> 3) & 0x1FF;
      v40 = v126;
    }
    else
    {
      v39 = a2;
      v38 = 1;
    }
  }
  if ( v151 || (v35 & 4) != 0 )
  {
    v40 = 0;
    if ( !v41 )
      v38 = 1;
  }
  if ( v38 > 1 )
  {
    v42 = v38 - 1;
    v149 = v11;
    v43 = v39 + 8;
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v149);
    v46 = PagingFileOffset;
    v47 = -3 - PagingFileOffset;
    if ( (unsigned __int64)PagingFileOffset + v45 < 0xFFFFFFFE )
      v47 = v45;
    if ( (_DWORD)v150 || v151 )
      v35 |= 8u;
    v48 = v11 & 0xFFFFFFFFFC00FF1DuLL;
    if ( v47 )
    {
      while ( 1 )
      {
        MiUpdatePageFileHighInPte(v48, ++v46);
        v49 = MI_READ_PTE_LOCK_FREE(v43);
        if ( (v49 & 0x3E0) != 0 && (v49 & 0xFFFFFFFFFC00FF1DuLL) == v48 )
        {
          v145 = v43;
        }
        else if ( (v35 & 8) != 0 )
        {
LABEL_58:
          v11 = v148;
          break;
        }
        v43 += 8LL;
        if ( v50 == 1 )
          goto LABEL_58;
      }
    }
    v51 = a2;
    v149 = v11;
    v52 = v42 - ((__int64)(v145 - a2) >> 3);
    v145 = (__int64)(v145 - a2) >> 3;
    if ( v40 <= v52 )
      v52 = v40;
    v53 = a2;
    v54 = MiGetPagingFileOffset((unsigned __int64)&v149);
    v56 = v54;
    v57 = v54 - 1;
    if ( v58 <= (unsigned __int64)v54 - 1 )
      v57 = v52;
    if ( v57 )
    {
      while ( 1 )
      {
        --v56;
        v51 -= 8LL;
        MiUpdatePageFileHighInPte(v55, v56);
        v110 = MI_READ_PTE_LOCK_FREE(v51);
        if ( (v110 & 0x3E0) != 0 && (v110 & 0xFFFFFFFFFC00FF1DuLL) == v55 )
        {
          v53 = v51;
        }
        else if ( (v35 & 8) != 0 )
        {
LABEL_145:
          v11 = v148;
          break;
        }
        if ( v111 == 1 )
          goto LABEL_145;
      }
    }
    v59 = v11;
    v60 = (__int64)(a2 - v53) >> 3;
    if ( qword_14043B180 && (v11 & 0x10) == 0 )
      v59 = v11 & ~qword_14043B180;
    v61 = a2;
    updated = MiUpdatePageFileHighInPte(v11, HIDWORD(v59) - (unsigned int)v60);
    LODWORD(v149) = v62 + v145 + 1;
    v63 = a2 - 8LL * v62;
    v145 = v63;
  }
  else
  {
LABEL_165:
    v63 = v145;
    v61 = a2;
  }
  v64 = MiObtainFaultCharges(v147, v149, v143);
  v65 = v149;
  v66 = v64;
  v158 = v64;
  if ( (unsigned int)v149 > (unsigned __int64)v64 )
  {
    v136 = updated;
    if ( qword_14043B180 && (updated & 0x10) == 0 )
      v136 = updated & ~qword_14043B180;
    v137 = (unsigned int)v149 - v66;
    v138 = HIDWORD(v136);
    if ( v63 + 8 * v137 <= v61 )
    {
      v145 = v63 + 8 * v137;
    }
    else
    {
      v145 = v61;
      v137 = (__int64)(v61 - v63) >> 3;
    }
    updated = MiUpdatePageFileHighInPte(updated, v138 + v137);
    LODWORD(v149) = v66;
    v65 = v66;
  }
  v67 = v151;
  v68 = 0LL;
  v150 = 0LL;
  if ( !v151 || *(_BYTE *)v151 != 1 )
  {
    v69 = v147;
    v70 = v65;
    v71 = v65;
LABEL_71:
    v146 = v70;
    goto LABEL_72;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v147, ((*(_DWORD *)(v151 + 80) >> 3) & 7u) + 1);
  v68 = v150;
  v71 = AvailablePagesBelowPriority;
  v70 = v117;
  v146 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v117 )
  {
    v71 = v117;
    goto LABEL_71;
  }
LABEL_72:
  if ( v71 )
  {
    PageChain = MiGetPageChain((__int64)v69, v161, v156, v159, v155, -1LL, &v146);
    v71 = v146;
    v68 = PageChain;
    v150 = PageChain;
  }
  if ( !v68 )
  {
    if ( v165 )
      MiUnlockProtoPoolPage(v165, 0x11u);
    MiFreeInPageSupportBlock((char *)v36);
    if ( v67 )
      *(_BYTE *)(v67 + 1) = 2;
    MiReturnFaultCharges((__int64)v147, v66, v143);
    return 3221225495LL;
  }
  if ( v71 != v70 )
  {
    v128 = v145;
    if ( v145 + 8 * v71 <= v61 )
    {
      v129 = updated;
      if ( qword_14043B180 && (updated & 0x10) == 0 )
        v129 = updated & ~qword_14043B180;
      v130 = HIDWORD(v129);
      v131 = v70 - v71;
      if ( v145 + 8 * (v70 - v71) > v61 )
      {
        v145 = v61;
        v131 = (__int64)(v61 - v128) >> 3;
      }
      else
      {
        v145 += 8 * (v70 - v71);
      }
      updated = MiUpdatePageFileHighInPte(updated, v130 + v131);
    }
    LODWORD(v149) = v71;
  }
  v73 = *(_DWORD *)(v36 + 192) >> 9;
  v74 = v36 + 272;
  v75 = 0;
  v156 = v73;
  v148 = v36 + 320;
  LODWORD(v146) = 0;
  while ( 1 )
  {
    v76 = MI_READ_PTE_LOCK_FREE(v145);
    if ( (v35 & 0x10) != 0 )
      goto LABEL_92;
    if ( (v76 & 1) == 0 && (v76 & 0x400) == 0 && (v76 & 0x800) == 0 )
    {
      v80 = v76;
      if ( qword_14043B180 )
      {
        if ( (v76 & 0x10) != 0 )
          v80 = v76 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v80 = v76 & ~qword_14043B180;
      }
      v81 = updated;
      if ( qword_14043B180 && (updated & 0x10) == 0 )
        v81 = updated & ~qword_14043B180;
      if ( ((v80 ^ v81) & 0xFFFFFFFF00000000uLL) == 0 && (v76 & 4) != 0 && ((v76 ^ updated) & 0xF000) == 0 )
      {
        v82 = MiIsPteInStore((__int64)v147, v76);
        if ( v82 == (v83 & v35) )
        {
          v78 = v150;
LABEL_92:
          LODWORD(v146) = v146 + 1;
          *v79 = (v78 + 0x58000000000LL) / 48;
          if ( v145 == a2 )
            LOBYTE(v84) = v73;
          else
            v84 = *(_DWORD *)(v36 + 192) >> 12;
          MiLockSetPfnPriority(v78, v84 & 7, v77);
          v85 = *(_QWORD *)(v150 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v150, 0LL, 0);
          if ( v85 == 0xFFFFFFFFFLL )
            v150 = 0LL;
          else
            v150 = 48 * v85 - 0x58000000000LL;
          v79 = (__int64 *)v148;
LABEL_97:
          v148 = (__int64)(v79 + 1);
          if ( v67 )
            MiAdvanceFaultList((_QWORD *)v67);
          v86 = updated;
          v145 += 8LL;
          if ( qword_14043B180 && (updated & 0x10) == 0 )
            v86 = updated & ~qword_14043B180;
          updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v86) + 1);
          v75 += v89;
          goto LABEL_103;
        }
      }
    }
    if ( (v35 & 8) == 0 )
    {
      v35 |= 2u;
      *v79 = qword_14043BE98;
      goto LABEL_97;
    }
    v87 = v145;
    v139 = a2;
    if ( v145 > a2 )
      break;
    v140 = (_QWORD *)(v36 + 320);
    if ( v75 )
    {
      v141 = v146;
      do
      {
        if ( *v140 != qword_14043BE98 )
        {
          MiReleaseFreshPage(48LL * *v140 - 0x58000000000LL);
          --v141;
        }
        ++v140;
        --v75;
      }
      while ( v75 );
      v67 = v151;
      v139 = a2;
      LODWORD(v146) = v141;
      v74 = v36 + 272;
    }
    v35 &= ~2u;
    v148 = v36 + 320;
    v145 = v139;
    updated = MI_READ_PTE_LOCK_FREE(v139);
    v88 = 1;
    LODWORD(v149) = 1;
LABEL_103:
    if ( v75 >= v88 )
      goto LABEL_107;
    LOBYTE(v73) = v156;
  }
  v88 = v75;
LABEL_107:
  v90 = v87 - 8LL * v88;
  v159 = *(_QWORD *)(v36 + 320 + 8 * ((__int64)(a2 - v90) >> 3));
  if ( (v162 & 0x10) != 0 )
    v91 = 0LL;
  else
    v91 = (__int64)(v90 << 25) >> 16;
  *(_QWORD *)v74 = 0LL;
  v92 = v88 << 12;
  *(_DWORD *)(v74 + 40) = v92;
  *(_QWORD *)(v74 + 32) = v91 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v74 + 44) = v91 & 0xFFF;
  *(_WORD *)(v74 + 10) = 66;
  *(_WORD *)(v74 + 8) = 8 * ((((unsigned __int64)(v91 & 0xFFF) + v92 + 4095) >> 12) + 6);
  if ( (v35 & 2) != 0 )
  {
    v142 = MiReduceMdl(v74);
    if ( v142 )
    {
      v90 += 8 * v142;
      if ( (v162 & 0x10) == 0 )
        *(_QWORD *)(v74 + 32) += v142 << 12;
    }
  }
  else
  {
    *(_WORD *)(v74 + 10) = 16450;
  }
  v93 = MI_READ_PTE_LOCK_FREE(v90);
  v148 = v93;
  if ( v95 == 1 )
    v96 = v162 & 0xF8 | (*(_DWORD *)(v36 + 192) >> 9) & 7 | 8;
  else
    v96 = v162 & 0xDF;
  LOBYTE(v153) = v96;
  v97 = v96;
  v163 = v96;
  MiInitializeReadInProgressPfn(v154, v94, v95, v90, v36, v96);
  if ( (v35 & 0x10) != 0 )
  {
    if ( qword_14043B180 && (v93 & 0x10) == 0 )
      v93 &= ~qword_14043B180;
    v132 = (_QWORD *)(48 * ((v93 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    MiFlowThroughInsertNode(v36, v132);
    v93 = v132[2];
    v148 = v93;
  }
  v98 = v165;
  if ( (v97 & 0x10) != 0 )
    MiObtainProtoReference(v165, 0);
  *(_QWORD *)(v36 + 168) = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v36 + 232) = v99;
  if ( v67 )
  {
    if ( *(_BYTE *)v67 == 1 )
    {
      v118 = *(_DWORD *)(v36 + 192) | 8;
      *(_DWORD *)(v36 + 192) = v118;
      if ( (*(_DWORD *)(v67 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v36 + 192) = v118 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v36 + 192) |= 0x80u;
  if ( v152 && (*(_DWORD *)(v152 + 48) & 0x40000) != 0 )
    *(_DWORD *)(v36 + 192) |= 0x100000u;
  if ( v98 )
    MiUnlockProtoPoolPage(v98, 0x11u);
  MiFreePageChain(v150);
  if ( (unsigned int)v146 != v158 )
    MiReturnFaultCharges((__int64)v147, v158 - (unsigned int)v146, v143);
  *v167 = v36;
  v100 = MiGetPagingFileOffset((unsigned __int64)&v148);
  v101 = (unsigned __int16)v93 >> 12;
  LODWORD(CurrentThread) = v100;
  v102 = v147[v101 + 892];
  if ( (v163 & 0x10) != 0 )
    *(_QWORD *)(v36 + 160) = v98;
  if ( (v35 & 1) != 0 )
  {
    *(_DWORD *)(v36 + 192) |= 0x100u;
    *(_QWORD *)(v36 + 96) = v100 | (unsigned __int64)(v101 << 60);
  }
  else
  {
    HIDWORD(CurrentThread) = 0;
    *(_QWORD *)(v36 + 96) = (unsigned __int64)(unsigned int)CurrentThread << 12;
  }
  v103 = *(_QWORD *)(v102 + 56);
  v104 = *(_DWORD *)(v36 + 192) | 0x200000;
  *(_DWORD *)(v36 + 192) = v104;
  *(_QWORD *)(v36 + 200) = v103;
  if ( *(_QWORD *)(v102 + 216)
    && (!v67 || *(_BYTE *)v67 != 1 || (*(_DWORD *)(v67 + 80) & 0x1000) == 0 || (dword_140541180 & 1) != 0) )
  {
    *(_DWORD *)(v36 + 192) = v104 | 0x400000;
  }
  v105 = v159;
  *(_QWORD *)(v36 + 240) = v90;
  v106 = 48 * v105 - 0x58000000000LL;
  result = 3221435187LL;
  *(_QWORD *)(v36 + 248) = v106;
  return result;
}
