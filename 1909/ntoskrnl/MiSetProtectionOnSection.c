/*
 * XREFs of MiSetProtectionOnSection @ 0x14004E680
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MiMarkSharedImageCfgBits @ 0x140608C18 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x140648664 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406CFE58 (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiUnlockVa @ 0x14001F824 (MiUnlockVa.c)
 *     MiReturnFullProcessCharges @ 0x14001FD90 (MiReturnFullProcessCharges.c)
 *     MiComputePageCommitment @ 0x1400210F0 (MiComputePageCommitment.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiSanitizePfnProtection @ 0x140050010 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1400BFAB8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BFAD4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiTryDeleteTransitionPte @ 0x1400BFB14 (MiTryDeleteTransitionPte.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x14010632C (MiPteNeedsCommitCharge.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140108A18 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiMakeProtoLeafValid @ 0x140128F14 (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x14012B720 (MiSetProtectionOnTransitionPte.c)
 *     MiDecreaseUsedPtesCount @ 0x14012FAB8 (MiDecreaseUsedPtesCount.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3960 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032DE0C (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiImageVadHotPatchEligible @ 0x140604C34 (MiImageVadHotPatchEligible.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiGetImageHotPatchTableAddress @ 0x14088DE58 (MiGetImageHotPatchTableAddress.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // r13
  unsigned int ProtectionMask; // eax
  unsigned int v12; // r8d
  __int64 v13; // rsi
  unsigned __int64 BugCheckParameter4; // r12
  struct _KTHREAD *CurrentThread; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  LONG *v22; // rbx
  unsigned __int8 v23; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v26; // ett
  __int64 CurrentIrql; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  unsigned int v31; // esi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  ULONG_PTR v36; // r10
  __int64 v37; // r11
  __int64 v38; // rdx
  unsigned int v39; // edi
  unsigned __int64 v40; // r13
  __int64 v41; // r8
  unsigned __int64 v42; // r15
  ULONG_PTR v43; // rbx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // r13d
  LONG *v48; // rax
  struct _KPRCB *v49; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // r15d
  int v53; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v55; // r15
  __int64 v56; // r13
  unsigned __int64 v57; // rbx
  BOOL v58; // edi
  int v59; // eax
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 result; // rax
  char v65; // di
  __int64 v66; // r15
  __int64 v67; // rcx
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rbx
  signed __int64 v70; // rbx
  __int64 v71; // r9
  unsigned __int64 v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r13
  __int64 v77; // r9
  __int64 v78; // r15
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // r9
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned __int64 v83; // r9
  volatile signed __int64 v84; // rcx
  signed __int64 v85; // rax
  signed __int64 v86; // rtt
  __int64 v87; // rax
  __int64 *v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rbx
  int v91; // r13d
  struct _KTHREAD *v92; // rdi
  unsigned int v93; // r11d
  unsigned __int8 v94; // r14
  unsigned int v95; // edx
  bool v96; // zf
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  _KLOCK_ENTRY *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r9
  unsigned __int64 v103; // rbx
  char v104; // al
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  int v109; // ebx
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  __int64 v113; // r10
  __int64 v114; // rdx
  __int64 v115; // r11
  _KPROCESS *Process; // rcx
  unsigned __int64 v117; // r13
  unsigned __int64 v118; // rbx
  _DWORD *v119; // r12
  __int64 v120; // rcx
  int v121; // r11d
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // eax
  ULONG_PTR v126; // r15
  int v127; // eax
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  unsigned __int64 v131; // r8
  __int64 v132; // rcx
  unsigned int v133; // edi
  _DWORD *v134; // rcx
  __int64 v135; // r9
  __int64 v136; // r9
  __int64 v137; // r8
  __int64 v138; // rbx
  int v139; // edi
  __int64 v140; // rax
  unsigned __int8 v141; // bl
  struct _KTHREAD *v142; // rdi
  unsigned int SessionId; // r11d
  unsigned __int8 v144; // r15
  unsigned int v145; // edx
  __int64 v146; // rcx
  int v147; // eax
  __int64 v148; // rcx
  _KLOCK_ENTRY *v149; // r14
  __int64 v150; // rdx
  __int64 v151; // rbx
  int v152; // eax
  int v153; // eax
  unsigned __int64 v154; // rdx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 CloneAddress; // rax
  __int64 v159; // rcx
  unsigned __int64 v160; // r8
  __int64 v161; // rax
  __int64 v162; // r8
  unsigned __int64 v163; // r8
  __int64 v164; // rax
  unsigned int v165; // eax
  unsigned int v166; // eax
  __int64 v167; // rdi
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  unsigned __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // r8
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  char v176; // r8
  unsigned __int8 v178; // [rsp+50h] [rbp-B0h]
  __int64 v180; // [rsp+60h] [rbp-A0h]
  unsigned int v181; // [rsp+68h] [rbp-98h] BYREF
  int v182; // [rsp+6Ch] [rbp-94h]
  int v183; // [rsp+70h] [rbp-90h]
  unsigned int v184; // [rsp+74h] [rbp-8Ch]
  __int64 v185; // [rsp+78h] [rbp-88h]
  __int64 v186; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v187; // [rsp+88h] [rbp-78h]
  unsigned int v188; // [rsp+8Ch] [rbp-74h]
  __int64 v189; // [rsp+90h] [rbp-70h]
  struct _KTHREAD *v190; // [rsp+98h] [rbp-68h]
  __int64 v191; // [rsp+A0h] [rbp-60h]
  __int64 v192; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v193; // [rsp+B0h] [rbp-50h]
  int v194; // [rsp+B8h] [rbp-48h] BYREF
  int v195; // [rsp+BCh] [rbp-44h]
  int v196; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v197; // [rsp+C8h] [rbp-38h]
  __int64 v198; // [rsp+D0h] [rbp-30h]
  __int64 v199; // [rsp+D8h] [rbp-28h]
  __int64 v200; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v201; // [rsp+E8h] [rbp-18h]
  ULONG_PTR BugCheckParameter3; // [rsp+F0h] [rbp-10h]
  int v203; // [rsp+F8h] [rbp-8h]
  int v204; // [rsp+FCh] [rbp-4h] BYREF
  int v205; // [rsp+100h] [rbp+0h] BYREF
  int v206; // [rsp+104h] [rbp+4h]
  char v207[4]; // [rsp+108h] [rbp+8h] BYREF
  char v208[4]; // [rsp+10Ch] [rbp+Ch] BYREF
  ULONG_PTR v209; // [rsp+110h] [rbp+10h]
  __int64 v210; // [rsp+118h] [rbp+18h]
  char v211[8]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v212[5]; // [rsp+128h] [rbp+28h] BYREF
  char v213[8]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v214; // [rsp+158h] [rbp+58h] BYREF
  int v215; // [rsp+160h] [rbp+60h] BYREF
  __int16 v216; // [rsp+164h] [rbp+64h]
  __int16 v217; // [rsp+166h] [rbp+66h]
  __int64 v218; // [rsp+168h] [rbp+68h]
  __int64 v219; // [rsp+170h] [rbp+70h]
  __int64 v220; // [rsp+178h] [rbp+78h]
  _BYTE v221[152]; // [rsp+180h] [rbp+80h] BYREF
  int v222; // [rsp+220h] [rbp+120h] BYREF
  __int16 v223; // [rsp+224h] [rbp+124h]
  __int16 v224; // [rsp+226h] [rbp+126h]
  __int64 v225; // [rsp+228h] [rbp+128h]
  __int64 v226; // [rsp+230h] [rbp+130h]
  __int64 v227; // [rsp+238h] [rbp+138h]
  _BYTE v228[152]; // [rsp+240h] [rbp+140h] BYREF

  v9 = a2;
  v210 = a8;
  v185 = a2;
  v217 = 0;
  memset(v221, 0, sizeof(v221));
  v224 = 0;
  memset(v228, 0, sizeof(v228));
  if ( (*(_DWORD *)(v9 + 48) & 0x70) == 0x20
    && (unsigned int)MiImageVadHotPatchEligible(v9)
    && MiGetImageHotPatchTableAddress(v9) <= a4 )
  {
    return 3221225541LL;
  }
  ProtectionMask = MiMakeProtectionMask(a5);
  v188 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v182 = ProtectionMask & 5;
  v12 = ProtectionMask & 0xFFFFFFFE;
  v198 = 0LL;
  v199 = 0LL;
  v225 = 20LL;
  if ( v182 != 5 )
    v12 = ProtectionMask;
  v226 = 0LL;
  v184 = v12;
  v13 = 0LL;
  v223 = 0;
  v222 = 1;
  v227 = 0LL;
  BugCheckParameter4 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v201 = BugCheckParameter4;
  CurrentThread = KeGetCurrentThread();
  v16 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = a1;
  v218 = 20LL;
  v215 = 1;
  v216 = 4;
  v219 = 0LL;
  v180 = a1 + 1280;
  v18 = *(_QWORD *)(a1 + 1296);
  v220 = 0LL;
  v197 = v16;
  v190 = CurrentThread;
  v195 = 0;
  v186 = 0LL;
  if ( *(_QWORD *)(v18 + 360) )
  {
    v140 = *(unsigned int *)(v9 + 52);
    LODWORD(v140) = v140 & 0x7FFFFFFF;
    if ( v140 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31) )
    {
      v141 = MiLockWorkingSetShared(v180);
      MiComputePageCommitment(a3, a4, v9, v141, 0, &v186);
      MiUnlockWorkingSetShared(v180, v141);
      if ( v186 )
      {
        result = MiChargeFullProcessCommitment(a1, v186);
        if ( (int)result < 0 )
          return result;
      }
      CurrentThread = v190;
      v17 = a1;
      v16 = v197;
    }
  }
  v200 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 1454));
  if ( v182 == 5 )
  {
    v87 = MiCountSharedPages(v9, BugCheckParameter4, v16);
    v13 = v87;
    if ( a6 == 1 )
    {
      v135 = ((__int64)(v16 - BugCheckParameter4) >> 3) - v87;
      v96 = v135 == -1;
      v136 = v135 + 1;
      v198 = v136;
      if ( !v96 && !(unsigned int)MiChargeCommit(v200, v136, 0LL) )
      {
        if ( v186 )
          MiReturnFullProcessCommitment(a1, v186);
        return 3221225773LL;
      }
      v13 = 0LL;
    }
    else if ( v87 )
    {
      v109 = MiChargeFullProcessCommitment(a1, v87);
      if ( v109 < 0 )
      {
        if ( v186 )
          MiReturnFullProcessCommitment(a1, v186);
        return (unsigned int)v109;
      }
    }
    v17 = a1;
    CurrentThread = v190;
  }
  v19 = *(_DWORD *)(v9 + 48);
  if ( (v19 & 0x100000) != 0 )
  {
    if ( *(int *)(v9 + 52) < 0 || (v19 & 0x70) != 0 || (v19 & 0x400000) != 0 || (v19 & 0xC0000u) >= 0x80000 )
      goto LABEL_10;
  }
  else
  {
    if ( (*(_DWORD *)(v9 + 48) & 0xF80) != 0xC00 )
      goto LABEL_10;
    v88 = *(__int64 **)(v9 + 72);
    if ( !v88 )
      goto LABEL_10;
    if ( (v19 & 0x70) == 0x10 )
      goto LABEL_10;
    v89 = *v88;
    if ( *(_QWORD *)(v89 + 64) || (*(_DWORD *)(v89 + 56) & 0x1000) == 0 )
      goto LABEL_10;
  }
  --CurrentThread->SpecialApcDisable;
  v195 = 1;
  v90 = v17 + 888;
  ExAcquirePushLockExclusiveEx(v17 + 888, 0LL);
  v91 = MiCommitPageTablesForVad(v9, a3);
  if ( v91 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v90);
    v194 = 0;
    v142 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v90) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v142->ApcState.Process);
    else
      SessionId = -1;
    --v142->SpecialApcDisable;
    v144 = ++v142->AbAllocationRegionCount;
    v145 = ((char)v142->AbEntrySummary | (char)v142->AbOrphanedEntrySummary) ^ 0x3F;
    v96 = !_BitScanReverse((unsigned int *)&v146, v145);
    v203 = v146;
    if ( v96 )
      goto LABEL_265;
    while ( 1 )
    {
      v147 = 1 << v146;
      v148 = v146;
      v149 = &v142->LockEntries[v148];
      v145 &= ~v147;
      if ( (v149->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v149->LockState.0 & 1) == 0
        && (*(_QWORD *)&v149->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v90 & 0x7FFFFFFFFFFFFFFCLL)
        && v149->LockState.SessionId == SessionId )
      {
        v149->AcquiredByte &= ~1u;
        if ( v149->LockState.0 )
          break;
      }
      v96 = !_BitScanReverse((unsigned int *)&v146, v145);
      v203 = v146;
      if ( v96 )
        goto LABEL_265;
    }
    if ( !v149 )
    {
LABEL_265:
      if ( (*((_DWORD *)&v142->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v142, v90, SessionId, 0LL);
    }
    else
    {
      v149->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v149->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v142->LockEntries[v148].TreeNode);
      v194 = v149->BoostBitmap.AllFields & 0x1FFFF;
      v149->BoostBitmap.AllFields &= 0xFFFE0000;
      v149->ThreadLocalFlags &= ~1u;
      v149->LockState.0 = 0LL;
      v150 = ((char *)v149 - (char *)v142 - 800) / 96;
      if ( v144 == 1 )
        v142->AbEntrySummary |= 1 << v150;
      else
        _InterlockedOr8((volatile signed __int8 *)&v142->AbOrphanedEntrySummary, 1 << v150);
    }
    --v142->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v142, v90, &v194);
    v96 = v142->SpecialApcDisable++ == -1;
    if ( v96 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v142->ApcState.ApcListHead[0].Flink != &v142->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)v190);
    if ( v198 )
    {
      MiReturnCommit(v200, v13);
    }
    else if ( v13 )
    {
      v151 = a1;
      MiReturnFullProcessCommitment(a1, v13);
      goto LABEL_261;
    }
    v151 = a1;
LABEL_261:
    if ( v186 )
      MiReturnFullProcessCommitment(v151, v186);
    return (unsigned int)v91;
  }
  v9 = v185;
LABEL_10:
  if ( v13 )
  {
    v110 = *(unsigned int *)(v9 + 52);
    LODWORD(v110) = v110 & 0x7FFFFFFF;
    v111 = v13 + (v110 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31));
    *(_DWORD *)(v9 + 52) ^= (v111 ^ *(_DWORD *)(v9 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v9 + 34) = v111 >> 31;
  }
  v20 = a1 + 1280;
  v183 = 1;
  v191 = 0LL;
  v193 = 0LL;
  v21 = *(_BYTE *)(a1 + 1464) & 7;
  if ( v21 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v189 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LOBYTE(CurrentIrql) = v189;
    }
  }
  else
  {
    if ( v21 == 2 )
      v22 = &dword_140466F00;
    else
      v22 = (LONG *)(a1 + 1472);
    v23 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v22, v23);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v152 = SchedulerAssist[5];
          SchedulerAssist[5] = v152 + 1;
          if ( v152 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v22);
      v26 = *v22 & 0x7FFFFFFF;
      if ( v26 != _InterlockedCompareExchange(v22, v26 + 1, v26) )
      {
        v134 = CurrentPrcb->SchedulerAssist;
        if ( v134 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v153 = v134[5] - 1;
            v134[5] = v153;
            if ( !v153 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v22, v23);
      }
    }
    if ( v22[1] )
      _InterlockedExchange(v22 + 1, 0);
    v20 = a1 + 1280;
    LOBYTE(CurrentIrql) = v23;
    v189 = v23;
  }
  MiQueryAddressState(
    a3,
    a3,
    (unsigned __int8)CurrentIrql,
    v9,
    0LL,
    (__int64)&v181,
    (__int64)v208,
    (__int64)v213,
    (__int64)v207);
  *a7 = MmProtectToValue[v181];
  v31 = (*(_DWORD *)(v9 + 48) >> 12) & 0x3F;
  v187 = v31;
  if ( BugCheckParameter4 <= v197 )
  {
    while ( 1 )
    {
      if ( (BugCheckParameter4 & 0xFFF) != 0 && v183 != 1 )
        goto LABEL_25;
      v183 = 0;
      if ( v193 )
      {
        MiFlushTbList(&v222, v28, v29, v30);
        MiUnlockPageTableInternal(v20);
      }
      if ( (*(_BYTE *)(v20 + 184) & 7) == 2 )
        v48 = &dword_140466F00;
      else
        v48 = (LONG *)(v20 + 192);
      if ( (*v48 & 0x40000000) != 0 )
        goto LABEL_199;
      v49 = KeGetCurrentPrcb();
      DpcRequestSummary = v49->DpcRequestSummary;
      DpcWatchdogCount = v49->DpcWatchdogCount;
      DpcTimeCount = v49->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
        break;
      v53 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_59;
      if ( v49->QuantumEnd )
      {
        v133 = 1;
        goto LABEL_195;
      }
LABEL_289:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v133 = 5;
      }
      else
      {
        if ( v49->CurrentThread == v49->IdleThread )
          goto LABEL_212;
        v133 = 6;
      }
LABEL_195:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v133, DpcWatchdogCount, DpcTimeCount);
      if ( v133 )
      {
        v20 = a1 + 1280;
LABEL_199:
        MiUnlockWorkingSetShared(v20, (unsigned __int8)v189);
        MiLockWorkingSetShared(v20);
      }
LABEL_60:
      v55 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v193 = v55;
      BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
      v56 = BugCheckParameter3 + 1280;
      v57 = (__int64)(BugCheckParameter4 << 25) >> 16;
      v58 = v57 < 0xFFFFF68000000000uLL || v57 > 0xFFFFF6FFFFFFFFFFuLL;
      while ( 1 )
      {
        if ( v58 )
        {
          v59 = MiFastLockLeafPageTable(v56, v57, 0LL);
          if ( v59 )
          {
            if ( v59 == 1 )
              break;
            v154 = v55;
            while ( v59 != 1LL )
              v154 = ((v154 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            MiUnlockPageTable(v56, v154);
            v31 = v187;
            BugCheckParameter4 = v201;
          }
        }
        if ( MiLockLowestValidPageTable(v56, BugCheckParameter4, &v214) == v55 )
          break;
        MiUnlockPageTableInternal(v56);
        MiFlushTbList(&v222, v122, v123, v124);
        MiUnlockWorkingSetShared(v56, (unsigned __int8)v189);
        v125 = MmAccessFault(((unsigned __int64)v31 << 57) | 0x100000000000002LL, BugCheckParameter4);
        v126 = v125;
        if ( v125 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v126, BugCheckParameter3, BugCheckParameter4);
        }
        MiLockWorkingSetShared(v56);
        v55 = v193;
      }
      v9 = v185;
LABEL_25:
      v32 = *(_QWORD *)BugCheckParameter4;
      v33 = (__int64)(BugCheckParameter4 << 25) >> 16;
      if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v156 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
          v157 = v32 | 0x20;
          if ( (v156 & 0x20) == 0 )
            v157 = *(_QWORD *)BugCheckParameter4;
          v32 = v157;
          if ( (v156 & 0x42) != 0 )
            v32 = v157 | 0x42;
        }
      }
      v192 = v32;
      if ( (v32 & 1) != 0 )
      {
        v34 = MI_READ_PTE_LOCK_FREE(&v192);
        BugCheckParameter3 = v35 & (v34 >> 12);
        v36 = 48 * BugCheckParameter3 - 0x58000000000LL;
        v209 = v36;
        if ( (v37 & *(_QWORD *)(v36 + 40)) != 0 )
        {
          v76 = *(_QWORD *)(v36 + 8);
          if ( (v76 | 0x8000000000000000uLL) != MiGetProtoPteAddress(v185, v33 >> 12, 0LL, v211) )
          {
            v137 = 0LL;
            v138 = 0LL;
            if ( v76 < 0 )
            {
              CloneAddress = MiLocateCloneAddress(a1, v76 | 0x8000000000000000uLL);
              v28 = *(_QWORD *)(v159 + 1296);
              v138 = CloneAddress;
              if ( *(_QWORD *)(v28 + 360) <= *(_QWORD *)(CloneAddress + 96) )
                v138 = v137;
            }
            MiFlushTbList(&v222, v28, v137, v77);
            v139 = MiCopyOnWrite((__int64)(BugCheckParameter4 << 25) >> 16);
            if ( v139 < 0 )
            {
              MiUnlockPageTableInternal(v180);
              MiUnlockWorkingSetShared(v180, (unsigned __int8)v189);
              MiCopyOnWriteCheckConditions(v180, (unsigned int)v139);
              v183 = 1;
              v193 = 0LL;
              MiLockWorkingSetShared(v180);
            }
            else if ( v138 )
            {
              --v186;
            }
            goto LABEL_48;
          }
          v36 = v209;
          v30 = 0xFFFFF68000000000uLL;
        }
        if ( (a5 & 0x101) != 0 || a6 == 1 && (*(_QWORD *)(v36 + 40) & 0x200000000000000LL) == 0 )
        {
          v117 = v197;
          if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) != (v197 & 0xFFFFFFFFFFFFF000uLL) )
            v117 = (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          LOBYTE(v30) = 0;
          v118 = BugCheckParameter4;
          v178 = 0;
          if ( BugCheckParameter4 <= v117 )
          {
            v119 = (_DWORD *)v210;
            while ( 1 )
            {
              v192 = MI_READ_PTE_LOCK_FREE(v118);
              if ( (v192 & 1) == 0
                || (a5 & 0x101) == 0
                && (v121 != 1
                 || (v120 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v192) >> 12) & 0xFFFFFFFFFLL)
                                      - 0x57FFFFFFFD8LL),
                     (v120 & 0x200000000000000LL) != 0)) )
              {
LABEL_180:
                v31 = v187;
                BugCheckParameter4 = v201;
                goto LABEL_181;
              }
              if ( (MiGetWsleContents(v120, v33) & 0xF) == 8 )
                break;
              MiInsertTbFlushEntry(&v215, v33, 1LL);
              v30 = v178;
              if ( v178 == 1 || HIDWORD(v218) == (_DWORD)v218 )
                goto LABEL_360;
LABEL_179:
              v118 += 8LL;
              v33 += 4096LL;
              if ( v118 > v117 )
                goto LABEL_180;
            }
            v30 = 1LL;
            v178 = 1;
            *v119 = 1;
LABEL_360:
            if ( HIDWORD(v218) )
            {
              MiFreeWsleList(v180, (__int64)&v215, 0);
              v30 = v178;
            }
            if ( (_BYTE)v30 == 1 )
            {
              MiUnlockVa(v180, v33);
              v178 = 0;
            }
            goto LABEL_179;
          }
LABEL_181:
          if ( HIDWORD(v218) )
            MiFreeWsleList(v180, (__int64)&v215, 0);
          goto LABEL_48;
        }
        if ( (*(_QWORD *)(v36 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( v182 != 5 && (v32 & 0x200) != 0 )
            ++v191;
          v78 = (v33 >> 9) & 0x7FFFFFFFF8LL;
          v79 = *(_QWORD *)(v78 + v30);
          v80 = v78 + v30;
          if ( v80 >= 0xFFFFF6FB7DBED000uLL
            && v80 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v79 & 1) != 0
            && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
          {
            v160 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v160 )
            {
              v161 = *(_QWORD *)(v160 + 8 * ((v80 >> 3) & 0x1FF));
              v162 = v79 | 0x20;
              if ( (v161 & 0x20) == 0 )
                v162 = v79;
              v79 = v162;
              if ( (v161 & 0x42) != 0 )
                v79 = v162 | 0x42;
            }
          }
          v81 = (v79 >> 60) & 7;
          if ( v81 )
          {
            if ( (*(_QWORD *)v80 & 0x18) == 8 )
            {
              v81 |= 0x18u;
            }
            else if ( (*(_QWORD *)v80 & 0x10) != 0 )
            {
              v81 |= 8u;
            }
          }
          else
          {
            v112 = MI_READ_PTE_LOCK_FREE(v36 + 16);
            v114 = *(_QWORD *)(v113 + 8);
            v115 = (v112 >> 5) & 0x1F;
            if ( v114 >= 0 )
            {
              v81 = MmMakeProtectNotWriteCopy[v115];
            }
            else
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process[1].Affinity.Bitmap[12] && MiLocateCloneAddress(Process, v114 | 0x8000000000000000uLL) )
                LODWORD(v115) = MmMakeProtectNotWriteCopy[v115];
              v81 = v115;
            }
          }
          v47 = v185;
          v181 = v81;
          v82 = MiSanitizePfnProtection(v185, v81, v188, v80);
          v84 = *(_QWORD *)v83;
          v39 = v82;
          if ( v83 >= 0xFFFFF6FB7DBED000uLL
            && v83 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v84 & 1) != 0
            && ((v84 & 0x20) == 0 || (v84 & 0x42) == 0) )
          {
            v163 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v163 )
            {
              v164 = *(_QWORD *)(v163 + 8 * ((v83 >> 3) & 0x1FF));
              HIBYTE(v163) = HIBYTE(*(_QWORD *)v83);
              if ( (v164 & 0x20) == 0 )
                v163 = *(_QWORD *)v83;
              HIBYTE(v84) = HIBYTE(v163);
              if ( (v164 & 0x42) != 0 )
                HIBYTE(v84) = HIBYTE(v163);
            }
          }
          v85 = *(_QWORD *)v83;
          do
          {
            v86 = v85;
            v85 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v83,
                    ((unsigned __int64)(unsigned __int8)((16 * (v39 & 7)) | HIBYTE(v84) & 0xF) << 56) | v85 & 0x80FFFFFFFFFFFFFFuLL,
                    v85);
          }
          while ( v86 != v85 );
        }
        else
        {
          v38 = v185;
          v39 = v184;
          if ( (*(_DWORD *)(v185 + 48) & 0x500000) != 0x500000
            || (v40 = MiVadPageSizes[((unsigned __int64)*(unsigned int *)(v185 + 48) >> 18) & 3], v40 == 16) )
          {
            v40 = 1LL;
          }
          v41 = 0LL;
          v42 = 0LL;
          if ( v40 )
          {
            v43 = v36 + 16;
            do
            {
              v204 = v41;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 8), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v204);
                  while ( *(__int64 *)(v43 + 8) < 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 8), 0x3FuLL) );
                v38 = v185;
                v41 = 0LL;
              }
              if ( v42 )
                goto LABEL_42;
              v44 = (*(_DWORD *)v43 >> 5) & 0x1F;
              if ( v39 == 24 )
              {
                v39 = 24;
              }
              else
              {
                if ( v44 == 24 )
                {
                  v165 = *(_DWORD *)(v38 + 48);
                  v166 = (v165 & 0x100000) != 0 ? v165 >> 7 : *(unsigned __int16 *)(*(_QWORD *)(v38 + 72) + 32LL) >> 1;
                  v44 = v166 & 0x1F;
                  if ( v44 == 24 )
                    LOBYTE(v44) = v41;
                }
                v45 = v44 & 0x18;
                if ( v45 )
                {
                  if ( v45 != 16 )
                  {
                    if ( v45 == 8 )
                    {
                      v39 = v39 & 0xFFFFFFE7 | 8;
                    }
                    else if ( v45 == 24 )
                    {
                      v39 |= 0x18u;
                    }
                    goto LABEL_42;
                  }
LABEL_357:
                  v39 &= ~8u;
                  goto LABEL_42;
                }
                v46 = v39 & 0x18;
                if ( v46 == 24 )
                {
                  v39 &= 0xFFFFFFE7;
                }
                else if ( v46 == 8 )
                {
                  goto LABEL_357;
                }
              }
LABEL_42:
              if ( *(_QWORD *)v43 )
                *(_QWORD *)v43 = (32LL * (v39 & 0x1F)) | *(_QWORD *)v43 & 0xFFFFFFFFFFFFFC1FuLL;
              else
                *(_QWORD *)v43 = MiSwizzleInvalidPte(32LL * (v39 & 0x1F), v38, v41, v30);
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 8), 0x7FFFFFFFFFFFFFFFuLL);
              v43 += 48LL;
              ++v42;
            }
            while ( v42 < v40 );
          }
          v47 = v185;
        }
        MiRevertValidPte(v47, BugCheckParameter4, v39, BugCheckParameter3, (__int64)&v222);
LABEL_47:
        BugCheckParameter4 += 8LL;
        v201 = BugCheckParameter4;
        goto LABEL_48;
      }
      if ( (v32 & 0x400) != 0 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(v32) )
          goto LABEL_152;
        v167 = v32;
        if ( qword_140465800 && (v32 & 0x10) == 0 )
          v167 = v32 & ~qword_140465800;
        if ( v167 >> 16 == MiGetProtoPteAddress(v9, v33 >> 12, 0LL, v211) )
        {
LABEL_152:
          if ( v182 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v32) && (v32 & 0xA0) == 0xA0 )
            ++v191;
          if ( (unsigned int)MiIsPrototypePteVadLookup(v32) )
            v103 = v32 >> 5;
          else
            LODWORD(v103) = *(unsigned __int16 *)(*(_QWORD *)(v9 + 72) + 32LL) >> 1;
          v181 = v103 & 0x1F;
          v104 = MiSanitizePfnProtection(v9, v103 & 0x1F, v188, v102);
          v192 = MiSwizzleInvalidPte(32 * (v104 & 0x1F | 0xFFFFFFFFF8000020uLL), v105, v106, v107);
          if ( !MiPteInShadowRange(BugCheckParameter4) )
          {
LABEL_157:
            *(_QWORD *)BugCheckParameter4 = v28;
            goto LABEL_47;
          }
          if ( (unsigned int)MiPteHasShadow(v108) )
          {
            if ( !HIBYTE(word_1404658EC) && (v29 & 1) != 0 )
              v28 |= 0x8000000000000000uLL;
            goto LABEL_376;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
            || (v29 & 1) == 0 )
          {
            goto LABEL_157;
          }
LABEL_407:
          v28 |= 0x8000000000000000uLL;
          goto LABEL_157;
        }
        MiFlushTbList(&v222, v168, v169, v170);
        if ( (int)MiMakeProtoLeafValid(BugCheckParameter4) < 0 )
        {
          BugCheckParameter4 += 8LL;
          v201 = BugCheckParameter4;
        }
        v183 = 1;
      }
      else
      {
        if ( (v32 & 0x800) == 0 )
        {
          v65 = 0;
          if ( a6 == 1 )
          {
            if ( v32 )
            {
              MiReleasePageFileSpace(v200, v32, 1LL);
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v32) )
LABEL_189:
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 928), 0xFFFFFFFFFFFFFFFFuLL);
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(BugCheckParameter4 << 25) >> 16);
              MiDecreaseUsedPtesCount(UsedPtesHandle, 1uLL);
              v65 = 1;
            }
          }
          else if ( v32 )
          {
            v181 = (v32 >> 5) & 0x1F;
            v184 = MiSanitizePfnProtection(v9, (v32 >> 5) & 0x1F, v184, 0xFFFFF68000000000uLL);
            v192 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)(32 * v184)) & 0x3E0;
            if ( !MiPteInShadowRange(BugCheckParameter4) )
              goto LABEL_157;
            if ( (unsigned int)MiPteHasShadow(v132) )
            {
              if ( !HIBYTE(word_1404658EC) && (v29 & 1) != 0 )
                v28 |= 0x8000000000000000uLL;
LABEL_376:
              *(_QWORD *)BugCheckParameter4 = v28;
              MiWritePteShadow(BugCheckParameter4, v28);
              goto LABEL_47;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
              || (v29 & 1) == 0 )
            {
              goto LABEL_157;
            }
            goto LABEL_407;
          }
          v66 = (v33 >> 18) & 0x3FFFFFF8;
          v67 = *(_QWORD *)(v66 - 0x904C0000000LL);
          v68 = v66 - 0x904C0000000LL;
          if ( (unsigned __int64)(v66 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
            && v68 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v67 & 1) != 0
            && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
          {
            v171 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v171 )
            {
              v172 = *(_QWORD *)(v171 + 8 * ((v68 >> 3) & 0x1FF));
              v173 = v67 | 0x20;
              if ( (v172 & 0x20) == 0 )
                v173 = *(_QWORD *)(v66 - 0x904C0000000LL);
              v67 = v173;
              if ( (v172 & 0x42) != 0 )
                v67 = v173 | 0x42;
            }
          }
          v212[0] = v67;
          v69 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v212) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v205 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v205);
            while ( *(__int64 *)(v69 + 24) < 0 );
          }
          *(_QWORD *)(v69 + 16) ^= ((unsigned int)*(_QWORD *)(v69 + 16) ^ ((unsigned int)*(_QWORD *)(v69 + 16) + 0x10000)) & 0x3FF0000;
          _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v70 = *(_QWORD *)(v69 + 8) | 0x8000000000000000uLL;
          memset(&v212[1], 0, 0x20uLL);
          if ( v70 >> 47 == -1 || v70 >> 47 == 0 )
          {
            v71 = 4LL;
            v212[1] = (((unsigned __int64)v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v212[2] = ((v212[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v212[3] = ((v212[2] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v212[4] = ((v212[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            do
            {
              v72 = v212[v71--];
              v73 = *(_QWORD *)v72;
              if ( v72 >= 0xFFFFF6FB7DBED000uLL
                && v72 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
              {
                if ( (v73 & 1) == 0 )
                  break;
                if ( (v73 & 0x20) == 0 || (v73 & 0x42) == 0 )
                {
                  v174 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( v174 )
                  {
                    v175 = *(_QWORD *)(v174 + 8 * ((v72 >> 3) & 0x1FF));
                    v176 = v73 | 0x20;
                    if ( (v175 & 0x20) == 0 )
                      v176 = v73;
                    LOBYTE(v73) = v176;
                    if ( (v175 & 0x42) != 0 )
                      LOBYTE(v73) = v176 | 0x42;
                  }
                }
              }
            }
            while ( (v73 & 1) != 0 && (v73 & 0x80u) == 0LL && v71 );
            v31 = v187;
          }
          if ( v182 != 5 && (v65 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v9, BugCheckParameter4)) )
            ++v191;
          v181 = (*(unsigned __int16 *)(*(_QWORD *)(v9 + 72) + 32LL) >> 1) & 0x1F;
          v74 = 32 * (MiSanitizePfnProtection(0LL, v181, v188, v71) & 0x1F | 0xFFFFFFFFF8000020uLL);
          if ( qword_140465800 )
          {
            if ( (qword_140465800 & v74) != 0 )
              v74 |= 0x10uLL;
            else
              v74 |= qword_140465800;
          }
          v192 = v74;
          if ( MiPteInShadowRange(BugCheckParameter4) && (unsigned int)MiPteHasShadow(v75) )
          {
            *(_QWORD *)BugCheckParameter4 = v30;
            MiWritePteShadow(BugCheckParameter4, v30);
          }
          else
          {
            *(_QWORD *)BugCheckParameter4 = v30;
          }
          goto LABEL_47;
        }
        if ( a6 == 1 )
        {
          v127 = MiTryDeleteTransitionPte(BugCheckParameter4);
          if ( v127 == 3 )
          {
            ++v199;
            goto LABEL_189;
          }
          if ( v127 != 1 )
            goto LABEL_189;
        }
        else if ( !(unsigned int)MiSetProtectionOnTransitionPte(v9, BugCheckParameter4, v184, 1LL) )
        {
          goto LABEL_47;
        }
      }
LABEL_48:
      v9 = v185;
      if ( BugCheckParameter4 > v197 )
        goto LABEL_66;
      v20 = a1 + 1280;
    }
    v53 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v133 = 2;
      goto LABEL_195;
    }
    if ( v49->QuantumEnd )
    {
      v133 = 3;
      goto LABEL_195;
    }
    NextThread = v49->NextThread;
    if ( NextThread && NextThread != v49->CurrentThread )
    {
      v133 = 4;
      goto LABEL_195;
    }
LABEL_59:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_60;
    if ( !v53 )
    {
LABEL_212:
      _disable();
      v49->DpcWatchdogCount = 0;
      v49->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(v49);
      _enable();
      v133 = 0;
      goto LABEL_195;
    }
    goto LABEL_289;
  }
LABEL_66:
  MiFlushTbList(&v222, v28, v29, v30);
  if ( v193 )
    MiUnlockPageTableInternal(v180);
  MiUnlockWorkingSetShared(v180, (unsigned __int8)v189);
  if ( v195 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 888), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 888);
    v196 = 0;
    v92 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 888) == 1 )
      v93 = MmGetSessionIdEx((__int64)v92->ApcState.Process);
    else
      v93 = -1;
    --v92->SpecialApcDisable;
    v94 = ++v92->AbAllocationRegionCount;
    v95 = ((char)v92->AbEntrySummary | (char)v92->AbOrphanedEntrySummary) ^ 0x3F;
    v96 = !_BitScanReverse((unsigned int *)&v97, v95);
    v206 = v97;
    if ( v96 )
      goto LABEL_165;
    while ( 1 )
    {
      v98 = 1 << v97;
      v99 = v97;
      v100 = &v92->LockEntries[v99];
      v95 &= ~v98;
      if ( (v100->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v100->LockState.0 & 1) == 0
        && (*(_QWORD *)&v100->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 888) & 0x7FFFFFFFFFFFFFFCLL)
        && v100->LockState.SessionId == v93 )
      {
        v100->AcquiredByte &= ~1u;
        if ( v100->LockState.0 )
          break;
      }
      v96 = !_BitScanReverse((unsigned int *)&v97, v95);
      v206 = v97;
      if ( v96 )
        goto LABEL_165;
    }
    if ( !v100 )
    {
LABEL_165:
      if ( (*((_DWORD *)&v92->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v92, a1 + 888, v93, 0LL);
    }
    else
    {
      v100->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v100->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v92->LockEntries[v99].TreeNode);
      v196 = v100->BoostBitmap.AllFields & 0x1FFFF;
      v100->BoostBitmap.AllFields &= 0xFFFE0000;
      v100->ThreadLocalFlags &= ~1u;
      v100->LockState.0 = 0LL;
      v101 = ((char *)v100 - (char *)v92 - 800) / 96;
      if ( v94 == 1 )
        v92->AbEntrySummary |= 1 << v101;
      else
        _InterlockedOr8((volatile signed __int8 *)&v92->AbOrphanedEntrySummary, 1 << v101);
    }
    --v92->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v92, a1 + 888, &v196);
    v96 = v92->SpecialApcDisable++ == -1;
    if ( v96 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v92->ApcState.ApcListHead[0].Flink != &v92->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)v190);
  }
  v60 = v199;
  v61 = v198;
  if ( v199 && v182 == 5 )
  {
    v61 = v198 - v199;
    v199 = 0LL;
    v60 = 0LL;
  }
  v62 = v200;
  if ( v61 )
  {
    MiReturnCommit(v200, v61);
    v60 = v199;
  }
  v63 = v191;
  if ( v191 )
  {
    v129 = *(unsigned int *)(v9 + 52);
    LODWORD(v129) = v129 & 0x7FFFFFFF;
    v130 = v191 - v60;
    v131 = (v129 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31)) - v191;
    *(_DWORD *)(v9 + 52) ^= (v131 ^ *(_DWORD *)(v9 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v9 + 34) = v131 >> 31;
    MiReturnCommit(v62, v130);
    MiReturnFullProcessCharges(a1, v63);
  }
  if ( v186 )
    MiReturnFullProcessCommitment(a1, v186);
  return 0LL;
}
