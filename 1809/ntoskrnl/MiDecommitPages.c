/*
 * XREFs of MiDecommitPages @ 0x140068940
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1401580BC (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1405ED220 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E1E30 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiDeletePteList @ 0x140035B80 (MiDeletePteList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiCountWslesInPageTable @ 0x1400F82B0 (MiCountWslesInPageTable.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  ULONG_PTR v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r15
  ULONG_PTR v20; // r14
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  unsigned __int8 v23; // al
  LONG *v24; // rbx
  KIRQL v25; // al
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rbx
  __int16 v28; // ax
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // r9
  struct _KEVENT *v32; // r10
  __int64 v33; // r11
  unsigned __int64 v34; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 DpcRequestSummary; // rdx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // r15d
  __int64 v39; // r8
  _KTHREAD *NextThread; // rax
  BOOL v41; // r15d
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rcx
  int v46; // r13d
  unsigned __int8 WsleContents; // r12
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  int v51; // r9d
  unsigned __int64 v52; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v54; // r8
  unsigned __int64 *v55; // rdi
  char v56; // r11
  __int64 v57; // rdi
  unsigned __int64 v58; // r15
  unsigned int v59; // r10d
  char v60; // r11
  __int64 v61; // rax
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rbx
  __int64 v64; // rbx
  LONG *v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 LeafVa; // rax
  char *AnyMultiplexedVm; // rbx
  int v70; // eax
  unsigned __int64 v71; // r12
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v75; // r10
  __int64 v76; // r15
  __int64 v77; // r10
  __int64 updated; // rax
  __int16 v79; // r8
  __int64 UsedPtesHandle; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rax
  ULONG_PTR v85; // r10
  __int64 v86; // r15
  BOOL v87; // r12d
  unsigned __int64 v88; // rcx
  struct _KEVENT *v89; // rcx
  __int64 v90; // rdi
  __int64 v91; // rdx
  struct _KEVENT *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // edi
  __int64 CurrentIrql; // rcx
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rdx
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // rcx
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r9
  int v111; // eax
  __int64 v112; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v114; // rdx
  __int64 v115; // rcx
  unsigned int v116; // [rsp+38h] [rbp-C8h]
  __int64 v117; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v118; // [rsp+48h] [rbp-B8h]
  __int64 v120; // [rsp+58h] [rbp-A8h]
  int v121; // [rsp+60h] [rbp-A0h]
  __int64 v122; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT *v123; // [rsp+70h] [rbp-90h]
  __int64 v124; // [rsp+78h] [rbp-88h]
  ULONG_PTR v125; // [rsp+80h] [rbp-80h]
  int v126; // [rsp+88h] [rbp-78h]
  unsigned __int64 v127; // [rsp+90h] [rbp-70h]
  unsigned __int64 v128; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v129; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v130; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v131[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v132; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v133; // [rsp+C8h] [rbp-38h]
  _QWORD v134[22]; // [rsp+D0h] [rbp-30h] BYREF
  int v135; // [rsp+180h] [rbp+80h] BYREF
  __int16 v136; // [rsp+184h] [rbp+84h]
  __int64 v137; // [rsp+188h] [rbp+88h]
  __int64 v138; // [rsp+190h] [rbp+90h]
  _QWORD Base[257]; // [rsp+198h] [rbp+98h] BYREF
  _DWORD v140[8]; // [rsp+9A0h] [rbp+8A0h] BYREF

  v131[1] = a4;
  v136 = 0;
  v138 = 0LL;
  v8 = a2;
  Base[0] = 0LL;
  v121 = 0;
  v125 = a2;
  v137 = 256LL;
  v135 = 1;
  v9 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned int *)(a4 + 52);
  v14 = v9;
  v15 = 0xFFFFF68000000000uLL;
  if ( (v13 & 0xFFFFFFFF7FFFFFFFuLL | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(4LL * (*(_DWORD *)(a4 + 48) & 0xF8));
    v127 = v15
         + 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL);
  }
  else if ( (int)v13 < 0 )
  {
    v127 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
    v16 = 0LL;
  }
  else
  {
    v127 = v11;
    v121 = MiVadPureReserve(a4, v13, v10);
  }
  v17 = 2;
  v120 = v16;
  if ( a5 )
    v17 = v16;
  v18 = v16;
  v126 = v17;
  v19 = v12 + 1280;
  v20 = v15 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v117 = v12 + 1280;
  v21 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v22 = 1LL;
  v118 = v21;
  v116 = 1;
  v123 = *(struct _KEVENT **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v12 + 1454));
  v23 = *(_BYTE *)(v12 + 1464) & 7;
  if ( v23 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v124 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v23 == 2 )
      v24 = &dword_14043C7C0;
    else
      v24 = (LONG *)(v12 + 1472);
    v25 = ExAcquireSpinLockShared(v24);
    v16 = 0LL;
    if ( v24[1] )
      _InterlockedExchange(v24 + 1, 0);
    v22 = 1LL;
    v12 = a3;
    v10 = a6;
    v124 = v25;
  }
  if ( v20 > v8 )
  {
LABEL_102:
    v22 = (unsigned __int64)a6;
    goto LABEL_103;
  }
  while ( 1 )
  {
    v26 = 0xFFFFF6FB7DBED000uLL;
    if ( (_DWORD)v22 != 1 && (v20 & 0xFFF) != 0 )
      goto LABEL_15;
    if ( HIDWORD(v137) )
      MiDeletePteList((__int64)&v135, v12, v14, (__int64)v10);
    if ( v18 )
    {
      MiUnlockPageTableInternal(v19, v18);
      v120 = 0LL;
    }
    if ( !v121 )
    {
      MiMakeSystemAddressValid(v20, v126);
      goto LABEL_101;
    }
    v132 = 0LL;
    v133 = 0LL;
    memset(v134, 0, sizeof(v134));
    LODWORD(v134[0]) = 2145;
    LeafVa = MiGetLeafVa((__int64)(v20 << 25) >> 16);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_14043CB80 && LeafVa <= qword_14043B5F0 )
      AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v70 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, (__int64)(v20 << 25) >> 16, 0);
    if ( v70 )
    {
      LODWORD(v132) = v70 - 1;
      v71 = (((unsigned __int64)((__int64)(v20 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v133 = v71;
    }
    else
    {
      LODWORD(v134[0]) |= 4u;
      v134[21] = &v132;
      v134[2] = 0LL;
      v134[20] = MiGetNextPageTableTail;
      BYTE4(v134[0]) = v124;
      BYTE2(v134[1]) = 1;
      v134[3] = AnyMultiplexedVm;
      v134[4] = (__int64)(v20 << 25) >> 16;
      v134[5] = (__int64)(v8 << 25) >> 16;
      MiWalkPageTables(v134);
      v71 = v133;
    }
    v22 = (unsigned __int64)a6;
    v72 = a6[3];
    if ( !v71 )
      break;
    v73 = v71 - v20;
    v20 = v71;
    a6[3] = v72 + (v73 >> 3);
    v19 = v117;
    v21 = (__int64)(v71 << 25) >> 16;
    v118 = v21;
LABEL_101:
    v26 = 0xFFFFF6FB7DBED000uLL;
    v16 = 0LL;
    v120 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v116 = 0;
LABEL_15:
    v27 = *(_QWORD *)v20;
    if ( v20 >= 0xFFFFF6FB7DBED000uLL
      && v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v22 )
      {
        v98 = *(_QWORD *)(v22 + 8 * ((v20 >> 3) & 0x1FF));
        v22 = v27 | 0x20;
        if ( (v98 & 0x20) == 0 )
          v22 = *(_QWORD *)v20;
        v27 = v22;
        if ( (v98 & 0x42) != 0 )
          v27 = v22 | 0x42;
      }
    }
    v129 = v27;
    if ( !v27 )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(v21, v22, v10);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( v20 > v127 )
        ++a6[3];
      if ( !MiPteInShadowRange(v20) )
      {
LABEL_121:
        *(_QWORD *)v20 = v81;
        goto LABEL_37;
      }
      if ( (unsigned int)MiPteHasShadow(v82, v81) )
      {
        if ( HIBYTE(word_14043B26C) || (v14 & 1) == 0 )
          goto LABEL_281;
LABEL_280:
        v81 |= 0x8000000000000000uLL;
LABEL_281:
        *(_QWORD *)v20 = v81;
        MiWritePteShadow(v20);
        goto LABEL_37;
      }
LABEL_187:
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v14 & 1) != 0 )
      {
        v81 |= 0x8000000000000000uLL;
      }
      goto LABEL_121;
    }
    if ( (v27 & 1) != 0 )
    {
      v41 = 1;
      v42 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = *(_QWORD *)v42;
      if ( v42 >= 0xFFFFF6FB7DBED000uLL
        && v42 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v43 & 1) != 0
        && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
      {
        v99 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v99 )
        {
          v100 = *(_QWORD *)(v99 + 8 * ((v42 >> 3) & 0x1FF));
          v101 = v43 | 0x20;
          if ( (v100 & 0x20) == 0 )
            v101 = *(_QWORD *)v42;
          v43 = v101;
          if ( (v100 & 0x42) != 0 )
            v43 = v101 | 0x42;
        }
      }
      v44 = 48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v21 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v45 = *(_QWORD *)v42;
        v46 = 1;
        if ( v42 >= 0xFFFFF6FB7DBED000uLL
          && v42 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v102 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v102 )
          {
            v103 = *(_QWORD *)(v102 + 8 * ((v42 >> 3) & 0x1FF));
            v104 = v45 | 0x20;
            if ( (v103 & 0x20) == 0 )
              v104 = *(_QWORD *)v42;
            v45 = v104;
            if ( (v103 & 0x42) != 0 )
              v45 = v104 | 0x42;
          }
        }
        WsleContents = HIBYTE(v45) & 0xF | (16 * ((v45 >> 60) & 7));
        v41 = (*(_QWORD *)(v44 + 40) & 0x200000000000000LL) == 0;
        if ( (HIBYTE(v45) & 0xF) == 8 )
        {
          MiUnlockWsle(v117, v118, v44);
          WsleContents = MiGetWsleContents(v105, v118);
          v26 = 0xFFFFF6FB7DBED000uLL;
        }
        v48 = ZeroPte;
        v49 = *(_QWORD *)v42;
        v50 = 0xFFFFF6FB7DBED000uLL;
        if ( v42 >= 0xFFFFF6FB7DBED000uLL )
        {
          v50 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v42 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v49) )
              v49 |= 0x20uLL;
          }
        }
        if ( (MiFlags & 0x800) != 0 )
        {
          v49 = 32LL;
        }
        else if ( (MiFlags & 0x4000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v49 & 0x20) == 0 )
        {
          MI_INTERLOCKED_EXCHANGE_PTE(v42, v48);
          goto LABEL_58;
        }
        if ( v42 >= v26 && v42 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v50, v49) )
          {
            if ( !HIBYTE(word_14043B26C) && (v48 & 1) != 0 )
              v48 |= 0x8000000000000000uLL;
            *(_QWORD *)v42 = v48;
            MiWritePteShadow(v42);
            goto LABEL_58;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v48 & 1) != 0 )
          {
            v48 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v42 = v48;
        goto LABEL_58;
      }
      v46 = 0;
      WsleContents = (*(_BYTE *)v44 >> 1) & 7;
      if ( !(unsigned int)MiEvictPageTableLock(v117, v42, ZeroPte, 0LL) )
      {
        v21 = v118;
        goto LABEL_62;
      }
LABEL_58:
      v51 = WsleContents;
      v21 = v118;
      MiRemoveWsle(v117, v118, 1, v51, 10, v41);
      if ( v46 )
      {
        v52 = ((v118 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v54 = *(_QWORD *)v52;
        if ( v52 >= 0xFFFFF6FB7DBED000uLL
          && v52 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v54 & 1) != 0
          && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
        {
          v106 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v106 )
          {
            v107 = *(_QWORD *)(v106 + 8 * ((v52 >> 3) & 0x1FF));
            v52 = v54 | 0x20;
            if ( (v107 & 0x20) == 0 )
              v52 = v54;
            v54 = v52;
            if ( (v107 & 0x42) != 0 )
              v54 = v52 | 0x42;
          }
        }
        v128 = v54;
        Process = (unsigned __int64)&v128;
        if ( (unsigned __int64)&v128 >= 0xFFFFF6FB7DBED000uLL )
        {
          Process = (unsigned __int64)&v128;
          if ( (unsigned __int64)&v128 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (v54 & 1) != 0 && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v52 = *(_QWORD *)(Process + 1544);
              if ( v52 )
              {
                v108 = *(_QWORD *)(v52 + 8 * (((unsigned __int64)&v128 >> 3) & 0x1FF));
                v52 = v54 | 0x20;
                Process = (unsigned __int8)v108;
                LOBYTE(Process) = v108 & 0x20;
                if ( (v108 & 0x20) == 0 )
                  v52 = v54;
                v54 = v52;
                if ( (v108 & 0x42) != 0 )
                  v54 = v52 | 0x42;
              }
            }
          }
        }
        v55 = (unsigned __int64 *)(48 * ((v54 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( ((*(_DWORD *)v55 >> 4) & 0x3FF) == 0 )
        {
          MiCountWslesInPageTable(Process, v118, v140, v31);
          LOBYTE(Process) = 8;
          while ( 1 )
          {
            LOBYTE(Process) = Process - 1;
            v52 = (unsigned int)v140[(unsigned __int8)Process];
            if ( (_DWORD)v52 )
              break;
            if ( !(_BYTE)Process )
              goto LABEL_62;
          }
          Process = *v55 & 0xFFFFFFFFFFFE000FuLL | (16 * (v52 & 0x3FF | ((Process & 7) << 10)));
          *v55 = Process;
        }
      }
LABEL_62:
      v56 = v136;
      v57 = 1LL;
      v58 = v21;
      if ( v135 != 1 && (v136 & 8) == 0 && v21 >= 0xFFFFF68000000000uLL && v21 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v56 = v136 | 8;
        LOBYTE(v136) = v136 | 8;
      }
      v59 = HIDWORD(v137);
      if ( HIDWORD(v137) )
      {
        v60 = v56 & 4;
        if ( !v60 )
        {
          v31 = (__int64)&Base[HIDWORD(v137) - 1];
          v61 = *(_QWORD *)v31;
          if ( (*(_QWORD *)v31 & 0xC00LL) == 0 )
          {
            v62 = Base[HIDWORD(v137) - 1] & 0x3FFLL;
            Process = v61 & 0xFFFFFFFFFFFFF000uLL;
            v52 = (v61 & 0xFFFFFFFFFFFFF000uLL) + ((v62 + 1) << 12);
            if ( v52 == v21 )
            {
              Process = v62 + 1;
              if ( v62 + 1 >= v62 && Process <= 0x3FF )
              {
                Process = ((unsigned __int16)v61 ^ (unsigned __int16)(v61 + 1)) & 0x3FF;
                ++v138;
                *(_QWORD *)v31 = Process ^ v61;
                goto LABEL_70;
              }
            }
          }
        }
        if ( !v60 )
        {
          v66 = Base[HIDWORD(v137) - 1];
          if ( (v66 & 0xC00) == 0 )
          {
            Process = v21 + 4096;
            v52 = v66 & 0xFFFFFFFFFFFFF000uLL;
            if ( (v66 & 0xFFFFFFFFFFFFF000uLL) == v21 + 4096 )
            {
              Process = Base[HIDWORD(v137) - 1] & 0x3FFLL;
              v52 = Process + 1;
              if ( Process + 1 >= Process && v52 <= 0x3FF )
              {
                v109 = v66 - 4096;
                Process = ((unsigned __int16)v109 ^ (unsigned __int16)(v109 + 1)) & 0x3FF;
                ++v138;
                Base[HIDWORD(v137) - 1] = Process ^ v109;
                goto LABEL_70;
              }
            }
          }
        }
      }
      if ( HIDWORD(v137) >= (unsigned int)v137 )
      {
        HIBYTE(v136) = 1;
      }
      else
      {
        while ( 1 )
        {
          v52 = (unsigned __int64)(v57 - 1) > 0x3FF ? 1024LL : v57;
          v67 = v58 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v52 - 1) & 0x3FF;
          v57 -= v52;
          v58 += v52 << 12;
          Process = v59;
          Base[v59] = v67;
          v138 += v52;
          v59 = HIDWORD(v137) + 1;
          HIDWORD(v137) = v59;
          if ( v59 == (_DWORD)v137 && (v136 & 4) == 0 )
          {
            qsort(Base, v59, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(&v135);
            v59 = HIDWORD(v137);
            if ( HIDWORD(v137) == (_DWORD)v137 )
              break;
          }
          if ( !v57 )
            goto LABEL_70;
        }
        if ( v57 )
        {
          HIBYTE(v136) = 1;
          v138 = HIDWORD(v137);
        }
      }
LABEL_70:
      v63 = v27 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v129 = v63;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(Process, v52) )
        {
          *(_QWORD *)v20 = v63;
          MiWritePteShadow(v20);
          goto LABEL_72;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v129 & 1) != 0 )
        {
          v63 = v129 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v20 = v63;
LABEL_72:
      if ( HIDWORD(v137) == (_DWORD)v137 - 1 )
        MiDeletePteList((__int64)&v135, a3, v14, (__int64)a6);
LABEL_74:
      v8 = v125;
LABEL_37:
      v20 += 8LL;
      if ( (v20 & 0x78) == 0 )
      {
        v64 = v117;
        v65 = (*(_BYTE *)(v117 + 184) & 7) == 2 ? &dword_14043C7C0 : (LONG *)(v117 + 192);
        if ( (*v65 & 0x40000000) != 0 )
        {
LABEL_143:
          if ( HIDWORD(v137) )
            MiDeletePteList((__int64)&v135, a3, v14, (__int64)a6);
          if ( v120 )
          {
            MiUnlockPageTableInternal(v64, v120);
            v120 = 0LL;
          }
          MiUnlockWorkingSetShared(v64, v124);
          v116 = 1;
          MiLockWorkingSetShared(v64);
          goto LABEL_43;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v39 = 0LL;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v96 = 2;
        }
        else
        {
          if ( !CurrentPrcb->QuantumEnd )
          {
            NextThread = CurrentPrcb->NextThread;
            if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
            {
              v96 = 4;
              goto LABEL_139;
            }
LABEL_42:
            if ( DpcWatchdogCount <= 7 )
            {
LABEL_43:
              v21 += 4096LL;
              v118 = v21;
              goto LABEL_44;
            }
            if ( !(_DWORD)v39 )
            {
LABEL_158:
              _disable();
              CurrentPrcb->DpcWatchdogCount = 0;
              CurrentPrcb->DpcTimeCount = 0;
              KiResetGlobalDpcWatchdogProfiler(CurrentPrcb, DpcRequestSummary, v39, v31);
              _enable();
              v96 = 0;
              goto LABEL_139;
            }
LABEL_309:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v96 = 5;
              goto LABEL_139;
            }
            if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
            {
              v96 = 6;
              goto LABEL_139;
            }
            goto LABEL_158;
          }
          v96 = 3;
        }
LABEL_139:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v96, DpcWatchdogCount, DpcTimeCount);
        if ( v96 )
        {
          v64 = v117;
          goto LABEL_143;
        }
        goto LABEL_43;
      }
      v39 = 1LL;
      if ( DpcTimeCount <= 7 )
        goto LABEL_42;
      if ( CurrentPrcb->QuantumEnd )
      {
        v96 = 1;
        goto LABEL_139;
      }
      goto LABEL_309;
    }
    if ( (v27 & 0x400) != 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v27, v22, v10) )
      {
        v111 = MiDecrementCombinedPte(v19, v110);
LABEL_272:
        if ( v111 == 3 )
        {
          ++a6[1];
        }
        else if ( v111 == 5 )
        {
          ++a6[2];
        }
      }
      else if ( !MiIsPrototypePteVadLookup(v27) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v112);
        if ( CloneAddress )
        {
          v111 = MiDecrementCloneBlockReference(CloneAddress, v114);
          goto LABEL_272;
        }
      }
      if ( !MiPteInShadowRange(v20) )
        goto LABEL_121;
      if ( (unsigned int)MiPteHasShadow(v115, v81) )
      {
        if ( !HIBYTE(word_14043B26C) && (v14 & 1) != 0 )
          goto LABEL_280;
        goto LABEL_281;
      }
      goto LABEL_187;
    }
    if ( (v27 & 0x800) == 0 )
    {
      if ( ((v27 >> 5) & 0x1F) == 0x10 )
        ++a6[3];
      v28 = v27;
      if ( qword_14043B180 && (v27 & 0x10) == 0 )
        v28 = v27 & ~(_WORD)qword_14043B180;
      if ( (v28 & 0x400) != 0 || (v28 & 0x800) != 0 || (v28 & 4) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      v29 = *(unsigned __int16 *)(v19 + 174);
      v30 = 1;
      v31 = v14;
      v32 = *(struct _KEVENT **)(qword_14043B808 + 8 * v29);
      v123 = v32;
      v33 = (v27 >> 1) & 1;
      if ( ((v27 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v32, &v129) )
      {
        v30 = 0;
        v76 = *(_QWORD *)(v75 + 8LL * ((unsigned __int16)v27 >> 12) + 7136);
        v122 = v14;
        MiSetNonResidentPteHeat(&v122, 0LL);
        v31 = v122;
        if ( (v14 & 0x400) == 0 )
        {
          v31 = v122 & 0xFFFFFFFFFFFFFFF9uLL;
          v122 &= 0xFFFFFFFFFFFFFFF9uLL;
        }
        if ( v76 )
        {
          if ( v31 )
            updated = MiUpdatePageFileHighInPte(v31, v77);
          else
            updated = MiSwizzleInvalidPte(v77 << 32);
          v31 = updated ^ (unsigned __int16)(updated ^ (v79 << 12)) & 0xF000 | 2;
          v122 = v31;
        }
      }
      if ( v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v29, v22) )
        {
          if ( !HIBYTE(word_14043B26C) && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *(_QWORD *)v20 = v31;
          MiWritePteShadow(v20);
          goto LABEL_31;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v31 & 1) != 0 )
        {
          v31 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v20 = v31;
LABEL_31:
      v130 = v27;
      if ( (v27 & 4) != 0 )
      {
        v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130);
        if ( !v30 )
          v34 &= ~2uLL;
      }
      else if ( v30 && (_DWORD)v33 )
      {
        v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v130);
      }
      else
      {
        v34 = 0LL;
      }
      v130 = v34;
      if ( v34 )
        MiReleasePageFileInfo(v123, v34, 0);
      goto LABEL_37;
    }
    v83 = v16;
    v131[0] = v16;
    v84 = MiLockTransitionLeafPage(v20);
    v85 = v84;
    if ( v84 )
    {
      v86 = 0LL;
      v87 = 1;
      if ( !*(_WORD *)(v84 + 32) )
      {
        v83 = *(_QWORD *)(v84 + 16);
        v88 = *(_QWORD *)(v84 + 40);
        v86 = v83;
        v131[0] = v83;
        v89 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v88 >> 40) & 0x3FF));
        v123 = v89;
        if ( (v83 & 2) != 0 )
          v87 = MI_IS_PTE_IN_WS_SWAP_SET(v89, v131) != 0;
      }
      v90 = v86;
      if ( (unsigned int)MiDeleteTransitionPte(v20, v85) == 3 )
        ++a6[1];
      if ( v86 )
      {
        v91 = v83;
        v92 = v123;
        MiReleasePageFileSpace(v123, v91, v87);
        v90 = v86;
      }
      else
      {
        v92 = v123;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( !v87 )
      {
        v93 = *((_QWORD *)&v92[297].Header.WaitListHead.Flink + ((unsigned __int16)v90 >> 12));
        if ( qword_14043B180 && (v90 & 0x10) == 0 )
          v90 &= ~qword_14043B180;
        MiTransferSoftwarePte(v14, v93, HIDWORD(v90), 2LL);
      }
      if ( MiPteInShadowRange(v20) )
      {
        if ( !(unsigned int)MiPteHasShadow(v95, v94) )
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v94 & 1) != 0 )
          {
            v94 |= 0x8000000000000000uLL;
          }
          goto LABEL_136;
        }
        if ( !HIBYTE(word_14043B26C) && (v94 & 1) != 0 )
          v94 |= 0x8000000000000000uLL;
        *(_QWORD *)v20 = v94;
        MiWritePteShadow(v20);
      }
      else
      {
LABEL_136:
        *(_QWORD *)v20 = v94;
      }
      v21 = v118;
      goto LABEL_74;
    }
LABEL_44:
    v19 = v117;
    v18 = v120;
    if ( v20 > v8 )
      goto LABEL_102;
    v22 = v116;
    v16 = 0LL;
    v12 = a3;
    v10 = a6;
  }
  v19 = v117;
  v18 = v120;
  a6[3] = ((__int64)(v8 - v20) >> 3) + v72 + 1;
LABEL_103:
  if ( HIDWORD(v137) )
    MiDeletePteList((__int64)&v135, a3, v14, v22);
  if ( v18 )
    MiUnlockPageTableInternal(v19, v18);
  return MiUnlockWorkingSetShared(v19, v124);
}
