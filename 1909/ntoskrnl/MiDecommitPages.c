/*
 * XREFs of MiDecommitPages @ 0x1400577E0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140167834 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1406083A0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiDeleteTransitionPte @ 0x14002EEF0 (MiDeleteTransitionPte.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiTerminateWsle @ 0x14004B1E0 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14005B160 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiDeletePteWsleCluster @ 0x14012F8B0 (MiDeletePteWsleCluster.c)
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiDecommitLargePte @ 0x1402C9784 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x1402E36E4 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032DE0C (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r13
  __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r12
  int v25; // r8d
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rcx
  LONG *v28; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v32; // eax
  signed __int32 v33; // eax
  _DWORD *v34; // rdx
  int v35; // eax
  ULONG_PTR v36; // rdi
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int16 *AnyMultiplexedVm; // rbx
  int v43; // eax
  unsigned __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 UsedPtesHandle; // rax
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r11
  __int64 v57; // r14
  LONG *v58; // rax
  volatile int v59; // r8d
  unsigned int v60; // edi
  unsigned int v61; // r14d
  int v62; // edx
  unsigned int v63; // ebx
  unsigned __int64 Process; // rcx
  __int64 *v65; // r8
  unsigned __int64 v66; // r11
  __int64 v67; // rdx
  unsigned __int64 v68; // r10
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  char v72; // r8^7
  unsigned __int64 *v73; // r8
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r8
  unsigned __int64 v79; // r8
  char v80; // r14
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  char v87; // di
  __int64 v88; // rcx
  unsigned __int64 v89; // rbx
  __int64 v90; // r9
  int v91; // eax
  __int64 v92; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  bool v97; // zf
  bool v98; // zf
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r8
  ULONG_PTR v102; // r10
  __int64 v103; // rbx
  BOOL v104; // r14d
  unsigned __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int16 v111; // ax
  int v112; // edi
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // rcx
  __int64 v115; // r10
  __int64 v116; // r11
  __int64 v117; // r10
  __int64 v118; // r8
  __int64 v119; // r10
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  unsigned __int64 v123; // rdx
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  __int16 v126; // dx
  __int64 v127; // rax
  _KTHREAD *v128; // rax
  __int64 v129; // rbx
  __int64 v131; // [rsp+30h] [rbp-B68h]
  __int64 v132; // [rsp+38h] [rbp-B60h]
  int v133; // [rsp+40h] [rbp-B58h]
  unsigned int v135; // [rsp+50h] [rbp-B48h]
  __int64 v136; // [rsp+58h] [rbp-B40h]
  __int64 v137; // [rsp+60h] [rbp-B38h] BYREF
  unsigned __int64 v138; // [rsp+68h] [rbp-B30h]
  __int64 v139; // [rsp+70h] [rbp-B28h]
  __int64 v140; // [rsp+78h] [rbp-B20h]
  int v141; // [rsp+80h] [rbp-B18h]
  __int64 v142; // [rsp+88h] [rbp-B10h]
  unsigned __int64 v143; // [rsp+90h] [rbp-B08h]
  unsigned __int64 v144; // [rsp+98h] [rbp-B00h]
  int v145; // [rsp+A0h] [rbp-AF8h]
  unsigned __int64 v146; // [rsp+A8h] [rbp-AF0h]
  unsigned __int64 v147; // [rsp+B0h] [rbp-AE8h] BYREF
  __int64 v148; // [rsp+B8h] [rbp-AE0h]
  unsigned __int64 v149; // [rsp+C0h] [rbp-AD8h] BYREF
  unsigned __int64 v150; // [rsp+C8h] [rbp-AD0h] BYREF
  __int64 v151; // [rsp+D0h] [rbp-AC8h] BYREF
  unsigned __int64 v152; // [rsp+D8h] [rbp-AC0h]
  __int64 v153; // [rsp+E0h] [rbp-AB8h]
  __int64 v154; // [rsp+E8h] [rbp-AB0h]
  __int64 v155; // [rsp+F0h] [rbp-AA8h] BYREF
  int v156; // [rsp+F8h] [rbp-AA0h] BYREF
  _QWORD v157[22]; // [rsp+100h] [rbp-A98h] BYREF
  int v158; // [rsp+1B0h] [rbp-9E8h] BYREF
  __int16 v159; // [rsp+1B4h] [rbp-9E4h]
  __int16 v160; // [rsp+1B6h] [rbp-9E2h]
  __int64 v161; // [rsp+1B8h] [rbp-9E0h]
  __int64 v162; // [rsp+1C0h] [rbp-9D8h]
  __int64 v163; // [rsp+1C8h] [rbp-9D0h]
  _BYTE v164[152]; // [rsp+1D0h] [rbp-9C8h] BYREF
  _QWORD v165[24]; // [rsp+270h] [rbp-928h] BYREF
  int v166; // [rsp+330h] [rbp-868h] BYREF
  __int16 v167; // [rsp+334h] [rbp-864h]
  __int16 v168; // [rsp+336h] [rbp-862h]
  __int64 v169; // [rsp+338h] [rbp-860h]
  __int64 v170; // [rsp+340h] [rbp-858h]
  __int64 v171; // [rsp+348h] [rbp-850h]
  _BYTE v172[2040]; // [rsp+350h] [rbp-848h] BYREF

  v6 = a6;
  v144 = a2;
  v154 = (__int64)a6;
  v168 = 0;
  v148 = a4;
  memset(v172, 0, sizeof(v172));
  v10 = 0LL;
  v140 = 256LL;
  v11 = 1LL;
  v137 = 0LL;
  v12 = 512LL;
  v138 = 0LL;
  v139 = 0LL;
  v169 = 256LL;
  v166 = 1;
  v167 = 0;
  v170 = 0LL;
  v171 = 0LL;
  v132 = 1LL;
  v141 = 0;
  if ( qword_140465800 )
  {
    if ( (qword_140465800 & 0x200) != 0 )
      v12 = 528LL;
    else
      v12 = qword_140465800 | 0x200;
  }
  v13 = *(unsigned int *)(a4 + 52);
  v14 = 0xFFFFFFFFFLL;
  v15 = 0xFFFFF68000000000uLL;
  if ( (v13 & 0xFFFFFFFF7FFFFFFFuLL | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    v12 = MiSwizzleInvalidPte((*(_DWORD *)(a4 + 48) >> 2) & 0x3E0, v13, 0xFFFFFFFFFLL, 0xFFFFF68000000000uLL);
LABEL_8:
    v146 = v15 + 8 * (v14 & (*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)));
    goto LABEL_10;
  }
  if ( (int)v13 < 0 )
    goto LABEL_8;
  v146 = 0LL;
  v141 = MiVadPureReserve(a4);
LABEL_10:
  v16 = *(unsigned int *)(a4 + 48);
  v17 = *(_DWORD *)(a4 + 48) & 0x500000;
  v153 = v11;
  v135 = 3;
  if ( v17 == 5242880 )
  {
    v18 = (v16 >> 18) & 3;
    v11 = 16LL;
    v132 = MiVadPageSizes[v18];
    if ( v132 != 16 )
      v11 = 1LL;
    v135 = MiVadPageIndices[v18];
    v153 = v11;
    LODWORD(v11) = 1;
    v15 = 0xFFFFF68000000000uLL;
  }
  v19 = 2;
  v136 = v10;
  if ( a5 != (_DWORD)v10 )
    v19 = v10;
  v145 = v19;
  v20 = v10;
  v21 = *(unsigned __int16 *)(a3 + 1454);
  v22 = a3 + 1280;
  v23 = v15 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v133 = v11;
  v24 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v25 = v11;
  v131 = v22;
  v26 = *(_BYTE *)(v22 + 184) & 7;
  v142 = *(_QWORD *)(qword_140465E88 + 8 * v21);
  if ( v26 < 6u )
  {
    if ( v26 == 2 )
      v28 = &dword_140466F00;
    else
      v28 = (LONG *)(v22 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v28, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[5];
          SchedulerAssist[5] = v32 + 1;
          if ( v32 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v28);
      v33 = *v28 & 0x7FFFFFFF;
      v27 = (unsigned int)(v33 + 1);
      if ( v33 != _InterlockedCompareExchange(v28, v27, v33) )
      {
        v34 = CurrentPrcb->SchedulerAssist;
        if ( v34 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v34[5] - 1;
            v34[5] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v28, CurrentIrql);
      }
    }
    v10 = 0LL;
    if ( v28[1] )
      _InterlockedExchange(v28 + 1, 0);
    v25 = v133;
    LODWORD(v11) = 1;
    v22 = v131;
    LOBYTE(v143) = CurrentIrql;
    v20 = v136;
    v15 = 0xFFFFF68000000000uLL;
  }
  else
  {
    v27 = KeGetCurrentIrql();
    v143 = v27;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v27 < 2u )
    {
      v27 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
      _InterlockedOr((volatile signed __int32 *)v27, 0x10000u);
    }
  }
  if ( v23 > v144 )
    goto LABEL_299;
  while ( 2 )
  {
    v36 = v23;
    v37 = v10;
    if ( v25 == 1 )
    {
      v37 = v11;
LABEL_46:
      v38 = 0x7FFFFFFFF8LL;
      goto LABEL_47;
    }
    v27 = v135;
    if ( v135 > 1 )
      goto LABEL_46;
    v38 = 0x7FFFFFFFF8LL;
    v27 = 2 - v135;
    do
    {
      v36 = v15 + ((v36 >> 9) & 0x7FFFFFFFF8LL);
      --v27;
    }
    while ( v27 );
LABEL_47:
    if ( (v36 & 0xFFF) == 0 )
      v37 = v11;
    if ( v37 )
    {
      memset(v165, 0, 0xB8uLL);
      if ( v138 )
      {
        WORD2(v165[0]) = 0;
        LODWORD(v165[0]) = 1;
        v165[2] = 0LL;
        LODWORD(v165[1]) = 20;
        v165[3] = 0LL;
        MiInsertTbFlushEntry(v165, (__int64)(v138 << 25) >> 16, v139);
        MiTerminateWsleCluster((__int64)&v137);
        v39 = a3;
        MiDeletePteList((__int64)v165, a3, v12, v6, 0);
      }
      else
      {
        v39 = a3;
      }
      if ( HIDWORD(v169) )
        MiDeletePteList((__int64)&v166, v39, v12, v6, 1);
      if ( v20 )
      {
        MiUnlockPageTableInternal(v22);
        v136 = 0LL;
      }
      if ( v141 )
      {
        v151 = 0LL;
        v152 = 0LL;
        memset((char *)v157 + 2, 0, 0xA6uLL);
        v40 = (__int64)(v144 << 25) >> 16;
        LOWORD(v157[0]) = 2145;
        LeafVa = MiGetLeafVa((__int64)(v23 << 25) >> 16);
        if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_1404672B0 && LeafVa <= qword_140465BE0 )
          AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
        else
          AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
        v43 = MiFastLockLeafPageTable(AnyMultiplexedVm, (__int64)(v23 << 25) >> 16, 0LL);
        if ( v43 )
        {
          v27 = (unsigned int)(v43 - 1);
          LODWORD(v151) = v43 - 1;
          v44 = (((unsigned __int64)((__int64)(v23 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v152 = v44;
        }
        else
        {
          LOWORD(v157[0]) |= 4u;
          v157[20] = &v151;
          v157[1] = 0LL;
          v157[2] = AnyMultiplexedVm;
          BYTE2(v157[0]) = BYTE2(v157[0]) & 0xE3 | 4;
          v157[19] = MiGetNextPageTableTail;
          BYTE6(v157[0]) = v143;
          v157[3] = (__int64)(v23 << 25) >> 16;
          v157[4] = v40;
          MiWalkPageTables((__int16 *)v157);
          v27 = (unsigned int)v151;
          v44 = v152;
        }
        v45 = v6[3];
        if ( !v44 )
        {
          v6[3] = v45 + ((__int64)(v144 - v23) >> 3) + 1;
          break;
        }
        v36 = v44;
        v46 = v44 - v23;
        v23 = v44;
        v6[3] = v45 + (v46 >> 3);
        if ( (_DWORD)v27 )
        {
          v36 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( (unsigned int)v27 > 1 )
          {
            v27 = (unsigned int)(v27 - 1);
            do
            {
              v36 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v27;
            }
            while ( v27 );
          }
        }
        v24 = (__int64)(v44 << 25) >> 16;
      }
      else
      {
        v36 = v23;
        if ( v135 <= 1 )
        {
          v47 = 2 - v135;
          do
          {
            v36 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v47;
          }
          while ( v47 );
          v6 = (_QWORD *)v154;
        }
        MiMakeSystemAddressValid(v36, 0LL, (*(_DWORD *)(v148 + 48) >> 12) & 0x3F, v143, v145);
      }
      v15 = 0xFFFFF68000000000uLL;
      v38 = 0x7FFFFFFFF8LL;
      v20 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = 0LL;
      v136 = v20;
      v133 = 0;
      LODWORD(v11) = 1;
    }
    v48 = *(_QWORD *)v36;
    if ( v36 >= 0xFFFFF6FB7DBED000uLL
      && v36 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v27)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v50 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v36 >> 3) & 0x1FF));
        v51 = v48 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v51 = v48;
        v48 = v51;
        if ( (v50 & 0x42) != 0 )
          v48 = v51 | 0x42;
      }
    }
    v150 = v48;
    if ( v48 )
    {
      if ( (v48 & 1) != 0 )
      {
        if ( v132 != 1 )
        {
LABEL_110:
          MiDecommitLargePte(v148, v36, v12, (_DWORD)v6, (__int64)&v166);
LABEL_111:
          v57 = v131;
LABEL_112:
          v53 = v132;
          goto LABEL_113;
        }
        Process = v24 >> 9;
        v65 = (__int64 *)(v15 + ((v24 >> 9) & v38));
        v66 = 0xFFFFF6FB7DBED000uLL;
        v67 = *v65;
        v68 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v65 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v65 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process)
          && (v67 & 1) != 0
          && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v70 = *(_QWORD *)(Process + 1544);
          if ( v70 )
          {
            v71 = *(_QWORD *)(v70 + 8 * ((v69 >> 3) & 0x1FF));
            v72 = HIBYTE(v67);
            Process = (unsigned __int8)v71;
            LOBYTE(Process) = v71 & 0x20;
            if ( (v71 & 0x20) == 0 )
              v72 = HIBYTE(v67);
            HIBYTE(v67) = v72;
            if ( (v71 & 0x42) != 0 )
              HIBYTE(v67) = v72;
          }
        }
        if ( (HIBYTE(v67) & 0xF) != 8 )
        {
          v73 = (unsigned __int64 *)(v15
                                   + (((unsigned __int64)((__int64)((v23 << 25) - (v15 << 25)) >> 16) >> 9) & 0x7FFFFFFFF8LL));
          v74 = *v73;
          if ( (unsigned __int64)v73 >= v66
            && (unsigned __int64)v73 <= v68
            && (unsigned int)MiPteHasShadow(Process)
            && (v74 & 1) != 0
            && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v76 = *(_QWORD *)(Process + 1544);
            if ( v76 )
            {
              v77 = *(_QWORD *)(v76 + 8 * ((v75 >> 3) & 0x1FF));
              v78 = v74 | 0x20;
              Process = (unsigned __int8)v77;
              LOBYTE(Process) = v77 & 0x20;
              if ( (v77 & 0x20) == 0 )
                v78 = v74;
              v74 = v78;
              if ( (v77 & 0x42) != 0 )
                v74 = v78 | 0x42;
            }
          }
          v79 = *(_QWORD *)v23;
          v80 = HIBYTE(v74) & 0xF | (16 * ((v74 >> 60) & 7));
          if ( v23 >= v66
            && v23 <= v68
            && (unsigned int)MiPteHasShadow(Process)
            && (v79 & 1) != 0
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
          {
            v81 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v81 )
            {
              v82 = *(_QWORD *)(v81 + 8 * ((v23 >> 3) & 0x1FF));
              v83 = v79 | 0x20;
              if ( (v82 & 0x20) == 0 )
                v83 = v79;
              v79 = v83;
              if ( (v82 & 0x42) != 0 )
                v79 = v83 | 0x42;
            }
          }
          v147 = v79;
          if ( (unsigned __int64)&v147 >= v66
            && (unsigned __int64)&v147 <= v68
            && (unsigned int)MiPteHasShadow(&v147)
            && (v79 & 1) != 0
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
          {
            v84 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v84 )
            {
              v85 = *(_QWORD *)(v84 + 8 * (((unsigned __int64)&v147 >> 3) & 0x1FF));
              v86 = v79 | 0x20;
              if ( (v85 & 0x20) == 0 )
                v86 = v79;
              v79 = v86;
              if ( (v85 & 0x42) != 0 )
                v79 = v86 | 0x42;
            }
          }
          v87 = (*(_QWORD *)(48 * ((v79 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0;
          if ( !v138 )
            goto LABEL_173;
          if ( v23 == v138 + 8 * v139 && v80 == BYTE2(v140) && v87 == (_BYTE)v140 )
          {
            ++v139;
            goto LABEL_179;
          }
          if ( !BYTE1(v140) )
          {
            MiTerminateWsleCluster((__int64)&v137);
LABEL_173:
            v137 = v131;
            v139 = 1LL;
            v138 = v23;
            LOBYTE(v140) = v87;
            BYTE2(v140) = v80;
            goto LABEL_179;
          }
        }
        MiTerminateWsle(v131, v24, 0, &v156);
        MiInsertTbFlushEntry(&v166, v24, 1LL);
        v89 = v48 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v150 = v89;
        if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v88) )
        {
          *(_QWORD *)v23 = v89;
          MiWritePteShadow(v23, v89);
        }
        else
        {
          *(_QWORD *)v23 = v89;
        }
LABEL_179:
        if ( HIDWORD(v169) == (_DWORD)v169 - 1 )
        {
          MiDeletePteWsleCluster(&v137, a3, v12, v6);
          MiDeletePteList((__int64)&v166, a3, v12, v6, 1);
        }
        goto LABEL_111;
      }
      if ( (v48 & 0x400) != 0 )
      {
        if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v48) )
        {
          v91 = MiDecrementCombinedPte(v131, v90);
        }
        else
        {
          if ( (unsigned int)MiIsPrototypePteVadLookup(v48) || (CloneAddress = MiLocateCloneAddress(a3, v92)) == 0 )
          {
LABEL_191:
            if ( MiPteInShadowRange(v23) )
            {
              if ( (unsigned int)MiPteHasShadow(v96) )
              {
                if ( !HIBYTE(word_1404658EC) )
                {
                  v97 = (v12 & 1) == 0;
                  goto LABEL_217;
                }
                goto LABEL_219;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                v98 = (v12 & 1) == 0;
                goto LABEL_222;
              }
            }
            goto LABEL_224;
          }
          v91 = MiDecrementCloneBlockReference(CloneAddress, v94);
        }
        if ( v91 == 3 )
        {
          ++v6[1];
        }
        else if ( v91 == 5 )
        {
          ++v6[2];
        }
        goto LABEL_191;
      }
      if ( (v48 & 0x800) != 0 )
      {
        if ( v132 != 1 )
          goto LABEL_110;
        v155 = v10;
        v99 = v10;
        v100 = MiLockTransitionLeafPage(v23);
        v102 = v100;
        if ( !v100 )
          goto LABEL_296;
        v103 = 0LL;
        v104 = 1;
        if ( !*(_WORD *)(v100 + 32) )
        {
          v99 = *(_QWORD *)(v100 + 16);
          v105 = *(_QWORD *)(v100 + 40);
          v103 = v99;
          v155 = v99;
          v106 = *(_QWORD *)(qword_140465E88 + 8 * ((v105 >> 40) & 0x3FF));
          v142 = v106;
          if ( (v99 & 2) != 0 )
            v104 = MI_IS_PTE_IN_WS_SWAP_SET(v106, &v155) != 0;
        }
        LOBYTE(v101) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v23, v102, v101, 0) == 3 )
          ++v6[1];
        if ( v103 )
        {
          v107 = v99;
          v108 = v142;
          MiReleasePageFileSpace(v142, v107, v104);
        }
        else
        {
          v108 = v142;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 928), 0xFFFFFFFFFFFFFFFFuLL);
        if ( !v104 )
        {
          v109 = *(_QWORD *)(v108 + 8LL * ((unsigned __int16)v103 >> 12) + 7904);
          if ( qword_140465800 && (v103 & 0x10) == 0 )
            v103 &= ~qword_140465800;
          MiTransferSoftwarePte(v12, v109, HIDWORD(v103), 2LL);
        }
        if ( MiPteInShadowRange(v23) )
        {
          if ( (unsigned int)MiPteHasShadow(v110) )
          {
            if ( !HIBYTE(word_1404658EC) )
            {
              v97 = (v95 & 1) == 0;
LABEL_217:
              if ( !v97 )
                v95 |= 0x8000000000000000uLL;
            }
LABEL_219:
            *(_QWORD *)v23 = v95;
            MiWritePteShadow(v23, v95);
            goto LABEL_111;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v98 = (v95 & 1) == 0;
LABEL_222:
            if ( !v98 )
              v95 |= 0x8000000000000000uLL;
          }
        }
LABEL_224:
        *(_QWORD *)v23 = v95;
        goto LABEL_111;
      }
      if ( ((v48 >> 5) & 0x1F) == 0x10 )
      {
        v53 = v132;
        v6[3] += v132;
        v57 = v131;
        goto LABEL_113;
      }
      v111 = v48;
      if ( qword_140465800 && (v48 & 0x10) == 0 )
        v111 = v48 & ~(_WORD)qword_140465800;
      if ( (v111 & 0x400) != 0 || (v111 & 0x800) != 0 || (v111 & 4) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 928), 0xFFFFFFFFFFFFFFFFuLL);
      v57 = v131;
      v112 = v11;
      v113 = v12;
      v114 = *(unsigned __int16 *)(v131 + 174);
      v115 = *(_QWORD *)(qword_140465E88 + 8 * v114);
      v142 = v115;
      v116 = (v48 >> 1) & 1;
      if ( ((v48 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v115, &v150) )
      {
        v118 = qword_140465800;
        v112 = 0;
        v119 = *(_QWORD *)(v117 + 8LL * ((unsigned __int16)v48 >> 12) + 7904);
        v120 = v48;
        if ( qword_140465800 && (v48 & 0x10) == 0 )
          v120 = v48 & ~qword_140465800;
        v121 = HIDWORD(v120);
        v122 = -9LL;
        if ( (v12 & 0x400) != 0 )
          v122 = -2049LL;
        v123 = v12 & v122;
        v114 = v12 & 0x400;
        v113 = v123 & 0xFFFFFFFFFFFFFFF9uLL;
        if ( (v12 & 0x400) != 0 )
          v113 = v123;
        if ( v119 )
        {
          if ( v113 )
          {
            if ( qword_140465800 )
            {
              if ( (v113 & 0x10) != 0 )
              {
                v113 &= ~0x10uLL;
              }
              else
              {
                v118 = ~qword_140465800;
                v113 &= ~qword_140465800;
              }
            }
            v124 = (unsigned int)v113 | (v121 << 32);
          }
          else
          {
            v124 = v121 << 32;
          }
          v125 = MiSwizzleInvalidPte(v124, *(unsigned __int16 *)(v119 + 204), v118, v113);
          v113 = (unsigned __int16)(v125 ^ (v126 << 12)) & 0xF000 ^ (unsigned __int64)v125 | 2;
        }
      }
      if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(v114) )
        {
          if ( !HIBYTE(word_1404658EC) && (v113 & 1) != 0 )
            v113 |= 0x8000000000000000uLL;
          *(_QWORD *)v23 = v113;
          MiWritePteShadow(v23, v113);
          goto LABEL_263;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v113 & 1) != 0 )
        {
          v113 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v23 = v113;
LABEL_263:
      v149 = v48;
      if ( (v48 & 4) != 0 )
      {
        v127 = MI_READ_PTE_LOCK_FREE(&v149);
        if ( !v112 )
          v127 &= ~2uLL;
      }
      else if ( v112 && (_DWORD)v116 )
      {
        v127 = MI_READ_PTE_LOCK_FREE(&v149);
      }
      else
      {
        v127 = 0LL;
      }
      v149 = v127;
      if ( v127 )
        MiReleasePageFileInfo(v142, v127, 0LL);
      goto LABEL_112;
    }
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v36 << 25) - (v15 << 25)) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v153);
    v53 = v132;
    if ( v23 > v146 )
      v6[3] += v132;
    do
    {
      if ( !MiPteInShadowRange(v36) )
        goto LABEL_105;
      if ( !(unsigned int)MiPteHasShadow(v55) )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v12 & 1) != 0 )
        {
          v54 |= 0x8000000000000000uLL;
        }
LABEL_105:
        *(_QWORD *)v36 = v54;
        goto LABEL_106;
      }
      if ( !HIBYTE(word_1404658EC) && (v12 & 1) != 0 )
        v54 |= 0x8000000000000000uLL;
      *(_QWORD *)v36 = v54;
      MiWritePteShadow(v36, v54);
LABEL_106:
      v36 += 8LL;
    }
    while ( v56 != 1 );
    v6 = (_QWORD *)v154;
    v57 = v131;
LABEL_113:
    v23 += 8 * v53;
    if ( (v23 & 0x78) == 0 )
    {
      v58 = &dword_140466F00;
      if ( (*(_BYTE *)(v57 + 184) & 7) != 2 )
        v58 = (LONG *)(v57 + 192);
      if ( (*v58 & 0x40000000) != 0 )
      {
LABEL_290:
        MiDeletePteWsleCluster(&v137, a3, v12, v6);
        if ( HIDWORD(v169) )
          MiDeletePteList((__int64)&v166, a3, v12, v6, 1);
        if ( v136 )
        {
          MiUnlockPageTableInternal(v57);
          v136 = 0LL;
        }
        MiUnlockWorkingSetShared(v57, (unsigned __int8)v143);
        v133 = 1;
        MiLockWorkingSetShared(v57);
        goto LABEL_295;
      }
    }
    v27 = (unsigned __int64)KeGetCurrentPrcb();
    v59 = *(_DWORD *)(v27 + 11884);
    v60 = *(_DWORD *)(v27 + 22764);
    v61 = *(_DWORD *)(v27 + 23452);
    if ( (v59 & 1) == 0 )
    {
      v62 = 0;
      if ( (v59 & 0x1E) != 0 )
      {
        v63 = 2;
        goto LABEL_286;
      }
      if ( *(_BYTE *)(v27 + 11881) )
      {
        v63 = 3;
        goto LABEL_286;
      }
      v128 = *(_KTHREAD **)(v27 + 16);
      if ( v128 && v128 != *(_KTHREAD **)(v27 + 8) )
      {
        v63 = 4;
        goto LABEL_286;
      }
LABEL_279:
      if ( v60 > 7 )
      {
        if ( v62 )
          goto LABEL_281;
        goto LABEL_285;
      }
      goto LABEL_295;
    }
    v62 = 1;
    if ( v61 <= 7 )
      goto LABEL_279;
    if ( *(_BYTE *)(v27 + 11881) )
    {
      v63 = 1;
      goto LABEL_286;
    }
LABEL_281:
    if ( (v59 & 0x1E) != 0 )
    {
      v63 = 5;
      goto LABEL_286;
    }
    if ( *(_QWORD *)(v27 + 8) != *(_QWORD *)(v27 + 24) )
    {
      v63 = 6;
      goto LABEL_286;
    }
LABEL_285:
    _disable();
    v63 = 0;
    *(_DWORD *)(v27 + 22764) = 0;
    *(_DWORD *)(v27 + 23452) = 0;
    KiResetGlobalDpcWatchdogProfiler(v27);
    _enable();
LABEL_286:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v63, v60, v61);
    if ( v63 )
    {
      v57 = v131;
      goto LABEL_290;
    }
LABEL_295:
    v20 = v136;
    v24 += v132 << 12;
LABEL_296:
    if ( v23 <= v144 )
    {
      v25 = v133;
      v10 = 0LL;
      v22 = v131;
      v15 = 0xFFFFF68000000000uLL;
      LODWORD(v11) = 1;
      continue;
    }
    break;
  }
LABEL_299:
  v160 = 0;
  memset(v164, 0, sizeof(v164));
  if ( v138 )
  {
    v161 = 20LL;
    v159 = 0;
    v162 = 0LL;
    v163 = 0LL;
    v158 = 1;
    MiInsertTbFlushEntry(&v158, (__int64)(v138 << 25) >> 16, v139);
    MiTerminateWsleCluster((__int64)&v137);
    v129 = a3;
    MiDeletePteList((__int64)&v158, a3, v12, v6, 0);
  }
  else
  {
    v129 = a3;
  }
  if ( HIDWORD(v169) )
    MiDeletePteList((__int64)&v166, v129, v12, v6, 1);
  if ( v136 )
    MiUnlockPageTableInternal(v131);
  return MiUnlockWorkingSetShared(v131, (unsigned __int8)v143);
}
