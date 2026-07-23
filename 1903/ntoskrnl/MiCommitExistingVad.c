/*
 * XREFs of MiCommitExistingVad @ 0x1400509A0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnlockPageTable @ 0x14019D098 (MiUnlockPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1402C3C00 (MiFlushAllFilesystemPages.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x1402DF518 (MiDemotePfnListChain.c)
 *     MiInitializeLargeLeafPfns @ 0x1402DFDF0 (MiInitializeLargeLeafPfns.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiChargeProcessPhysicalPages @ 0x140898420 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x140898790 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8,
        _DWORD *a9)
{
  ULONG_PTR v11; // r13
  char v13; // cl
  int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  _KPROCESS *Process; // r10
  unsigned __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  __int64 v28; // r15
  _KPROCESS *v29; // rbx
  int v30; // ecx
  ULONG_PTR v31; // rbx
  unsigned __int16 *v32; // rbx
  unsigned __int16 v33; // cx
  __int64 v34; // rdx
  int v35; // r14d
  __int64 v36; // r9
  unsigned __int8 v37; // al
  LONG *v38; // rbx
  unsigned __int8 v39; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v42; // ett
  __int64 v43; // r8
  unsigned __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r15
  unsigned int v53; // ebx
  _KPROCESS *v54; // r13
  __int64 v55; // r12
  unsigned __int64 v56; // rdi
  int v57; // r14d
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // rcx
  unsigned __int64 v61; // r8
  struct _KTHREAD *v62; // rdi
  unsigned int v63; // r11d
  unsigned __int8 v64; // r14
  unsigned int v65; // edx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  _KLOCK_ENTRY *v69; // rbx
  __int64 v70; // rdx
  struct _KTHREAD *v71; // rcx
  __int64 v72; // rbx
  unsigned int v73; // ecx
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  __int64 result; // rax
  int PageProtection; // eax
  int v78; // ebx
  int v79; // eax
  ULONG_PTR v80; // r15
  _DWORD *v81; // rcx
  __int64 v82; // rdx
  unsigned int v83; // r8d
  __int64 v84; // rcx
  __int64 v85; // r15
  __int64 v86; // rcx
  unsigned __int8 v87; // di
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // r9
  __int64 v92; // r9
  int LargePfnList; // edi
  __int64 *v94; // rax
  __int64 v95; // rax
  struct _KTHREAD *v96; // rdi
  unsigned int SessionId; // r11d
  unsigned __int8 v98; // r14
  unsigned int v99; // edx
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  _KLOCK_ENTRY *v103; // rsi
  __int64 v104; // rdx
  __int64 CurrentIrql; // r8
  int v106; // eax
  int v107; // eax
  unsigned __int64 v108; // rdx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v110; // rax
  __int64 v111; // r8
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rdx
  char v116; // r8
  unsigned __int64 v117; // rdx
  __int64 v118; // rax
  _QWORD *v119; // rcx
  unsigned __int64 v120; // r8
  __int64 v121; // r14
  __int64 v122; // rbx
  int v123; // [rsp+28h] [rbp-D8h]
  __int64 v124; // [rsp+40h] [rbp-C0h]
  __int64 v125; // [rsp+48h] [rbp-B8h]
  _KPROCESS *v126; // [rsp+50h] [rbp-B0h]
  int v127; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v128; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v129; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+70h] [rbp-90h]
  unsigned int v131; // [rsp+78h] [rbp-88h]
  int v132; // [rsp+7Ch] [rbp-84h] BYREF
  int v133; // [rsp+80h] [rbp-80h]
  int v134; // [rsp+84h] [rbp-7Ch] BYREF
  int v135; // [rsp+88h] [rbp-78h]
  __int64 v136; // [rsp+90h] [rbp-70h] BYREF
  __int64 v137; // [rsp+98h] [rbp-68h]
  __int64 v138; // [rsp+A0h] [rbp-60h]
  int v139; // [rsp+A8h] [rbp-58h]
  _DWORD v140[2]; // [rsp+ACh] [rbp-54h] BYREF
  int v141; // [rsp+B4h] [rbp-4Ch] BYREF
  int v142; // [rsp+B8h] [rbp-48h]
  __int64 v143; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v144; // [rsp+C8h] [rbp-38h]
  __int64 v145; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-28h]
  __int64 v147; // [rsp+E0h] [rbp-20h]
  __int64 v148; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v149; // [rsp+F0h] [rbp-10h]
  __int64 v150; // [rsp+F8h] [rbp-8h]
  __int64 v151; // [rsp+100h] [rbp+0h]
  _QWORD v152[4]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v153[9]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v155; // [rsp+188h] [rbp+88h]
  unsigned __int16 v156; // [rsp+190h] [rbp+90h]
  int v157; // [rsp+198h] [rbp+98h]

  v155 = a2;
  v11 = BugCheckParameter4;
  memset(v152, 0, sizeof(v152));
  if ( a4 >= 0x800 )
  {
    v157 = -1;
    goto LABEL_7;
  }
  if ( (a4 & 0xF) != 0 )
  {
    if ( (a4 & 0xF0) != 0 )
    {
      v157 = -1;
      goto LABEL_7;
    }
    v13 = MmUserProtectionToMask1[a4 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)a4 >> 4) )
    {
      v157 = -1;
      goto LABEL_7;
    }
    v13 = MmUserProtectionToMask2[(unsigned __int8)a4 >> 4];
  }
  v14 = v13;
  v157 = v13;
  if ( v13 == -1 )
    goto LABEL_158;
  if ( (a4 & 0x700) == 0 )
    goto LABEL_7;
  if ( (a4 & 0x100) != 0 )
  {
    if ( v13 == 24 || (a4 & 0x600) != 0 )
      goto LABEL_158;
    v14 = v13 | 0x10;
  }
  if ( (a4 & 0x200) != 0 )
  {
    if ( v14 != 24 )
    {
      v78 = a4 & 0x400;
      if ( !v78 )
      {
        v14 |= 8u;
        goto LABEL_125;
      }
    }
LABEL_158:
    v157 = -1;
    goto LABEL_7;
  }
  v78 = a4 & 0x400;
LABEL_125:
  if ( !v78 )
  {
LABEL_126:
    v157 = v14;
    goto LABEL_7;
  }
  if ( v14 == 24 )
  {
    v157 = -1;
  }
  else
  {
    if ( (v14 & 2) == 0 )
    {
      v14 |= 0x18u;
      goto LABEL_126;
    }
    v157 = -1;
  }
LABEL_7:
  v15 = *(unsigned int *)(v11 + 48);
  v16 = (*(_DWORD *)(v11 + 48) >> 7) & 0x1F;
  if ( v157 == 24 )
  {
    v17 = 24;
  }
  else
  {
    if ( v16 == 24 )
    {
      if ( (v15 & 0x100000) == 0 )
        v16 = (*(unsigned __int16 *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
      if ( v16 == 24 )
        LOBYTE(v16) = 0;
    }
    v17 = v16 & 0x18;
    switch ( v17 )
    {
      case 0:
        v18 = v157 & 0x18;
        if ( v18 == 24 )
        {
          v17 = v157 & 0xFFFFFFE7;
          break;
        }
        v19 = v18 == 8;
        v17 = v157;
        if ( !v19 )
          goto LABEL_12;
        goto LABEL_166;
      case 16:
        v17 = v157;
LABEL_166:
        v17 &= ~8u;
        break;
      case 8:
        v17 = v157 & 0xFFFFFFE7 | 8;
        break;
      default:
        v19 = v17 == 24;
        LOBYTE(v17) = v157;
        if ( !v19 )
          goto LABEL_12;
        v17 = v157 | 0x18;
        break;
    }
  }
  v157 = v17;
LABEL_12:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v126 = Process;
  if ( *(int *)(v11 + 52) < 0 )
  {
    v21 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
    LOBYTE(v17) = v157;
  }
  else
  {
    v21 = 0LL;
  }
  v144 = v21;
  v22 = 32LL * (v17 & 0x1F);
  v149 = v22;
  v23 = v22;
  if ( qword_140465B00 )
  {
    if ( (v22 & qword_140465B00) != 0 )
      v23 = v22 | 0x10;
    else
      v23 = qword_140465B00 | v22;
  }
  v24 = v23 | 0x4000000;
  if ( (v15 & 0x5100000) != 0x4100000 )
    v24 = v23;
  v150 = v24;
  v25 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = (a3 - 1 + a2) | 0xFFF;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v129 = v27;
  v128 = &Process[1].IdealNode[6];
  v147 = ((__int64)(v27 - v25) >> 3) + 1;
  if ( (v15 & 0x500000) == 0x500000 )
  {
    v82 = (v15 >> 18) & 3;
    v83 = MiVadPageIndices[v82];
    v84 = 16LL;
    v143 = MiVadPageSizes[v82];
    v131 = v83;
    if ( v143 != 16 )
      v84 = 1LL;
    v85 = a6 & 0x1A;
    v145 = v84;
    if ( v83 > 1 )
    {
      if ( v85 != 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v83 == 1 )
      {
        if ( v85 != 8 )
          return 3221225485LL;
      }
      else if ( v85 != 16 )
      {
        return 3221225485LL;
      }
      v86 = 2 - v83;
      do
      {
        v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v86;
      }
      while ( v86 );
      v144 = v21;
      v129 = v27;
    }
    v28 = v143;
    goto LABEL_182;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v131 = 3;
  v143 = 1LL;
  v145 = 1LL;
  v28 = 1LL;
  if ( (int)MiChargeFullProcessCommitment(Process, ((__int64)(v27 - v25) >> 3) + 1) >= 0 )
  {
    v130 = ((__int64)(v27 - v25) >> 3) + 1;
    v135 = 1;
LABEL_23:
    v29 = v126;
    goto LABEL_24;
  }
LABEL_182:
  v135 = 0;
  v87 = MiLockWorkingSetShared(v128);
  v88 = MiComputePageCommitment(v155 & 0xFFFFFFFFFFFFF000uLL, v26, v11, v87, 0, 0LL);
  MiUnlockWorkingSetShared(v128, v87);
  v130 = v147 - v88;
  if ( v147 == v88 )
    goto LABEL_202;
  v89 = v147 - v88;
  if ( v28 != 1 )
  {
    if ( !(unsigned int)MiChargeProcessPhysicalPages(v126, v89) )
      return 3221225773LL;
    v90 = *(_QWORD *)(MiLocateLockedVadEvent(v11, 16LL) + 24);
    if ( a8 != 1 && a8 != v90 )
    {
      MiReturnProcessPhysicalPages(v126, v91);
      return 3221225485LL;
    }
    if ( v90 )
    {
      if ( !(unsigned __int8)PsReferencePartitionSafe(v90) )
      {
        MiReturnProcessPhysicalPages(v126, v92);
        return 3221226656LL;
      }
    }
    else if ( (int)MiChargeFullProcessCommitment(v126, v91) < 0 )
    {
      return MiReturnProcessPhysicalPages(v126, v130);
    }
    LargePfnList = MiCreateLargePfnList(v11, v130, a7, v90, (__int64)v152);
    if ( v90 )
      PsDereferencePartition(v90);
    if ( LargePfnList < 0 )
    {
      if ( !v90 )
        MiReturnFullProcessCommitment(v126, v130);
      MiReturnProcessPhysicalPages(v126, v130);
      return (unsigned int)LargePfnList;
    }
LABEL_202:
    v27 = v129;
    goto LABEL_23;
  }
  v29 = v126;
  result = MiChargeFullProcessCommitment(v126, v89);
  if ( (int)result < 0 )
    return result;
  v27 = v129;
LABEL_24:
  v30 = *(_DWORD *)(v11 + 48);
  v133 = 0;
  if ( (v30 & 0x100000) != 0 )
  {
    if ( *(int *)(v11 + 52) >= 0 && (v30 & 0x70) == 0 && (v30 & 0x400000) == 0 && (v30 & 0xC0000u) < 0x80000 )
    {
LABEL_29:
      v133 = 1;
      --CurrentThread->SpecialApcDisable;
      v31 = (ULONG_PTR)&v29[1].Affinity.Bitmap[8];
      ExAcquirePushLockExclusiveEx(v31, 0LL);
      if ( (int)MiCommitPageTablesForVad(v11, v155) >= 0 )
        goto LABEL_30;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v31);
      v132 = 0;
      v96 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v96->ApcState.Process);
      else
        SessionId = -1;
      --v96->SpecialApcDisable;
      v98 = ++v96->AbAllocationRegionCount;
      v99 = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v100, v99);
      v139 = v100;
      if ( v19 )
        goto LABEL_232;
      while ( 1 )
      {
        v101 = 1 << v100;
        v102 = v100;
        v103 = &v96->LockEntries[v102];
        v99 &= ~v101;
        if ( (v103->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v103->LockState.0 & 1) == 0
          && (*(_QWORD *)&v103->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v31 & 0x7FFFFFFFFFFFFFFCLL)
          && v103->LockState.SessionId == SessionId )
        {
          v103->AcquiredByte &= ~1u;
          if ( v103->LockState.0 )
            break;
        }
        v19 = !_BitScanReverse((unsigned int *)&v100, v99);
        v139 = v100;
        if ( v19 )
          goto LABEL_232;
      }
      if ( !v103 )
      {
LABEL_232:
        if ( (*((_DWORD *)&v96->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v96, v31, SessionId, 0LL);
      }
      else
      {
        v103->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v103->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v96->LockEntries[v102].TreeNode);
        v132 = v103->BoostBitmap.AllFields & 0x1FFFF;
        v103->BoostBitmap.AllFields &= 0xFFFE0000;
        v103->ThreadLocalFlags &= ~1u;
        v103->LockState.0 = 0LL;
        v104 = ((char *)v103 - (char *)v96 - 800) / 96;
        if ( v98 == 1 )
          v96->AbEntrySummary |= 1 << v104;
        else
          _InterlockedOr8((volatile signed __int8 *)&v96->AbOrphanedEntrySummary, 1 << v104);
      }
      --v96->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v96, v31, &v132);
      v19 = v96->SpecialApcDisable++ == -1;
      if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( v130 )
        MiReturnFullProcessCommitment(v126, v130);
      return 3221225773LL;
    }
  }
  else if ( (v30 & 0xF80) == 0xC00 )
  {
    v94 = *(__int64 **)(v11 + 72);
    if ( v94 )
    {
      if ( (v30 & 0x70) != 0x10 )
      {
        v95 = *v94;
        if ( !*(_QWORD *)(v95 + 64) && (*(_DWORD *)(v95 + 56) & 0x1000) != 0 )
          goto LABEL_29;
      }
    }
  }
LABEL_30:
  v32 = v128;
  v33 = 0;
  v34 = 0LL;
  v156 = 0;
  v125 = 0LL;
  v35 = 0;
  v137 = 0LL;
  v36 = 0LL;
  v37 = v128[92] & 7;
  v127 = 0;
  v124 = 0LL;
  if ( v37 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v138 = CurrentIrql;
    __writecr8(2uLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_42;
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v37 == 2 )
      v38 = &dword_140467200;
    else
      v38 = (LONG *)(v128 + 96);
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v38, v39);
      v36 = 0LL;
      v34 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v106 = SchedulerAssist[5];
          SchedulerAssist[5] = v106 + 1;
          if ( v106 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v36 = 0LL;
            v34 = 0LL;
          }
        }
      }
      _m_prefetchw(v38);
      v42 = *v38 & 0x7FFFFFFF;
      if ( v42 != _InterlockedCompareExchange(v38, v42 + 1, v42) )
      {
        v81 = CurrentPrcb->SchedulerAssist;
        if ( v81 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v107 = v81[5] - 1;
            v81[5] = v107;
            if ( !v107 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v38, v39);
        v36 = 0LL;
        v34 = 0LL;
      }
      v27 = v129;
    }
    if ( v38[1] )
      _InterlockedExchange(v38 + 1, 0);
    v32 = v128;
    v43 = v39;
    v35 = 0;
    v138 = v43;
  }
  v33 = 0;
LABEL_42:
  if ( v25 > v27 )
    goto LABEL_86;
  v44 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    if ( !v35 || (v25 & 0xFFF) == 0 )
    {
      if ( v33 )
      {
        MiIncreaseUsedPtesCount(v36, v33);
        v34 = v125;
        v156 = 0;
      }
      if ( v34 )
        MiUnlockPageTableInternal(v32);
      v52 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v125 = v52;
      v53 = (*(_DWORD *)(v11 + 48) >> 12) & 0x3F;
      v54 = KeGetCurrentThread()->ApcState.Process;
      v55 = (__int64)&v54[1].IdealNode[6];
      v56 = (__int64)(v25 << 25) >> 16;
      if ( v56 < 0xFFFFF68000000000uLL || (v57 = 0, v56 > 0xFFFFF6FFFFFFFFFFuLL) )
        v57 = 1;
      while ( 1 )
      {
        if ( v57 )
        {
          v58 = MiFastLockLeafPageTable(v55, (__int64)(v25 << 25) >> 16, 0LL);
          if ( v58 )
          {
            if ( v58 == 1 )
              break;
            v108 = v52;
            while ( v58 != 1LL )
              v108 = ((v108 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v55 = (__int64)&v54[1].IdealNode[6];
            MiUnlockPageTable(&v54[1].IdealNode[6], v108);
            v52 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
        }
        if ( MiLockLowestValidPageTable(v55, v25, v153) == v52 )
          break;
        MiUnlockPageTableInternal(v55);
        MiUnlockWorkingSetShared(v55, (unsigned __int8)v138);
        v79 = MmAccessFault(((unsigned __int64)v53 << 57) | 0x100000000000002LL, v25);
        v80 = v79;
        if ( v79 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v80, (ULONG_PTR)v54, v25);
        }
        MiLockWorkingSetShared(v55);
        v52 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v59 = (v56 >> 18) & 0x3FFFFFF8;
      v60 = *(_QWORD *)(v59 - 0x904C0000000LL);
      v61 = v59 - 0x904C0000000LL;
      if ( (unsigned __int64)(v59 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
        && v61 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v60 & 1) != 0
        && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v110 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v61 >> 3) & 0x1FF));
          v111 = v60 | 0x20;
          if ( (v110 & 0x20) == 0 )
            v111 = *(_QWORD *)(v59 - 0x904C0000000LL);
          v60 = v111;
          if ( (v110 & 0x42) != 0 )
            v60 = v111 | 0x42;
        }
      }
      v148 = v60;
      v11 = BugCheckParameter4;
      v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v148) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v22 = v149;
      v35 = 1;
      v28 = v143;
      v27 = v129;
      v124 = v36;
      v127 = 1;
    }
    v45 = *(_QWORD *)v25;
    if ( v25 >= v44
      && v25 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v112 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v112 )
      {
        v113 = *(_QWORD *)(v112 + 8 * ((v25 >> 3) & 0x1FF));
        v114 = v45 | 0x20;
        if ( (v113 & 0x20) == 0 )
          v114 = *(_QWORD *)v25;
        v45 = v114;
        if ( (v113 & 0x42) != 0 )
          v45 = v114 | 0x42;
      }
    }
    v136 = v45;
    if ( !v45 )
    {
      if ( v25 <= v144 )
        v137 += v28;
      if ( v28 == 1 )
      {
        if ( v25 < v44 || v25 > 0xFFFFF6FB7DBEDFFFuLL )
          v156 += v145;
        if ( !MiPteInShadowRange(v25) )
          goto LABEL_56;
        if ( (unsigned int)MiPteHasShadow(v51) )
        {
          if ( HIBYTE(word_140465BEC) || (v116 & 1) == 0 )
            goto LABEL_284;
LABEL_283:
          v49 |= 0x8000000000000000uLL;
LABEL_284:
          *(_QWORD *)v25 = v49;
          MiWritePteShadow(v25, v49);
          goto LABEL_118;
        }
LABEL_285:
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v116 & 1) != 0 )
        {
          v49 |= 0x8000000000000000uLL;
        }
LABEL_56:
        *(_QWORD *)v25 = v49;
        goto LABEL_57;
      }
LABEL_304:
      v119 = (_QWORD *)v152[v131];
      if ( !v119 )
      {
        MiDemotePfnListChain(v152, v131, v45, v36);
        v119 = (_QWORD *)v152[v131];
      }
      v152[v131] = *v119;
      v120 = 0xFFFFFA8000000000uLL;
      v121 = (__int64)(v119 + 0xB000000000LL) / 48;
      v122 = 48 * v121 - 0x58000000000LL;
      v140[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v122 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v140);
        while ( *(__int64 *)(v122 + 24) < 0 );
      }
      *(_QWORD *)(v122 + 8) = (v25 | v131) & 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)v122 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v122 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInitializeLargeLeafPfns(v122, v126, v120, v36);
      MiInsertLargeUserMapping(v11, v155, v121, v131, v157, v123, 1);
      v27 = v129;
      v35 = v127;
      goto LABEL_118;
    }
    v46 = v45;
    if ( (unsigned __int64)&v136 >= v44
      && (unsigned __int64)&v136 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v117 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      v46 = v45;
      if ( v117 )
      {
        v46 = v45 | 0x20;
        v118 = *(_QWORD *)(v117 + 8 * (((unsigned __int64)&v136 >> 3) & 0x1FF));
        if ( (v118 & 0x20) == 0 )
          v46 = v45;
        if ( (v118 & 0x42) != 0 )
          v46 |= 0x42uLL;
      }
    }
    if ( (v46 & 0x3E0) == 0x200
      && (v46 & 1) == 0
      && ((v46 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v46)) )
    {
      if ( v28 == 1 )
      {
        v47 = v22 | v45 & 0xFFFFFFFFFFFFFC1FuLL;
        v48 = *(_DWORD *)(v11 + 48) & 0x5100000;
        v136 = v47;
        if ( v48 == 68157440 )
          v136 = v47 | 0x4000000;
        if ( !MiPteInShadowRange(v25) )
          goto LABEL_56;
        if ( (unsigned int)MiPteHasShadow(v50) )
        {
          if ( HIBYTE(word_140465BEC) || (v116 & 1) == 0 )
            goto LABEL_284;
          goto LABEL_283;
        }
        goto LABEL_285;
      }
      goto LABEL_304;
    }
    v137 += v28;
    if ( *a9 )
      goto LABEL_57;
    PageProtection = MiGetPageProtection(v11, v25);
    if ( !v151 )
    {
      if ( v157 != PageProtection || v140[1] != a5 )
        *a9 = 1;
LABEL_118:
      v36 = v124;
      v44 = 0xFFFFF6FB7DBED000uLL;
LABEL_57:
      v25 += 8 * v145;
      LODWORD(v155) = ((_DWORD)v28 << 12) + v155;
      goto LABEL_58;
    }
    if ( v156 )
    {
      MiIncreaseUsedPtesCount(v124, v156);
      v156 = 0;
    }
    MiUnlockPageTableInternal(v128);
    MiUnlockWorkingSetShared(v128, (unsigned __int8)v138);
    v125 = 0LL;
    v35 = 0;
    v127 = 0;
    MiLockWorkingSetShared(v128);
    v36 = v124;
    v44 = 0xFFFFF6FB7DBED000uLL;
LABEL_58:
    if ( v25 > v27 )
      break;
    v33 = v156;
    v32 = v128;
    v34 = v125;
  }
  if ( v156 )
  {
    v141 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v141);
        while ( *(__int64 *)(v124 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v124 + 24), 0x3FuLL) );
      v11 = BugCheckParameter4;
      v36 = v124;
    }
    *(_QWORD *)(v36 + 16) ^= ((unsigned int)*(_QWORD *)(v36 + 16) ^ ((unsigned int)*(_QWORD *)(v36 + 16) + (v156 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v156 <= 1u )
      MmIsAddressValidEx(*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL);
  }
  if ( v125 )
    MiUnlockPageTableInternal(v128);
LABEL_86:
  MiUnlockWorkingSetShared(v128, (unsigned __int8)v138);
  if ( v133 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v126[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v126[1].Affinity.Bitmap[8]);
    v134 = 0;
    v62 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&v126[1].Affinity.Bitmap[8]) == 1 )
      v63 = MmGetSessionIdEx((__int64)v62->ApcState.Process);
    else
      v63 = -1;
    --v62->SpecialApcDisable;
    v64 = ++v62->AbAllocationRegionCount;
    v65 = ((char)v62->AbEntrySummary | (char)v62->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v66, v65);
    v142 = v66;
    if ( v19 )
      goto LABEL_128;
    while ( 1 )
    {
      v67 = 1 << v66;
      v68 = v66;
      v69 = &v62->LockEntries[v68];
      v65 &= ~v67;
      if ( (v69->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v69->LockState.0 & 1) == 0
        && (*(_QWORD *)&v69->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&v126[1].Affinity.Bitmap[8] & 0x7FFFFFFFFFFFFFFCLL)
        && v69->LockState.SessionId == v63 )
      {
        v69->AcquiredByte &= ~1u;
        if ( v69->LockState.0 )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v66, v65);
      v142 = v66;
      if ( v19 )
        goto LABEL_128;
    }
    if ( !v69 )
    {
LABEL_128:
      if ( (*((_DWORD *)&v62->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v62, (ULONG_PTR)&v126[1].Affinity.Bitmap[8], v63, 0LL);
    }
    else
    {
      v69->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v69->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v62->LockEntries[v68].TreeNode);
      v134 = v69->BoostBitmap.AllFields & 0x1FFFF;
      v69->BoostBitmap.AllFields &= 0xFFFE0000;
      v69->ThreadLocalFlags &= ~1u;
      v69->LockState.0 = 0LL;
      v70 = ((char *)v69 - (char *)v62 - 800) / 96;
      if ( v64 == 1 )
        v62->AbEntrySummary |= 1 << v70;
      else
        _InterlockedOr8((volatile signed __int8 *)&v62->AbOrphanedEntrySummary, 1 << v70);
    }
    --v62->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v62, (__int64)&v126[1].Affinity.Bitmap[8], &v134);
    v19 = v62->SpecialApcDisable++ == -1;
    if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
      KiCheckForKernelApcDelivery();
    v71 = CurrentThread;
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v71->ApcState.ApcListHead[0].Flink != &v71->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v135 == 1 )
  {
    v72 = v137;
    if ( v137 )
      MiReturnFullProcessCommitment(v126, v137);
    v130 = v147 - v72;
  }
  v73 = *(_DWORD *)(v11 + 52);
  v74 = v73;
  LODWORD(v74) = v73 & 0x7FFFFFFF;
  v75 = v130 + (((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 31) | v74);
  *(_BYTE *)(v11 + 34) = v75 >> 31;
  *(_DWORD *)(v11 + 52) = v73 ^ (v75 ^ v73) & 0x7FFFFFFF;
  return 0LL;
}
