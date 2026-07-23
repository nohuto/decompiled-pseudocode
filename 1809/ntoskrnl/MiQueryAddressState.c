/*
 * XREFs of MiQueryAddressState @ 0x14003EAF0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x140075E90 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x140088398 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x1400F1668 (MiAllowProtectionChange.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MiGetValidAweProtection @ 0x1402B0F80 (MiGetValidAweProtection.c)
 *     MiSkipEntirePagefileRegions @ 0x1402BF438 (MiSkipEntirePagefileRegions.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 *     ExSpinLockIsContended @ 0x14031C1F8 (ExSpinLockIsContended.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // r15
  unsigned __int16 *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  BOOL v14; // esi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  char *AnyMultiplexedVm; // rbx
  int v18; // eax
  unsigned int v19; // r8d
  unsigned __int64 v20; // r14
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // r12
  unsigned int v26; // r13d
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r12d
  ULONG_PTR v31; // rsi
  int PageProtection; // eax
  unsigned __int64 v33; // r15
  __int64 IsContended; // rdx
  unsigned __int16 *v35; // r9
  int v36; // ecx
  int v37; // r13d
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int64 v41; // rdi
  int v42; // r10d
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rbx
  int v48; // ecx
  unsigned int v49; // r11d
  unsigned __int64 v50; // r10
  unsigned __int64 Process; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r11
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r14
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // r9
  __int64 v60; // rbx
  __int16 v61; // ax
  __int64 v62; // r10
  unsigned __int64 v63; // r11
  __int64 v64; // r11
  _QWORD *v65; // rdx
  int v66; // r8d
  unsigned __int64 v67; // rdx
  int v68; // r10d
  ULONG_PTR v69; // r10
  unsigned __int64 v70; // rdx
  __int64 *v71; // rbx
  __int64 v72; // rsi
  unsigned int SessionId; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r9
  unsigned __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // r8
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r9
  unsigned __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // r8
  __int16 v87; // ax
  unsigned __int64 v88; // r9
  unsigned __int8 v89; // al
  unsigned __int8 CurrentIrql; // cl
  LONG *v91; // rbx
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // rcx
  char v95; // bl
  struct _KPRCB *CurrentPrcb; // rax
  bool v97; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v99; // rdx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  LONG *v105; // rax
  int v106; // r8d
  unsigned int v107; // edi
  unsigned int v108; // esi
  unsigned int v109; // ebx
  struct _LIST_ENTRY *v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // r8
  char v115; // bl
  struct _KPRCB *v116; // rcx
  __int64 v117; // rax
  volatile signed __int32 *v118; // r8
  int v119; // r9d
  signed __int32 v120; // eax
  volatile signed __int32 v121; // ett
  signed __int32 v122; // edx
  signed __int64 v123; // rdx
  unsigned __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // r8
  signed __int64 v127; // rax
  signed __int64 v128; // rdx
  __int64 result; // rax
  int *v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r9
  __int64 v133; // rax
  int ValidAweProtection; // eax
  __int64 LeafVa; // rax
  int v136; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v138; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v139; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v141; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  int v144; // [rsp+68h] [rbp-98h]
  __int64 v145; // [rsp+70h] [rbp-90h] BYREF
  int v146; // [rsp+78h] [rbp-88h]
  __int64 v147; // [rsp+80h] [rbp-80h] BYREF
  int v148; // [rsp+88h] [rbp-78h]
  __int64 v149; // [rsp+90h] [rbp-70h]
  unsigned int v150; // [rsp+98h] [rbp-68h] BYREF
  int v151; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int64 v152; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v153; // [rsp+A8h] [rbp-58h]
  int *v154; // [rsp+B0h] [rbp-50h]
  __int64 v155; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v156; // [rsp+C0h] [rbp-40h]
  __int64 *v157; // [rsp+C8h] [rbp-38h]
  __int64 v158; // [rsp+D0h] [rbp-30h]
  _DWORD *v159; // [rsp+D8h] [rbp-28h]
  __int64 v160; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v161; // [rsp+E8h] [rbp-18h]
  _KPROCESS *v162; // [rsp+F0h] [rbp-10h]
  _QWORD v163[22]; // [rsp+100h] [rbp+0h] BYREF

  v154 = a6;
  v8 = a1;
  v157 = a7;
  v159 = a8;
  *a8 = 1;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v139 = v9;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v162 = (_KPROCESS *)v10;
  BugCheckParameter2 = v10;
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v146 = 0;
  v153 = v11;
  v12 = 0LL;
  v138 = 0LL;
  v141 = 0LL;
  v148 = 0x2000;
  v13 = 0LL;
  v149 = 0LL;
  v158 = v11 << 25 >> 16;
LABEL_2:
  v152 = v11;
  v144 = 0;
  v14 = 0;
  v145 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  memset(v163, 0, sizeof(v163));
  LODWORD(v163[0]) = 2145;
  v15 = ((v10 << 25) - v13) >> 16;
  v16 = v15;
  if ( v15 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v16 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v16 = (__int64)((v16 << 25) - v13) >> 16;
    }
    while ( v16 >= 0xFFFFF68000000000uLL );
    v9 = v139;
  }
  if ( v16 < 0xFFFF800000000000uLL || v16 >= qword_14043CB80 && v16 <= qword_14043B5F0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v18 = MiFastLockLeafPageTable(AnyMultiplexedVm, v15, 0LL);
  if ( v18 )
  {
    v19 = v18 - 1;
    LODWORD(v155) = v18 - 1;
    v20 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v156 = v20;
  }
  else
  {
    LODWORD(v163[0]) |= 4u;
    v163[21] = &v155;
    v163[2] = 0LL;
    v163[20] = MiGetNextPageTableTail;
    BYTE4(v163[0]) = a3;
    v163[5] = v158;
    BYTE2(v163[1]) = 1;
    v163[3] = AnyMultiplexedVm;
    v163[4] = v15;
    MiWalkPageTables(v163);
    v19 = v155;
    v20 = v156;
  }
  if ( v20 )
  {
    v12 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v138 = v12;
    if ( ((v153 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL != v12 )
      v152 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v19 )
    {
      if ( v19 > 1 )
      {
        v131 = v19 - 1;
        do
        {
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v131;
        }
        while ( v131 );
      }
      v132 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_BYTE *)(a4 + 48) & 7) == 3 )
      {
        v133 = MI_READ_PTE_LOCK_FREE(v12);
        ValidAweProtection = MiGetValidAweProtection(v133);
        *v154 = ValidAweProtection;
      }
      else
      {
        *v154 = (unsigned __int8)*(_DWORD *)(a4 + 48) >> 3;
      }
      MiUnlockPageTableInternal(v9, v132);
      LeafVa = MiGetLeafVa(v12 + 8);
      *v157 = LeafVa;
      return 4096LL;
    }
    v21 = BugCheckParameter2;
    if ( BugCheckParameter2 == v20 )
    {
      v145 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      v144 = 1;
      v20 = BugCheckParameter2 + 8;
      v14 = v145 == 0;
    }
    else
    {
      MiUnlockPageTableInternal(v9, ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v12 = 0LL;
      v138 = 0LL;
    }
  }
  else
  {
    v21 = BugCheckParameter2;
    v20 = v153 + 8;
  }
  v22 = 0LL;
  while ( 1 )
  {
    v23 = v145;
    v24 = 0;
    v25 = 0LL;
    v136 = 0;
    v26 = 0x2000;
    if ( v145 )
    {
      if ( (unsigned __int64)&v145 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v145 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v145, v145)
        && (v27 & 1) != 0
        && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
      {
        v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v145 >> 3) & 0x1FF));
          v23 = v27;
          if ( (v29 & 0x20) != 0 )
            v23 = v27 | 0x20;
          if ( (v29 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
        else
        {
          v23 = v145;
        }
      }
      if ( (v23 & 0x3E0) == 0x200 && (v23 & 1) == 0 && ((v23 & 0x400) == 0 || MiIsPrototypePteVadLookup(v23)) )
        goto LABEL_66;
      v26 = 4096;
      v30 = *(_DWORD *)(a4 + 48);
      if ( (v30 & 7) == 1 )
      {
        v31 = BugCheckParameter2;
        v24 = 0;
        LODWORD(v25) = (unsigned __int8)v30 >> 3;
        goto LABEL_68;
      }
      if ( (v30 & 7) == 3 && (v30 & 0x20000) == 0 )
      {
        v31 = BugCheckParameter2;
        LODWORD(v25) = MiGetValidAweProtection(v145);
        v24 = 0;
        goto LABEL_68;
      }
      PageProtection = MiGetPageProtection(a4, v21);
      LODWORD(v25) = PageProtection;
      if ( ProtoPteAddress )
      {
        v9 = v139;
        MiUnlockPageTableInternal(v139, v12);
        v12 = 0LL;
        v138 = 0LL;
        MiUnlockWorkingSetShared(v139, a3);
        MiFaultInPagedPool(ProtoPteAddress);
        MiLockWorkingSetShared(v139);
        v11 = v153;
        v10 = BugCheckParameter2;
        v13 = v149;
        goto LABEL_2;
      }
      v22 = 0LL;
      v31 = BugCheckParameter2;
      v33 = v138;
      v24 = 0;
      IsContended = a5;
      v35 = v139;
      if ( !PageProtection )
        v26 = 0x2000;
      goto LABEL_70;
    }
    *v159 = 0;
    v36 = *(_DWORD *)(a4 + 48);
    if ( (((v36 & 7) - 1) & 0xFFFFFFFD) == 0 )
      goto LABEL_53;
    if ( (v36 & 0x4000) != 0 )
    {
      v37 = *(_DWORD *)(a4 + 52);
      if ( v37 < 0 )
        LODWORD(v25) = (unsigned __int8)v36 >> 3;
      v26 = ((v37 >> 31) & 0xFFFFF000) + 0x2000;
LABEL_53:
      v31 = BugCheckParameter2;
LABEL_68:
      IsContended = a5;
LABEL_69:
      v35 = v139;
      v33 = v138;
      goto LABEL_70;
    }
    v38 = v8 >> 12;
    v161 = v38;
    ProtoPteAddress = MiGetProtoPteAddress(a4, v38, 4LL, &v147);
    v41 = ProtoPteAddress;
    if ( !ProtoPteAddress )
    {
      IsContended = a5;
      if ( a5 && (*(_DWORD *)(a5 + 32) != 0x2000 || *(_DWORD *)(a5 + 36)) )
      {
        v22 = 0LL;
        v24 = 1;
        v31 = BugCheckParameter2;
        v20 = v21;
        v136 = 1;
        goto LABEL_69;
      }
      if ( !(unsigned int)MiVadPureReserve(a4, a5, v40) || !v147 || *(_QWORD *)(v147 + 8) )
      {
        v20 = v21 + 8;
LABEL_65:
        v22 = 0LL;
LABEL_66:
        v31 = BugCheckParameter2;
        goto LABEL_67;
      }
      v43 = MiSkipEntirePagefileRegions(v42, v38, v21, v20, v147);
      v22 = 0LL;
      v20 = v43;
      v31 = BugCheckParameter2;
      v24 = 0;
      v33 = v138;
      IsContended = a5;
      v35 = v139;
      if ( v43 == v21 )
        v20 = v21 + 8;
      goto LABEL_70;
    }
    if ( !v14 )
    {
      if ( v144 )
      {
        v47 = v147;
        goto LABEL_120;
      }
      v55 = v20 - v21;
      v47 = v147;
      v56 = v55 >> 3;
      v57 = *(_QWORD *)(v147 + 8);
      v58 = v57 + 8 * (*(unsigned int *)(v147 + 44) - (unsigned __int64)(*(_DWORD *)(v147 + 52) & 0x3FFFFFFF));
      if ( (*(_BYTE *)(v147 + 34) & 2) != 0 || ProtoPteAddress < v57 || ProtoPteAddress >= v58 )
      {
        v56 = 1LL;
      }
      else if ( ProtoPteAddress + 8 * v56 > v58 )
      {
        v56 = (__int64)(v58 - ProtoPteAddress) >> 3;
      }
      v20 = BugCheckParameter2 + 8 * v56;
LABEL_110:
      if ( (unsigned int)MiVadPureReserve(a4, v39, v40) )
      {
        v59 = v41;
        v60 = v149;
        do
        {
          v61 = MI_READ_PTE_LOCK_FREE(((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v61 & 1) != 0 )
            break;
          if ( (v61 & 0x3E0) != 0 )
            break;
          v59 = ((v62 << 25) - v60 + 0x10000000) >> 16;
        }
        while ( v59 < v63 );
        v47 = v147;
        v38 = v161;
        if ( v59 <= v63 )
          v63 = v59;
        if ( v63 != v41 )
        {
          v64 = (__int64)(v63 - v41) >> 3;
          v41 = 0LL;
          ProtoPteAddress = 0LL;
          v20 = BugCheckParameter2 + 8 * v64;
        }
      }
      goto LABEL_120;
    }
    v46 = v152 - v21;
    v47 = v147;
    v39 = (v46 >> 3) + 1;
    v48 = *(_DWORD *)(v147 + 52);
    v49 = *(_DWORD *)(v147 + 44);
    if ( v39 > 32 )
      v39 = 32LL;
    v50 = *(_QWORD *)(v147 + 8);
    v160 = *(unsigned int *)(v147 + 44);
    Process = v50 + 8 * (v49 - (unsigned __int64)(v48 & 0x3FFFFFFF));
    if ( (*(_BYTE *)(v147 + 34) & 2) != 0 || ProtoPteAddress < v50 || ProtoPteAddress >= Process )
    {
      v39 = 0LL;
    }
    else if ( ProtoPteAddress + 8 * v39 > Process )
    {
      v39 = (__int64)(Process - ProtoPteAddress) >> 3;
    }
    v52 = BugCheckParameter2 - 8 + 8 * v39;
    v20 = BugCheckParameter2 + 8;
    if ( BugCheckParameter2 + 8 <= v52 )
    {
      v53 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        v39 = *(_QWORD *)v20;
        if ( v20 >= 0xFFFFF6FB7DBED000uLL
          && v20 <= v53
          && (unsigned int)MiPteHasShadow(Process, v39)
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v40 = *(_QWORD *)(Process + 1544);
          if ( v40 )
          {
            v54 = *(_QWORD *)(v40 + 8 * ((v20 >> 3) & 0x1FF));
            v40 = v39 | 0x20;
            Process = (unsigned __int8)v54;
            LOBYTE(Process) = v54 & 0x20;
            if ( (v54 & 0x20) == 0 )
              v40 = v39;
            v39 = v40;
            if ( (v54 & 0x42) != 0 )
              v39 = v40 | 0x42;
          }
        }
        if ( v39 )
          break;
        v20 += 8LL;
      }
      while ( v20 <= v52 );
      v41 = ProtoPteAddress;
      v47 = v147;
    }
    if ( !v144 )
      goto LABEL_110;
LABEL_120:
    v65 = *(_QWORD **)(a4 + 120);
    if ( (__int64)v65 >= 0 )
    {
      v66 = 0;
      v67 = -1LL;
    }
    else
    {
      v66 = 1;
      v67 = (unsigned __int64)(*v65 - 1LL) >> 12;
    }
    if ( !v41 )
      goto LABEL_65;
    v68 = *(_DWORD *)(a4 + 48);
    if ( (v68 & 7) == 2 )
    {
      v69 = a4;
      v70 = 0LL;
      v71 = *(__int64 **)(a4 + 72);
      if ( v71 )
      {
        do
        {
          if ( (*((_BYTE *)v71 + 34) & 2) != 0 && (v72 = *v71, (*(_DWORD *)(*v71 + 56) & 0x4000000) != 0) )
          {
            SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
            v41 = ProtoPteAddress;
            v70 = *(_QWORD *)(MiGetSharedProtos(v72, SessionId, v71) + 72);
          }
          else
          {
            v70 = v71[1];
          }
          if ( v41 >= v70 && v41 < v70 + 8LL * *((unsigned int *)v71 + 11) )
            break;
          v71 = (__int64 *)v71[2];
        }
        while ( v71 );
        v69 = a4;
      }
      if ( (__int64)(v41 - v70) >> 3 >= (unsigned __int64)(*((_DWORD *)v71 + 11) - (*((_DWORD *)v71 + 13) & 0x3FFFFFFFu)) )
        goto LABEL_65;
      LODWORD(v25) = (*(_DWORD *)(v69 + 48) >> 3) & 0x1F;
      if ( (_DWORD)v25 == 7 )
        LODWORD(v25) = (*((unsigned __int16 *)v71 + 16) >> 1) & 0x1F;
      v22 = 0LL;
      v31 = BugCheckParameter2;
      v33 = v138;
      v24 = 0;
      IsContended = a5;
      v35 = v139;
      if ( (_DWORD)v25 )
        v26 = 4096;
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)v47 + 64LL) || (*(_DWORD *)(*(_QWORD *)v47 + 56LL) & 0x2000) != 0 )
      {
        v31 = BugCheckParameter2;
        v92 = (__int64)(v20 - BugCheckParameter2) >> 3;
        v22 = (__int64)(*(_QWORD *)(v47 + 8)
                      + 8 * (*(unsigned int *)(v47 + 44) - (unsigned __int64)(*(_DWORD *)(v47 + 52) & 0x3FFFFFFF))
                      - v41) >> 3;
        if ( v22 > v92 )
          v22 = v92;
        v141 = v22;
        v93 = v22;
        if ( v66 )
        {
          v94 = *(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32);
          if ( v38 - v94 <= v67 )
          {
            v22 = v94 - v38 + v67 + 1;
            v66 = 0;
            if ( v93 <= v22 )
              v22 = v93;
            v141 = v22;
          }
        }
        v20 = BugCheckParameter2 + 8 * v22;
        if ( !v66 )
        {
          v24 = 0;
          v26 = 4096;
          LODWORD(v25) = (unsigned __int8)v68 >> 3;
          goto LABEL_68;
        }
LABEL_67:
        v24 = 0;
        goto LABEL_68;
      }
      v33 = v138;
      if ( v138 )
      {
        MiUnlockPageTableInternal(v139, v138);
        v33 = 0LL;
        v138 = 0LL;
      }
      MiUnlockWorkingSetShared(v139, a3);
      v31 = BugCheckParameter2;
      if ( MiPteInShadowRange(v41)
        && (unsigned int)MiPteHasShadow(v75, v74)
        && (v74 & 1) != 0
        && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
      {
        v41 = ProtoPteAddress;
        v77 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v77 )
        {
          v78 = *(_QWORD *)(v77 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
          v79 = v74 | 0x20;
          if ( (v78 & 0x20) == 0 )
            v79 = v74;
          v74 = v79;
          if ( (v78 & 0x42) != 0 )
            v74 = v79 | 0x42;
        }
      }
      if ( v74 )
      {
        v26 = 4096;
        v25 = (*(_DWORD *)(a4 + 48) >> 3) & 0x1F;
      }
      IsContended = a5;
      if ( !a5
        || v26 == *(_DWORD *)(a5 + 32)
        && ((_DWORD)v25 ? (v80 = MmProtectToValue[v25]) : (v80 = 0), v80 == *(_DWORD *)(a5 + 36)) )
      {
        v22 = 0LL;
        if ( v76 )
        {
          while ( 1 )
          {
LABEL_163:
            if ( MiPteInShadowRange(v41)
              && (unsigned int)MiPteHasShadow(v82, v81)
              && (v81 & 1) != 0
              && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
            {
              v41 = ProtoPteAddress;
              v84 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v84 )
              {
                v85 = *(_QWORD *)(v84 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                v86 = v81 | 0x20;
                if ( (v85 & 0x20) == 0 )
                  v86 = v81;
                v81 = v86;
                if ( (v85 & 0x42) != 0 )
                  v81 = v86 | 0x42;
              }
            }
            if ( v81 )
            {
              if ( v26 != 4096 )
                break;
            }
            else if ( v26 == 4096 )
            {
              break;
            }
            ++v22;
            v41 += 8LL;
            v141 = v22;
            ProtoPteAddress = v41;
            if ( v83 == 1 )
              break;
            while ( (v41 & 0xFFF) == 0 )
            {
              v87 = MI_READ_PTE_LOCK_FREE(((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              if ( (v87 & 1) != 0 || (v87 & 0x3E0) != 0 )
              {
                if ( v26 == 4096 )
                  goto LABEL_163;
                goto LABEL_187;
              }
              if ( v26 == 4096 )
                goto LABEL_187;
              if ( v88 <= 0x200 )
              {
                v22 += v88;
                v141 = v22;
                ProtoPteAddress = v41 + 8 * v88;
                goto LABEL_187;
              }
              v41 += 4096LL;
              v141 = v22 + 512;
              ProtoPteAddress = v41;
            }
          }
LABEL_187:
          IsContended = a5;
        }
        v24 = 0;
      }
      else
      {
        v24 = 1;
        v22 = 0LL;
        v136 = 1;
        v141 = 0LL;
      }
      v35 = v139;
      v20 = BugCheckParameter2 + 8 * v22;
      v89 = v139[92] & 7;
      if ( v89 < 6u )
      {
        v91 = &dword_14043C7C0;
        if ( v89 != 2 )
          v91 = (LONG *)(v139 + 96);
        ExAcquireSpinLockShared(v91);
        v22 = v141;
        v24 = v136;
        IsContended = a5;
        v35 = v139;
        if ( v91[1] )
          _InterlockedExchange(v91 + 1, 0);
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
LABEL_70:
    v44 = (unsigned __int64)v162;
    if ( (_KPROCESS *)v31 == v162 )
    {
      v148 = v26;
      v146 = v25;
      if ( IsContended )
      {
        if ( v26 != *(_DWORD *)(IsContended + 32) )
          goto LABEL_302;
        if ( (_DWORD)v25 )
        {
          v44 = (unsigned __int64)MmProtectToValue;
          v45 = MmProtectToValue[(unsigned int)v25];
        }
        else
        {
          v45 = 0;
        }
        if ( v45 != *(_DWORD *)(IsContended + 36) )
          goto LABEL_302;
      }
      goto LABEL_275;
    }
    if ( v26 != v148 || (_DWORD)v25 != v146 )
      break;
    if ( v22 )
      goto LABEL_275;
    v12 = v138;
    if ( v24 == 1 || (__int64)((v31 - (_QWORD)v162) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_276;
    if ( v138 )
    {
      v95 = v35[92] & 7;
      if ( v138 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v95 )
        {
          if ( v95 == 7 )
          {
            v97 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
          }
          else
          {
            if ( v95 == 5 )
              Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
            else
              Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
            v97 = Next == 0LL;
          }
        }
        else
        {
          v97 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
        }
LABEL_249:
        if ( !v97 )
          goto LABEL_295;
        goto LABEL_250;
      }
      v44 = 0xFFFFF6FB7DBED000uLL;
      if ( !v95 && v138 >= 0xFFFFF6FB7DBED000uLL && v138 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v99 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL) + 1296) + 552LL);
        if ( v99 )
        {
          IsContended = (unsigned int)ExSpinLockIsContended(v99 + 4LL * (((unsigned int)v138 >> 3) & 0x1FF));
          goto LABEL_247;
        }
        v35 = v139;
        v44 = 0xFFFFF6FB7DBED000uLL;
      }
      if ( v95 && v138 >= 0xFFFFF6FB7DBED000uLL && v138 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v35, v138, &v150);
        v44 = v150;
        IsContended = (unsigned int)(*PageTableLockBuffer >> v150);
        v97 = (IsContended & 2) == 0;
      }
      else
      {
        v101 = *(_QWORD *)v138;
        if ( v138 >= 0xFFFFF6FB7DBED000uLL
          && v138 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v101)
          && (v101 & 1) != 0
          && ((v101 & 0x20) == 0 || (v101 & 0x42) == 0) )
        {
          v44 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v102 = *(_QWORD *)(v44 + 1544);
          if ( v102 )
          {
            v103 = *(_QWORD *)(v102 + 8 * ((v138 >> 3) & 0x1FF));
            v104 = v101 | 0x20;
            v44 = (unsigned __int8)v103;
            LOBYTE(v44) = v103 & 0x20;
            if ( (v103 & 0x20) == 0 )
              v104 = v101;
            v101 = v104;
            if ( (v103 & 0x42) != 0 )
              v101 = v104 | 0x42;
          }
        }
        IsContended = (v101 >> 60) & 2;
LABEL_247:
        v97 = (_DWORD)IsContended == 0;
      }
      v35 = v139;
      goto LABEL_249;
    }
LABEL_250:
    v105 = &dword_14043C7C0;
    if ( (v35[92] & 7) != 2 )
      v105 = (LONG *)(v35 + 96);
    if ( (*v105 & 0x40000000) != 0 )
    {
LABEL_295:
      v20 = BugCheckParameter2 + 8;
LABEL_296:
      v33 = v138;
      goto LABEL_297;
    }
    if ( a3 < 2u )
    {
      v44 = (unsigned __int64)KeGetCurrentPrcb();
      v106 = *(_DWORD *)(v44 + 11884);
      v107 = *(_DWORD *)(v44 + 22764);
      v108 = *(_DWORD *)(v44 + 23452);
      if ( (v106 & 1) != 0 )
      {
        IsContended = 1LL;
        if ( v108 > 7 )
        {
          if ( *(_BYTE *)(v44 + 11881) )
          {
            v109 = 1;
LABEL_272:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
              EtwTraceShouldYieldProcessor(v109, v107, v108);
            v35 = v139;
            if ( v109 )
              goto LABEL_295;
LABEL_275:
            v12 = v138;
            goto LABEL_276;
          }
          goto LABEL_267;
        }
      }
      else
      {
        IsContended = 0LL;
        if ( (v106 & 0x1E) != 0 )
        {
          v109 = 2;
          goto LABEL_272;
        }
        if ( *(_BYTE *)(v44 + 11881) )
        {
          v109 = 3;
          goto LABEL_272;
        }
        v110 = *(struct _LIST_ENTRY **)(v44 + 16);
        if ( v110 && v110 != *(struct _LIST_ENTRY **)(v44 + 8) )
        {
          v109 = 4;
          goto LABEL_272;
        }
      }
      if ( v107 <= 7 )
        goto LABEL_275;
      if ( !(_DWORD)IsContended )
      {
LABEL_271:
        _disable();
        v109 = 0;
        *(_DWORD *)(v44 + 22764) = 0;
        *(_DWORD *)(v44 + 23452) = 0;
        KiResetGlobalDpcWatchdogProfiler();
        _enable();
        goto LABEL_272;
      }
LABEL_267:
      if ( (v106 & 0x1E) != 0 )
      {
        v109 = 5;
        goto LABEL_272;
      }
      if ( *(_QWORD *)(v44 + 8) != *(_QWORD *)(v44 + 24) )
      {
        v109 = 6;
        goto LABEL_272;
      }
      goto LABEL_271;
    }
LABEL_276:
    if ( v136 )
      goto LABEL_296;
    v22 = v141;
    if ( v141 )
      goto LABEL_296;
    v21 = BugCheckParameter2 + 8;
    BugCheckParameter2 = v21;
    if ( v20 != v21 || v20 > v152 )
      goto LABEL_296;
    if ( v144 )
    {
      v111 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v44, v111)
        && (v111 & 1) != 0
        && ((v111 & 0x20) == 0 || (v111 & 0x42) == 0) )
      {
        v112 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v112 )
        {
          v113 = *(_QWORD *)(v112 + 8 * ((v21 >> 3) & 0x1FF));
          v114 = v111 | 0x20;
          if ( (v113 & 0x20) == 0 )
            v114 = v111;
          v111 = v114;
          if ( (v113 & 0x42) != 0 )
            v111 = v114 | 0x42;
        }
      }
      v145 = v111;
    }
    v20 += 8LL;
    v8 = (__int64)((v21 << 25) - v149) >> 16;
    v14 = 0;
  }
  LODWORD(v25) = v146;
  v26 = v148;
LABEL_302:
  v20 = v31;
LABEL_297:
  if ( v33 )
  {
    v115 = v35[92] & 7;
    if ( v33 == 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( v115 )
      {
        if ( v115 == 7 )
        {
          KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
        }
        else
        {
          v116 = KeGetCurrentPrcb();
          if ( v115 == 5 )
            KxReleaseQueuedSpinLock(v116->SelfmapLockHandle);
          else
            KxReleaseQueuedSpinLock(&v116->SelfmapLockHandle[3]);
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[2]);
      }
    }
    else
    {
      if ( !v115 && v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v117 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, IsContended) + 1296) + 552LL);
        if ( v117 )
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v117 + 4 * ((v33 >> 3) & 0x1FF));
          goto LABEL_333;
        }
        v35 = v139;
      }
      if ( v115 && v33 >= 0xFFFFF6FB7DBED000uLL && v33 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v118 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v35, v33, &v151);
        v119 = ~(3 << v151);
        v121 = *v118;
        v120 = _InterlockedCompareExchange(v118, v119 & *v118, *v118);
        if ( v121 != v120 )
        {
          do
          {
            v122 = v120;
            v120 = _InterlockedCompareExchange(v118, v119 & v120, v120);
          }
          while ( v120 != v122 );
        }
      }
      else
      {
        v123 = *(_QWORD *)v33;
        if ( v33 >= 0xFFFFF6FB7DBED000uLL
          && v33 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v123)
          && (v123 & 1) != 0
          && ((v123 & 0x20) == 0 || (v123 & 0x42) == 0) )
        {
          v124 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v124 )
          {
            v125 = *(_QWORD *)(v124 + 8 * ((v33 >> 3) & 0x1FF));
            v126 = v123 | 0x20;
            if ( (v125 & 0x20) == 0 )
              v126 = v123;
            v123 = v126;
            if ( (v125 & 0x42) != 0 )
              v123 = v126 | 0x42;
          }
        }
        v127 = _InterlockedCompareExchange64((volatile signed __int64 *)v33, v123 & 0xCFFFFFFFFFFFFFFFuLL, v123);
        if ( v123 != v127 )
        {
          do
          {
            v128 = v127;
            v127 = _InterlockedCompareExchange64((volatile signed __int64 *)v33, v127 & 0xCFFFFFFFFFFFFFFFuLL, v127);
          }
          while ( v127 != v128 );
        }
      }
    }
  }
LABEL_333:
  result = v26;
  v130 = v154;
  *v157 = (__int64)((v20 << 25) - v149) >> 16;
  *v130 = v25;
  return result;
}
