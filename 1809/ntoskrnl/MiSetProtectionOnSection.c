/*
 * XREFs of MiSetProtectionOnSection @ 0x140071E70
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x14061EFB0 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406AF194 (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiSanitizePfnProtection @ 0x140074040 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiReturnFullProcessCharges @ 0x14007FF00 (MiReturnFullProcessCharges.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiSetProtectionOnTransitionPte @ 0x140093AF8 (MiSetProtectionOnTransitionPte.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x14010B164 (MiPteNeedsCommitCharge.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiMakeProtoLeafValid @ 0x14012743C (MiMakeProtoLeafValid.c)
 *     MiDecreaseUsedPtesCount @ 0x14012F27C (MiDecreaseUsedPtesCount.c)
 *     MiUnlockVa @ 0x14015E1A0 (MiUnlockVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiImageVadHotPatchEligible @ 0x1405EF758 (MiImageVadHotPatchEligible.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 *     MiGetImageHotPatchTableAddress @ 0x140856420 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  _DWORD *v9; // r15
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // r9
  unsigned int ProtectionMask; // eax
  ULONG_PTR v15; // r9
  unsigned int SessionId; // r12d
  unsigned int v17; // r8d
  __int64 result; // rax
  int v19; // ecx
  unsigned int v20; // eax
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // bl
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // rax
  int v31; // ecx
  int v32; // ebx
  __int64 *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  struct _KTHREAD *v36; // rdi
  unsigned __int8 v37; // si
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int8 v51; // al
  __int64 v52; // rcx
  LONG *v53; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v57; // eax
  signed __int32 v58; // ett
  _DWORD *v59; // rcx
  int v60; // eax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r9
  ULONG_PTR v63; // r12
  unsigned __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rdi
  unsigned int v67; // r12d
  _KPROCESS *Process; // r13
  unsigned __int64 v69; // r14
  int v70; // r15d
  int v71; // eax
  unsigned __int64 i; // rcx
  unsigned __int64 valid; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // eax
  ULONG_PTR v78; // rdi
  unsigned __int64 v79; // rbx
  ULONG_PTR v80; // r15
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // r12
  ULONG_PTR v88; // r13
  __int64 v89; // r14
  __int64 v90; // r9
  __int64 v91; // rbx
  __int64 CloneAddress; // rax
  __int64 v93; // rcx
  int v94; // edi
  unsigned __int64 v95; // r10
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // r8
  unsigned int v100; // ecx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // r9
  _KPROCESS *v105; // rcx
  signed int v106; // eax
  volatile signed __int64 *v107; // r10
  unsigned __int64 v108; // r11
  volatile signed __int64 v109; // rcx
  signed int v110; // r15d
  unsigned __int64 v111; // r8
  __int64 v112; // rax
  signed __int64 v113; // rax
  unsigned __int64 v114; // rdx
  signed __int64 v115; // rtt
  __int64 v116; // r8
  __int64 v117; // rdi
  __int64 v118; // rax
  int v119; // ecx
  __int64 v120; // rax
  unsigned int v121; // eax
  unsigned int v122; // eax
  int v123; // eax
  int v124; // eax
  unsigned __int64 v125; // r10
  __int64 v126; // r14
  unsigned __int64 v127; // rbx
  int v128; // eax
  unsigned __int64 LeafVa; // r9
  int v130; // eax
  unsigned __int64 v131; // r9
  unsigned __int64 v132; // r11
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rdx
  __int64 v135; // r11
  signed __int64 v136; // r11
  __int64 v137; // rax
  __int64 v138; // rdx
  unsigned __int64 v139; // r8
  __int64 v140; // rax
  __int64 v141; // r8
  unsigned __int64 v142; // r15
  __int64 v143; // rbx
  unsigned __int64 v144; // r14
  unsigned __int64 v145; // rax
  unsigned __int64 v146; // r10
  __int64 v147; // rax
  unsigned __int64 v148; // rcx
  unsigned __int64 v149; // rax
  struct _KEVENT *v150; // rbx
  char v151; // al
  unsigned __int64 v152; // rdi
  unsigned __int64 v153; // r14
  char v154; // bl
  unsigned __int64 v155; // rsi
  unsigned __int64 v156; // rcx
  __int64 v157; // r11
  __int64 v158; // rdi
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned __int64 v162; // rbx
  char v163; // al
  __int64 v164; // rcx
  int v165; // eax
  char v166; // di
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 *v168; // r15
  unsigned __int64 PteShadow; // rdx
  __int64 v170; // rdx
  __int64 v171; // rbx
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rdx
  __int64 v177; // rcx
  char v178; // bl
  struct _KPRCB *v179; // rcx
  __int64 v180; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v182; // r9d
  signed __int32 v183; // eax
  volatile signed __int32 v184; // ett
  signed __int32 v185; // edx
  signed __int64 v186; // rax
  signed __int64 v187; // rax
  signed __int64 v188; // rtt
  signed __int64 v189; // r9
  struct _KTHREAD *v190; // rcx
  __int64 v191; // rsi
  unsigned __int64 v192; // rax
  __int64 v193; // r15
  __int64 v194; // rbx
  __int64 v195; // r8
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // r8
  __int64 v198; // [rsp+40h] [rbp-C0h]
  __int64 v199; // [rsp+48h] [rbp-B8h]
  int v201; // [rsp+58h] [rbp-A8h]
  int v202; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  unsigned int v205; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v206; // [rsp+74h] [rbp-8Ch]
  int v207; // [rsp+78h] [rbp-88h]
  __int64 v208; // [rsp+80h] [rbp-80h]
  __int64 v209; // [rsp+88h] [rbp-78h] BYREF
  __int64 v210; // [rsp+90h] [rbp-70h] BYREF
  int v211; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v212; // [rsp+9Ch] [rbp-64h]
  __int64 v213; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v214; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v215; // [rsp+B0h] [rbp-50h]
  int v216; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v217; // [rsp+C0h] [rbp-40h]
  __int64 v218; // [rsp+C8h] [rbp-38h]
  int v219; // [rsp+D0h] [rbp-30h]
  int v220; // [rsp+D4h] [rbp-2Ch] BYREF
  int v221; // [rsp+D8h] [rbp-28h] BYREF
  int v222; // [rsp+DCh] [rbp-24h] BYREF
  int v223; // [rsp+E0h] [rbp-20h] BYREF
  int v224; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned __int64 v225; // [rsp+E8h] [rbp-18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F0h] [rbp-10h]
  __int64 v227; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v228; // [rsp+100h] [rbp+0h]
  int v229; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v230; // [rsp+110h] [rbp+10h]
  __int64 v231; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v232; // [rsp+120h] [rbp+20h]
  unsigned __int64 v233; // [rsp+128h] [rbp+28h]
  unsigned __int64 v234; // [rsp+130h] [rbp+30h]
  __int64 v235; // [rsp+138h] [rbp+38h]
  __int64 v236; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v237; // [rsp+148h] [rbp+48h] BYREF
  int v238; // [rsp+150h] [rbp+50h] BYREF
  __int16 v239; // [rsp+154h] [rbp+54h]
  __int64 v240; // [rsp+158h] [rbp+58h]
  __int64 v241; // [rsp+160h] [rbp+60h]
  _QWORD Base[21]; // [rsp+168h] [rbp+68h] BYREF
  int v243; // [rsp+210h] [rbp+110h] BYREF
  __int16 v244; // [rsp+214h] [rbp+114h]
  __int64 v245; // [rsp+218h] [rbp+118h]
  __int64 v246; // [rsp+220h] [rbp+120h]
  __int64 v247; // [rsp+228h] [rbp+128h]

  v9 = a7;
  v230 = a8;
  v11 = a1;
  v12 = *(_DWORD *)(a2 + 48) & 7;
  v208 = (__int64)a7;
  if ( v12 == 2 && (unsigned int)MiImageVadHotPatchEligible(a2) && MiGetImageHotPatchTableAddress(v13) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  SessionId = -1;
  v212 = ProtectionMask;
  v17 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v19 = ProtectionMask & 5;
  v217 = 0LL;
  v20 = ProtectionMask & 0xFFFFFFFE;
  v227 = 0LL;
  v240 = 20LL;
  v239 = 0;
  if ( v19 != 5 )
    v20 = v17;
  v241 = 0LL;
  v238 = 1;
  Base[0] = 0LL;
  v21 = 0LL;
  v207 = v19;
  v206 = v20;
  v22 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter2 = v22;
  v23 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v216 = 0;
  v198 = v11 + 1280;
  v24 = *(_QWORD *)(v11 + 1296);
  v245 = 20LL;
  v243 = 1;
  v244 = 4;
  v246 = 0LL;
  v247 = 0LL;
  v215 = v23;
  CurrentThread = KeGetCurrentThread();
  v210 = 0LL;
  if ( *(_QWORD *)(v24 + 312) )
  {
    v25 = *(unsigned int *)(v15 + 52);
    LODWORD(v25) = v25 & 0x7FFFFFFF;
    if ( v25 | ((unsigned __int64)*(unsigned __int8 *)(v15 + 34) << 31) )
    {
      v26 = MiLockWorkingSetShared(v198);
      MiComputePageCommitment(a3, a4, a2, v26, 0, (__int64)&v210);
      MiUnlockWorkingSetShared(v198, v26);
      v11 = a1;
      if ( v210 )
      {
        result = MiChargeFullProcessCommitment(a1, v210);
        if ( (int)result < 0 )
          return result;
      }
      v23 = v215;
      v15 = a2;
    }
  }
  v218 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v198 + 174));
  if ( v207 != 5 )
    goto LABEL_21;
  v27 = MiCountSharedPages(v15, v22, v23);
  v21 = v27;
  if ( a6 == 1 )
  {
    v28 = ((__int64)(v215 - v22) >> 3) - v27;
    v29 = v28 == -1;
    v30 = v28 + 1;
    v217 = v30;
    if ( !v29 && !(unsigned int)MiChargeCommit(v218, v30, 0) )
    {
      if ( v210 )
        MiReturnFullProcessCommitment(v11);
      return 3221225773LL;
    }
    v21 = 0LL;
LABEL_21:
    v31 = *(_DWORD *)(a2 + 48);
    if ( (v31 & 0x4000) != 0 )
    {
      if ( *(int *)(a2 + 52) < 0 || (v31 & 7) != 0 )
        goto LABEL_67;
    }
    else if ( (v31 & 0xF8) != 0xC0
           || (v33 = *(__int64 **)(a2 + 72)) == 0LL
           || (v31 & 7) == 1
           || (v34 = *v33, *(_QWORD *)(v34 + 64))
           || (*(_DWORD *)(v34 + 56) & 0x1000) == 0 )
    {
LABEL_67:
      if ( v21 )
      {
        v46 = *(unsigned int *)(a2 + 52);
        LODWORD(v46) = v46 & 0x7FFFFFFF;
        v47 = v21 + (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v46);
        *(_DWORD *)(a2 + 52) ^= (v47 ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(a2 + 34) = v47 >> 31;
      }
      v202 = 1;
      v48 = a2;
      v213 = 0LL;
      v49 = v198;
      v50 = 0LL;
      v199 = 0LL;
      v51 = *(_BYTE *)(v198 + 184) & 7;
      if ( v51 < 6u )
      {
        if ( v51 == 2 )
          v53 = &dword_14043C7C0;
        else
          v53 = (LONG *)(v198 + 192);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v53, CurrentIrql);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v57 = SchedulerAssist[5];
              SchedulerAssist[5] = v57 + 1;
              if ( v57 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(v53);
          v58 = *v53 & 0x7FFFFFFF;
          if ( v58 != _InterlockedCompareExchange(v53, v58 + 1, v58) )
          {
            v59 = CurrentPrcb->SchedulerAssist;
            if ( v59 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v60 = v59[5] - 1;
                v59[5] = v60;
                if ( !v60 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(v53, CurrentIrql);
          }
          v50 = 0LL;
        }
        if ( v53[1] )
          _InterlockedExchange(v53 + 1, 0);
        v49 = v198;
        LOBYTE(v52) = CurrentIrql;
        v208 = CurrentIrql;
      }
      else
      {
        v52 = KeGetCurrentIrql();
        v208 = v52;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v52 < 2u )
        {
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          LOBYTE(v52) = v208;
        }
      }
      MiQueryAddressState(a3, a3, v52, a2, 0LL, (int *)&v205, &v236, &v229);
      v63 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v64 = 0xFFFFF6FB7DBED7F8uLL;
      *v9 = MmProtectToValue[v205];
      if ( BugCheckParameter2 <= v215 )
      {
        while ( 1 )
        {
          v65 = 0x8000000000000000uLL;
          if ( (v63 & 0xFFF) == 0 || v202 == 1 )
          {
            v202 = 0;
            if ( v50 )
            {
              MiFlushTbList(&v238, 0LL, 0xFFFFF6FB7DBED7F8uLL, 0x8000000000000000uLL);
              MiUnlockPageTableInternal(v49, v50);
            }
            v66 = BugCheckParameter2;
            v199 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v67 = (*(_DWORD *)(v48 + 48) >> 8) & 0x3F;
            Process = KeGetCurrentThread()->ApcState.Process;
            v69 = (__int64)(BugCheckParameter2 << 25) >> 16;
            if ( v69 < 0xFFFFF68000000000uLL || (v70 = 0, v69 > 0xFFFFF6FFFFFFFFFFuLL) )
              v70 = 1;
            while ( 1 )
            {
              if ( v70 )
              {
                v71 = MiFastLockLeafPageTable((__int64)&Process[1].IdealNode[12], v69, 0);
                if ( v71 )
                  break;
              }
              valid = MiLockLowestValidPageTable((__int64)&Process[1].IdealNode[12], v66, &v237, v65);
              if ( valid == v199 )
                goto LABEL_113;
              MiUnlockPageTableInternal(&Process[1].IdealNode[12], valid);
              MiFlushTbList(&v238, v74, v75, v76);
              MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12], v208);
              v77 = MmAccessFault(((unsigned __int64)v67 << 57) | 0x100000000000002LL, v66, 0LL, 0LL);
              v78 = v77;
              if ( v77 < 0 )
              {
                MiFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v78, (ULONG_PTR)Process, BugCheckParameter2);
              }
              MiLockWorkingSetShared(&Process[1].IdealNode[12]);
              v66 = BugCheckParameter2;
            }
            if ( v71 != 1 )
            {
              for ( i = v199; ; i = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                ;
            }
LABEL_113:
            v63 = BugCheckParameter2;
            v65 = 0x8000000000000000uLL;
            v48 = a2;
            v64 = 0xFFFFF6FB7DBED7F8uLL;
          }
          v79 = *(_QWORD *)v63;
          v80 = (__int64)(v63 << 25) >> 16;
          v214 = v80;
          if ( v63 >= 0xFFFFF6FB7DBED000uLL
            && v63 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v79 & 1) != 0
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
          {
            v81 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v81 )
            {
              v82 = *(_QWORD *)(v81 + 8 * ((v63 >> 3) & 0x1FF));
              v83 = v79 | 0x20;
              if ( (v82 & 0x20) == 0 )
                v83 = v79;
              v79 = v83;
              if ( (v82 & 0x42) != 0 )
                v79 = v83 | 0x42;
            }
          }
          v209 = v79;
          if ( (v79 & 1) == 0 )
            break;
          v84 = v79;
          if ( (unsigned __int64)&v209 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v209 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
          {
            v85 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v85 )
            {
              v86 = *(_QWORD *)(v85 + 8 * (((unsigned __int64)&v209 >> 3) & 0x1FF));
              v84 = v79 | 0x20;
              if ( (v86 & 0x20) == 0 )
                v84 = v79;
              if ( (v86 & 0x42) != 0 )
                v84 |= 0x42uLL;
            }
            else
            {
              v84 = v79;
            }
          }
          v61 = (v84 >> 12) & 0xFFFFFFFFFLL;
          v228 = v61;
          v87 = 6 * v61;
          v88 = 48 * v61 - 0x58000000000LL;
          if ( (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) != 0 )
          {
            v89 = *(_QWORD *)(v88 + 8);
            if ( (v89 | 0x8000000000000000uLL) != MiGetProtoPteAddress(a2, v80 >> 12, 0, &v231) )
            {
              v91 = 0LL;
              if ( v89 < 0 )
              {
                CloneAddress = MiLocateCloneAddress(a1, v89 | 0x8000000000000000uLL);
                v61 = *(_QWORD *)(v93 + 1296);
                v91 = CloneAddress;
                if ( *(_QWORD *)(v61 + 312) <= *(_QWORD *)(CloneAddress + 96) )
                  v91 = 0LL;
              }
              MiFlushTbList(&v238, v61, v64, v90);
              v63 = BugCheckParameter2;
              v94 = MiCopyOnWrite(v80);
              if ( v94 < 0 )
              {
                v49 = v198;
                MiUnlockPageTableInternal(v198, v199);
                MiUnlockWorkingSetShared(v198, v208);
                MiCopyOnWriteCheckConditions(v198, (unsigned int)v94);
                v199 = 0LL;
                v50 = 0LL;
                v202 = 1;
                MiLockWorkingSetShared(v198);
                goto LABEL_477;
              }
              if ( v91 )
                --v210;
              goto LABEL_475;
            }
          }
          v62 = a6;
          if ( (a5 & 0x101) == 0 && (a6 != 1 || (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) != 0) )
          {
            if ( (*(_QWORD *)(v88 + 40) & 0x200000000000000LL) != 0 )
            {
              if ( v207 != 5 && (v79 & 0x200) != 0 )
                ++v213;
              v95 = ((v214 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v96 = *(_QWORD *)v95;
              if ( v95 >= 0xFFFFF6FB7DBED000uLL
                && v95 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v96 & 1) != 0
                && ((v96 & 0x20) == 0 || (v96 & 0x42) == 0) )
              {
                v97 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v97 )
                {
                  v98 = *(_QWORD *)(v97 + 8 * ((v95 >> 3) & 0x1FF));
                  v99 = v96 | 0x20;
                  if ( (v98 & 0x20) == 0 )
                    v99 = *(_QWORD *)v95;
                  v96 = v99;
                  if ( (v98 & 0x42) != 0 )
                    v96 = v99 | 0x42;
                }
              }
              v100 = (v96 >> 60) & 7;
              if ( v100 )
              {
                v101 = *(_QWORD *)v95;
                if ( (*(_QWORD *)v95 & 0x10) != 0 )
                  goto LABEL_172;
                if ( (v101 & 8) != 0 )
                {
                  v100 |= 0x18u;
                  goto LABEL_180;
                }
                if ( (v101 & 0x10) != 0 )
LABEL_172:
                  v100 |= 8u;
              }
              else
              {
                v102 = MI_READ_PTE_LOCK_FREE(v88 + 16);
                v103 = *(_QWORD *)(v88 + 8);
                v104 = (v102 >> 5) & 0x1F;
                if ( v103 < 0 )
                {
                  v105 = KeGetCurrentThread()->ApcState.Process;
                  if ( v105[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v105, v103 | 0x8000000000000000uLL) )
                    LODWORD(v104) = MmMakeProtectNotWriteCopy[v104];
                  v100 = v104;
                }
                else
                {
                  v100 = MmMakeProtectNotWriteCopy[v104];
                }
              }
LABEL_180:
              v205 = v100;
              v106 = MiSanitizePfnProtection(a2, v100, v212);
              v109 = *v107;
              v110 = v106;
              if ( (unsigned __int64)v107 >= v108
                && (unsigned __int64)v107 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v109 & 1) != 0
                && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
              {
                v111 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v111 )
                {
                  v112 = *(_QWORD *)(v111 + 8 * (((unsigned __int64)v107 >> 3) & 0x1FF));
                  HIBYTE(v111) = HIBYTE(*v107);
                  if ( (v112 & 0x20) == 0 )
                    v111 = *v107;
                  HIBYTE(v109) = HIBYTE(v111);
                  if ( (v112 & 0x42) != 0 )
                    HIBYTE(v109) = HIBYTE(v111);
                }
              }
              v113 = *v107;
              v114 = (unsigned __int64)((16 * (v110 & 7)) & 0x7F | HIBYTE(v109) & 0xFu) << 56;
              do
              {
                v115 = v113;
                v113 = _InterlockedCompareExchange64(v107, v114 | v113 & 0x80FFFFFFFFFFFFFFuLL, v113);
              }
              while ( v115 != v113 );
LABEL_194:
              v116 = BugCheckParameter2;
              v117 = *(_QWORD *)BugCheckParameter2;
              if ( BugCheckParameter2 >= v108
                && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v117 & 1) != 0
                && ((v117 & 0x20) == 0 || (v117 & 0x42) == 0) )
              {
                v114 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v114 )
                {
                  v118 = *(_QWORD *)(v114 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                  v114 = v117 | 0x20;
                  if ( (v118 & 0x20) == 0 )
                    v114 = *(_QWORD *)BugCheckParameter2;
                  v117 = v114;
                  if ( (v118 & 0x42) != 0 )
                    v117 = v114 | 0x42;
                }
              }
              if ( (v117 & 0x10) != 0 || (v117 & 8) == 0 )
              {
                if ( (v117 & 0x10) != 0 )
                {
                  if ( (v110 & 0x18) != 8 )
                    v110 = v110 & 0xFFFFFFE7 | 8;
                }
                else if ( (v110 & 0x18) != 0 )
                {
                  v110 &= 0xFFFFFFE7;
                }
              }
              else
              {
                v119 = v110 | 0x18;
                if ( (v110 & 0x18) == 0x18 )
                  v119 = v110;
                v110 = v119;
              }
              if ( (*(_QWORD *)(8 * v87 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
              {
                if ( (MiFlags & 0x40000) != 0 && (v110 & 2) != 0 )
                {
                  v221 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v221, v114, v116);
                    while ( *(__int64 *)(v88 + 24) < 0 );
                  }
                  if ( !(unsigned int)MiGetPagePrivilege(v88) )
                    MiMarkPfnVerified(v88, 7u);
                  _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
              }
              else
              {
                v88 = 0LL;
              }
              v125 = 0xFFFFF68000000000uLL;
              v126 = v110 & 0x1F;
              v127 = (v228 << 12) | MmProtectToPteMask[v126] & 0xFFFF000000000E7FuLL | 0x21;
              v63 = BugCheckParameter2;
              if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
                goto LABEL_271;
              if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
              {
                if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
                {
                  v127 = (v228 << 12) | MmProtectToPteMask[v126] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
                }
                else if ( (v110 & 0x4000000) == 0 )
                {
                  v127 = (v228 << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v126] & 0x7FFF000000000E7FLL | 0x21;
                }
                v128 = MiUserPdeOrAbove(BugCheckParameter2);
                v125 = 0xFFFFF68000000000uLL;
                if ( v128 )
                  v127 |= 4uLL;
              }
              if ( BugCheckParameter2 <= 0xFFFFF6BFFFFFFF78uLL )
                v127 |= 4uLL;
              if ( (v110 & 0x4000000) != 0 )
                LeafVa = MiGetLeafVa(v214);
              else
                LeafVa = v214;
              if ( LeafVa < 0xFFFF800000000000uLL )
              {
                v130 = HIBYTE(word_14043B26C);
                goto LABEL_270;
              }
              if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 1 && (v131 < v125 || v131 > v132) )
              {
                if ( v131 < qword_14043CB80 || (v130 = HIBYTE(word_14043B26C), v131 > qword_14043B5F0) )
                  v130 = (unsigned __int8)word_14043B26C;
LABEL_270:
                if ( v130 )
LABEL_271:
                  v127 |= 0x100uLL;
              }
              if ( v110 < 0 && (v110 & 5) == 4 )
                v127 |= 0x42uLL;
              v133 = v127 & 0xFFFFFFFFFFFFFFFBuLL;
              if ( (v110 & 0x40000000) == 0 )
                v133 = v127;
              if ( (v110 & 0x20000000) != 0 )
                v133 ^= ((unsigned __int16)v133 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100;
              v134 = v133 & 0xFFFFFFFFFFFFFEFFuLL;
              if ( (v110 & 0x8000000) == 0 )
                v134 = v133;
              v135 = v134 | 0x80;
              if ( (v110 & 0x4000000) == 0 )
                v135 = v134;
              v136 = v135 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
              if ( v88 )
              {
                if ( (MiFlags & 0x2000000) != 0 && (v117 & 0x42) == 0x40 )
                  v136 |= 0x40uLL;
              }
              else
              {
                v137 = v136 | 0x42;
                if ( (v110 & 4) == 0 )
                  v137 = v136;
                v136 = v137;
              }
              v138 = *(_QWORD *)BugCheckParameter2;
              v62 = 0xFFFFF6FB7DBED000uLL;
              if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
                && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v138 & 1) != 0
                && ((v138 & 0x20) == 0 || (v138 & 0x42) == 0) )
              {
                v139 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v139 )
                {
                  v140 = *(_QWORD *)(v139 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
                  v141 = v138 | 0x20;
                  if ( (v140 & 0x20) == 0 )
                    v141 = *(_QWORD *)BugCheckParameter2;
                  v138 = v141;
                  if ( (v140 & 0x42) != 0 )
                    v138 = v141 | 0x42;
                }
              }
              v64 = 0x7000000000000000LL;
              v61 = v136 ^ (v138 ^ v136) & 0xF00000000000000LL ^ (v136 ^ (v138 ^ v136) & 0xF00000000000000LL ^ v138) & 0x7000000000000000LL;
              if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v61) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v61 & 1) != 0 )
                    v61 |= 0x8000000000000000uLL;
                  *(_QWORD *)BugCheckParameter2 = v61;
                  MiWritePteShadow(BugCheckParameter2);
                  v125 = 0xFFFFF68000000000uLL;
LABEL_313:
                  if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0)
                    && ((v136 & 0x40) != 0 || (v117 & 0x40) == 0)
                    && ((v136 & 2) != 0 || (v117 & 2) == 0)
                    && (v136 >= 0 || v117 < 0) )
                  {
                    v142 = v214;
                    goto LABEL_351;
                  }
                  v142 = v214;
                  v143 = 1LL;
                  v144 = v214;
                  v62 = (unsigned __int8)v239;
                  if ( v238 != 1 && (v239 & 8) == 0 && v214 >= v125 && v214 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    LOBYTE(v62) = v239 | 8;
                    LOBYTE(v239) = v239 | 8;
                  }
                  v64 = HIDWORD(v240);
                  if ( HIDWORD(v240) )
                  {
                    LOBYTE(v62) = v62 & 4;
                    if ( !(_BYTE)v62 )
                    {
                      v145 = Base[HIDWORD(v240) - 1];
                      if ( (v145 & 0xC00) == 0 )
                      {
                        v146 = Base[HIDWORD(v240) - 1] & 0x3FFLL;
                        v61 = (v145 & 0xFFFFFFFFFFFFF000uLL) + ((v146 + 1) << 12);
                        if ( v61 == v214 && v146 + 1 >= v146 && v146 + 1 <= 0x3FF )
                        {
                          ++v241;
                          Base[HIDWORD(v240) - 1] = ((unsigned __int16)v145 ^ (unsigned __int16)(v145 + 1)) & 0x3FF ^ v145;
                          goto LABEL_351;
                        }
                      }
                    }
                    if ( !(_BYTE)v62 )
                    {
                      v62 = (unsigned __int64)&Base[HIDWORD(v240) - 1];
                      v147 = *(_QWORD *)v62;
                      if ( (*(_QWORD *)v62 & 0xC00LL) == 0 )
                      {
                        v61 = v147 & 0xFFFFFFFFFFFFF000uLL;
                        if ( (v147 & 0xFFFFFFFFFFFFF000uLL) == v214 + 4096 )
                        {
                          v148 = *(_QWORD *)v62 & 0x3FFLL;
                          v61 = v148 + 1;
                          if ( v148 + 1 >= v148 && v61 <= 0x3FF )
                          {
                            ++v241;
                            *(_QWORD *)v62 = ((unsigned __int16)(v147 - 4096) ^ (unsigned __int16)(v147 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v147 - 4096);
                            goto LABEL_351;
                          }
                        }
                      }
                    }
                  }
                  if ( HIDWORD(v240) < (unsigned int)v240 )
                  {
                    while ( 1 )
                    {
                      v61 = 1024LL;
                      if ( (unsigned __int64)(v143 - 1) <= 0x3FF )
                        v61 = v143;
                      v143 -= v61;
                      v149 = v144 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v61 - 1) & 0x3FF;
                      v144 += v61 << 12;
                      Base[(unsigned int)v64] = v149;
                      v241 += v61;
                      v64 = (unsigned int)(HIDWORD(v240) + 1);
                      HIDWORD(v240) = v64;
                      if ( (_DWORD)v64 == (_DWORD)v240 && (v239 & 4) == 0 )
                      {
                        qsort(Base, (unsigned int)v64, 8uLL, MiTbFlushSort);
                        MiCompressTbFlushList(&v238);
                        v64 = HIDWORD(v240);
                        if ( HIDWORD(v240) == (_DWORD)v240 )
                          break;
                      }
                      if ( !v143 )
                        goto LABEL_351;
                    }
                    if ( v143 )
                    {
                      HIBYTE(v239) = 1;
                      v241 = HIDWORD(v240);
                    }
                  }
                  else
                  {
                    HIBYTE(v239) = 1;
                  }
LABEL_351:
                  if ( (v117 & 0x42) != 0 )
                  {
                    if ( v88
                      && ((*(_BYTE *)(a2 + 48) & 7) != 6 || (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2)) )
                    {
                      v222 = 0;
                      v150 = 0LL;
                      while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
                      {
                        do
                          KeYieldProcessorEx(&v222, v61, v64);
                        while ( *(__int64 *)(v88 + 24) < 0 );
                      }
                      v62 = *(unsigned __int8 *)(v88 + 34);
                      v61 = 0LL;
                      if ( (v62 & 0x10) == 0 )
                      {
                        v64 = *(unsigned int *)(v88 + 16);
                        v151 = *(_BYTE *)(v88 + 34);
                        if ( (v64 & 0x400) == 0 && (v62 & 8) == 0 )
                        {
                          v61 = MiCapturePageFileInfoInline(v88 + 16, 1LL);
                          v151 = *(_BYTE *)(v88 + 34);
                        }
                        *(_BYTE *)(v88 + 34) = v151 | 0x10;
                        if ( v61 )
                          v150 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v88 + 40) >> 40) & 0x3FFLL));
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( v61 )
                        MiReleasePageFileInfo(v150, v61, 1);
                    }
                    if ( (*(_DWORD *)(a2 + 48) & 7) == 4 )
                      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v142, a2);
                  }
LABEL_474:
                  v63 += 8LL;
                  BugCheckParameter2 = v63;
LABEL_475:
                  v49 = v198;
                  goto LABEL_476;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v61 & 1) != 0 )
                {
                  v61 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter2 = v61;
              goto LABEL_313;
            }
            v220 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v220, v61, v64);
              while ( *(__int64 *)(v88 + 24) < 0 );
            }
            v114 = v206;
            v110 = v206;
            v120 = (*(_QWORD *)(v88 + 16) >> 5) & 0x1FLL;
            if ( v206 != 24 )
            {
              if ( (_DWORD)v120 == 24 )
              {
                v121 = *(_DWORD *)(a2 + 48);
                v122 = (v121 & 0x4000) != 0 ? v121 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
                LODWORD(v120) = v122 & 0x1F;
                v114 = v206;
                if ( (_DWORD)v120 == 24 )
                  LOBYTE(v120) = 0;
              }
              v123 = v120 & 0x18;
              if ( v123 )
              {
                if ( v123 != 16 )
                {
                  if ( v123 == 8 )
                  {
                    v110 = v114 & 0xFFFFFFE7 | 8;
                  }
                  else if ( v123 == 24 )
                  {
                    v110 = v114 | 0x18;
                  }
                  goto LABEL_231;
                }
LABEL_230:
                v110 = v114 & 0xFFFFFFF7;
              }
              else
              {
                v124 = v114 & 0x18;
                if ( v124 == 24 )
                {
                  v110 = v114 & 0xFFFFFFE7;
                }
                else if ( v124 == 8 )
                {
                  goto LABEL_230;
                }
              }
            }
LABEL_231:
            *(_QWORD *)(v88 + 16) ^= ((unsigned __int16)*(_QWORD *)(v88 + 16) ^ (unsigned __int16)(32 * v110)) & 0x3E0;
            _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v108 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_194;
          }
          v63 = BugCheckParameter2;
          v152 = BugCheckParameter2;
          v153 = (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) == (v215 & 0xFFFFFFFFFFFFF000uLL) )
            v153 = v215;
          v154 = 0;
          if ( BugCheckParameter2 <= v153 )
          {
            v155 = v214;
            while ( 1 )
            {
              v209 = MI_READ_PTE_LOCK_FREE(v152);
              if ( (v209 & 1) == 0
                || (v156 = 6
                         * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v209) >> 12) & 0xFFFFFFFFFLL),
                    (a5 & 0x101) == 0)
                && ((_DWORD)v62 != 1 || (v157 & *(_QWORD *)(8 * v156 - 0x58000000000LL + 40)) != 0) )
              {
LABEL_384:
                v63 = BugCheckParameter2;
                goto LABEL_385;
              }
              if ( (MiGetWsleContents(v156, v155) & 0xF) == 8 )
                break;
              MiInsertTbFlushEntry(&v243, v155, 1LL);
              if ( HIDWORD(v245) == (_DWORD)v245 )
                goto LABEL_379;
LABEL_383:
              v62 = a6;
              v152 += 8LL;
              v155 += 4096LL;
              if ( v152 > v153 )
                goto LABEL_384;
            }
            v154 = 1;
            *v230 = 1;
LABEL_379:
            if ( HIDWORD(v245) )
              MiFreeWsleList(v198, &v243, 0LL);
            if ( v154 == 1 )
            {
              MiUnlockVa(v198, v155);
              v154 = 0;
            }
            goto LABEL_383;
          }
LABEL_385:
          if ( !HIDWORD(v245) )
            goto LABEL_475;
          v49 = v198;
          MiFreeWsleList(v198, &v243, 0LL);
LABEL_476:
          v50 = v199;
LABEL_477:
          v48 = a2;
          if ( v63 > v215 )
            goto LABEL_479;
          v64 = 0xFFFFF6FB7DBED7F8uLL;
        }
        if ( (v79 & 0x400) != 0 )
        {
          if ( !MiIsPrototypePteVadLookup(v79) )
          {
            v158 = v79;
            if ( qword_14043B180 && (v79 & 0x10) == 0 )
              v158 = v79 & ~qword_14043B180;
            if ( v158 >> 16 != MiGetProtoPteAddress(v48, v80 >> 12, 0, &v231) )
            {
              MiFlushTbList(&v238, v159, v160, v161);
              if ( (int)MiMakeProtoLeafValid(v63) < 0 )
              {
                v63 += 8LL;
                BugCheckParameter2 = v63;
              }
              v202 = 1;
              goto LABEL_475;
            }
          }
          if ( v207 != 5 && MiIsPrototypePteVadLookup(v79) && (v79 & 0xA0) == 0xA0 )
            ++v213;
          if ( MiIsPrototypePteVadLookup(v79) )
            v162 = v79 >> 5;
          else
            LODWORD(v162) = *(unsigned __int16 *)(*(_QWORD *)(v48 + 72) + 32LL) >> 1;
          v205 = v162 & 0x1F;
          v163 = MiSanitizePfnProtection(v48, v162 & 0x1F, v212);
          v209 = MiSwizzleInvalidPte(32 * (v163 & 0x1F | 0xFFFFFFFFF8000020uLL));
          if ( MiPteInShadowRange(v63) )
          {
            if ( (unsigned int)MiPteHasShadow(v164, v61) )
            {
              if ( !HIBYTE(word_14043B26C) && (v64 & 1) != 0 )
                v61 |= 0x8000000000000000uLL;
LABEL_463:
              *(_QWORD *)v63 = v61;
              MiWritePteShadow(v63);
              goto LABEL_474;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v64 & 1) != 0 )
            {
              v61 |= 0x8000000000000000uLL;
            }
          }
          goto LABEL_473;
        }
        if ( (v79 & 0x800) != 0 )
        {
          if ( a6 != 1 )
          {
            if ( !(unsigned int)MiSetProtectionOnTransitionPte(v48, v63, v206, 1LL) )
              goto LABEL_474;
            goto LABEL_475;
          }
          v165 = MiTryDeleteTransitionPte(v63);
          if ( v165 == 3 )
          {
            ++v227;
          }
          else if ( v165 == 1 )
          {
            goto LABEL_475;
          }
          goto LABEL_423;
        }
        v166 = 0;
        if ( a6 == 1 )
        {
          if ( v79 )
          {
            MiReleasePageFileSpace(v218, v79, 1LL);
            if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v79) )
            {
LABEL_424:
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v63 << 25) >> 16, v61, v64);
              MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
              v166 = 1;
              goto LABEL_426;
            }
LABEL_423:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
            goto LABEL_424;
          }
        }
        else if ( v79 )
        {
          v205 = (v79 >> 5) & 0x1F;
          v206 = MiSanitizePfnProtection(v48, (v79 >> 5) & 0x1F, v206);
          v209 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(32 * v206)) & 0x3E0;
          if ( MiPteInShadowRange(v63) )
          {
            if ( (unsigned int)MiPteHasShadow(v175, v61) )
            {
              if ( !HIBYTE(word_14043B26C) && (v64 & 1) != 0 )
                v61 |= v62;
              goto LABEL_463;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v64 & 1) != 0 )
            {
              v61 |= v62;
            }
          }
LABEL_473:
          *(_QWORD *)v63 = v61;
          goto LABEL_474;
        }
LABEL_426:
        v168 = (unsigned __int64 *)(((v80 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        PteShadow = *v168;
        if ( (unsigned __int64)v168 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v168 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v168, PteShadow);
        v225 = PteShadow;
        if ( (unsigned __int64)&v225 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v225 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)&v225, PteShadow);
        v170 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
        v171 = 48 * v170 - 0x58000000000LL;
        v223 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v171 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v223, v170, v64);
          while ( *(__int64 *)(v171 + 24) < 0 );
        }
        *(_QWORD *)(v171 + 16) ^= ((unsigned int)*(_QWORD *)(v171 + 16) ^ ((unsigned int)*(_QWORD *)(v171 + 16) + 0x10000)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(v171 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (__int64)(*(_QWORD *)(v171 + 8) | 0x8000000000000000uLL) >> 47 == -1
          || (__int64)(*(_QWORD *)(v171 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
        {
          v65 = 4LL;
          v232 = (((*(_QWORD *)(v171 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v233 = ((v232 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v234 = ((v233 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v235 = ((v234 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          do
          {
            v64 = *(&v231 + v65--);
            v172 = *(_QWORD *)v64;
            if ( v64 >= 0xFFFFF6FB7DBED000uLL
              && v64 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
            {
              if ( (v172 & 1) == 0 )
                break;
              if ( (v172 & 0x20) == 0 || (v172 & 0x42) == 0 )
              {
                v173 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v173 )
                {
                  v174 = *(_QWORD *)(v173 + 8 * ((v64 >> 3) & 0x1FF));
                  v64 = v172 | 0x20;
                  if ( (v174 & 0x20) == 0 )
                    v64 = v172;
                  LOBYTE(v172) = v64;
                  if ( (v174 & 0x42) != 0 )
                    LOBYTE(v172) = v64 | 0x42;
                }
              }
            }
          }
          while ( (v172 & 1) != 0 && (v172 & 0x80u) == 0LL && v65 );
        }
        if ( v207 != 5 && (v166 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v48, v63, v64, v65)) )
          ++v213;
        v205 = (*(unsigned __int16 *)(*(_QWORD *)(v48 + 72) + 32LL) >> 1) & 0x1F;
        v61 = 32 * (MiSanitizePfnProtection(0LL, v205, v212) & 0x1F | 0xFFFFFFFFF8000020uLL);
        if ( qword_14043B180 )
        {
          if ( (v61 & qword_14043B180) != 0 )
            v61 |= 0x10uLL;
          else
            v61 |= qword_14043B180;
        }
        v209 = v61;
        if ( v63 >= 0xFFFFF6FB7DBED000uLL
          && v63 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(qword_14043B180, v61) )
        {
          goto LABEL_463;
        }
        goto LABEL_473;
      }
LABEL_479:
      MiFlushTbList(&v238, v61, v64, v62);
      if ( !v50 )
        goto LABEL_504;
      v178 = *(_BYTE *)(v49 + 184) & 7;
      if ( v50 == 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( v178 )
        {
          if ( v178 == 7 )
          {
            KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
          }
          else
          {
            v179 = KeGetCurrentPrcb();
            if ( v178 == 5 )
              KxReleaseQueuedSpinLock(v179->SelfmapLockHandle);
            else
              KxReleaseQueuedSpinLock(&v179->SelfmapLockHandle[3]);
          }
        }
        else
        {
          KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[2]);
        }
        goto LABEL_504;
      }
      if ( v178 )
      {
        if ( v50 >= 0xFFFFF6FB7DBED000uLL && v50 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v198, v50, &v224);
          v182 = ~(3 << v224);
          v184 = *PageTableLockBuffer;
          v183 = _InterlockedCompareExchange(PageTableLockBuffer, v182 & *PageTableLockBuffer, *PageTableLockBuffer);
          if ( v184 != v183 )
          {
            do
            {
              v185 = v183;
              v183 = _InterlockedCompareExchange(PageTableLockBuffer, v182 & v183, v183);
            }
            while ( v183 != v185 );
          }
          goto LABEL_504;
        }
      }
      else if ( v50 >= 0xFFFFF6FB7DBED000uLL && v50 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v180 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(v177, v176) + 1296) + 552LL);
        if ( v180 )
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v180 + 4 * ((v50 >> 3) & 0x1FF));
LABEL_504:
          MiUnlockWorkingSetShared(v198, v208);
          if ( v216 == 1 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 880);
            KeAbPostRelease(a1 + 880);
            v190 = CurrentThread;
            v29 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v190->ApcState.ApcListHead[0].Flink != &v190->152 )
              KiCheckForKernelApcDelivery((__int64)v190);
          }
          v191 = v227;
          v192 = v217;
          if ( v227 && v207 == 5 )
          {
            v192 = v217 - v227;
            v191 = 0LL;
          }
          v193 = v218;
          if ( v192 )
            MiReturnCommit(v218, v192);
          v194 = v213;
          if ( v213 )
          {
            v195 = *(unsigned int *)(v48 + 52);
            LODWORD(v195) = v195 & 0x7FFFFFFF;
            v196 = v213 - v191;
            v197 = (((unsigned __int64)*(unsigned __int8 *)(v48 + 34) << 31) | v195) - v213;
            *(_DWORD *)(v48 + 52) ^= (v197 ^ *(_DWORD *)(v48 + 52)) & 0x7FFFFFFF;
            *(_BYTE *)(v48 + 34) = v197 >> 31;
            MiReturnCommit(v193, v196);
            MiReturnFullProcessCharges(a1, v194);
          }
          if ( v210 )
            MiReturnFullProcessCommitment(a1);
          return 0LL;
        }
      }
      v186 = *(_QWORD *)v50;
      if ( v50 >= 0xFFFFF6FB7DBED000uLL && v50 <= 0xFFFFF6FB7DBED7F8uLL )
        v186 = MiReadPteShadow(v50, *(_QWORD *)v50);
      v188 = v186;
      v187 = _InterlockedCompareExchange64((volatile signed __int64 *)v50, v186 & 0xCFFFFFFFFFFFFFFFuLL, v186);
      if ( v188 != v187 )
      {
        do
        {
          v189 = v187;
          v187 = _InterlockedCompareExchange64((volatile signed __int64 *)v50, v187 & 0xCFFFFFFFFFFFFFFFuLL, v187);
        }
        while ( v187 != v189 );
      }
      goto LABEL_504;
    }
    v216 = 1;
    --CurrentThread->SpecialApcDisable;
    v35 = a1 + 880;
    ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
    v201 = MiCommitPageTablesForVad(a2, a3, a4);
    if ( v201 >= 0 )
    {
      v9 = (_DWORD *)v208;
      goto LABEL_67;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v35);
    v211 = 0;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v35) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v36->ApcState.Process);
    --v36->SpecialApcDisable;
    v37 = ++v36->AbAllocationRegionCount;
    LODWORD(v38) = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    v29 = !_BitScanReverse((unsigned int *)&v39, v38);
    v219 = v39;
    if ( v29 )
      goto LABEL_47;
    while ( 1 )
    {
      v40 = 1 << v39;
      v41 = v39;
      v42 = &v36->LockEntries[v41];
      v38 = ~v40 & (unsigned int)v38;
      if ( (v42->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v42->LockState.0 & 1) == 0
        && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v35 & 0x7FFFFFFFFFFFFFFCLL)
        && v42->LockState.SessionId == SessionId )
      {
        v42->AcquiredByte &= ~1u;
        if ( v42->LockState.0 )
          break;
      }
      v29 = !_BitScanReverse((unsigned int *)&v39, v38);
      v219 = v39;
      if ( v29 )
        goto LABEL_47;
    }
    if ( !v42 )
    {
LABEL_47:
      if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, v35, SessionId, 0LL);
    }
    else
    {
      v42->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v42->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v36->LockEntries[v41].TreeNode, v38);
      v211 = 0;
      v211 = v42->BoostBitmap.AllFields & 0x1FFFF;
      v42->BoostBitmap.AllFields &= 0xFFFE0000;
      v42->ThreadLocalFlags &= ~1u;
      v42->LockState.0 = 0LL;
      v43 = ((char *)v42 - (char *)v36 - 800) / 96;
      if ( v37 == 1 )
        v36->AbEntrySummary |= 1 << v43;
      else
        _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v43);
    }
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, v35, (__int64)&v211);
    v29 = v36->SpecialApcDisable++ == -1;
    if ( v29 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v44);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v217 )
    {
      MiReturnCommit(v218, v21);
    }
    else if ( v21 )
    {
      v45 = a1;
      MiReturnFullProcessCommitment(a1);
      goto LABEL_60;
    }
    v45 = a1;
LABEL_60:
    if ( v210 )
      MiReturnFullProcessCommitment(v45);
    return (unsigned int)v201;
  }
  if ( !v27 )
    goto LABEL_21;
  v32 = MiChargeFullProcessCommitment(v11, v27);
  if ( v32 >= 0 )
    goto LABEL_21;
  if ( v210 )
    MiReturnFullProcessCommitment(a1);
  return (unsigned int)v32;
}
