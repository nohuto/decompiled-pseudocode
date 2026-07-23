/*
 * XREFs of MiCommitExistingVad @ 0x140071460
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUnlockPageTable @ 0x140192E68 (MiUnlockPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402AB1E0 (MiFlushAllFilesystemPages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitExistingVad(ULONG_PTR a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v6; // r12
  __int64 v7; // r8
  int v8; // r10d
  int v9; // r11d
  int v10; // edx
  int v11; // r10d
  int v12; // eax
  _KPROCESS *Process; // r9
  __int64 v14; // rbx
  unsigned __int64 BugCheckParameter4; // rdi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  _KPROCESS *v18; // rsi
  int v19; // ecx
  ULONG_PTR v20; // rsi
  __int64 v21; // rsi
  int v22; // r15d
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  int v25; // r13d
  unsigned __int8 v26; // al
  LONG *v27; // rsi
  unsigned __int8 v28; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v31; // ett
  __int64 v32; // r8
  unsigned __int64 v33; // r11
  __int64 v34; // r8
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // r15
  unsigned int v39; // r12d
  __int64 v40; // r13
  unsigned __int64 v41; // rsi
  int v42; // r14d
  int v43; // eax
  unsigned __int64 v44; // rdx
  ULONG_PTR v45; // r8
  _KPROCESS *v46; // r15
  unsigned __int64 *v47; // rsi
  struct _KTHREAD *v48; // rdi
  unsigned int v49; // r10d
  BOOL v50; // r14d
  __int64 v51; // rdx
  bool v52; // zf
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  _KLOCK_ENTRY *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _KTHREAD *v59; // rcx
  __int64 v60; // rbx
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 result; // rax
  int PageProtection; // eax
  unsigned __int64 valid; // rax
  int v67; // eax
  ULONG_PTR v68; // r15
  _DWORD *v69; // rcx
  unsigned __int8 v70; // r14
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 *v73; // rax
  __int64 v74; // rax
  struct _KTHREAD *v75; // rbx
  unsigned int SessionId; // r10d
  unsigned __int8 v77; // r14
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  _KLOCK_ENTRY *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 CurrentIrql; // r8
  int v86; // eax
  int v87; // eax
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rax
  unsigned __int64 v99; // rax
  int v100; // [rsp+30h] [rbp-91h]
  __int64 v101; // [rsp+38h] [rbp-89h]
  __int64 v102; // [rsp+40h] [rbp-81h]
  _KPROCESS *v103; // [rsp+48h] [rbp-79h]
  unsigned int v104; // [rsp+48h] [rbp-79h]
  int v105; // [rsp+50h] [rbp-71h] BYREF
  int v106; // [rsp+54h] [rbp-6Dh] BYREF
  __int64 v107; // [rsp+58h] [rbp-69h] BYREF
  _KPROCESS *v108; // [rsp+60h] [rbp-61h]
  int v109; // [rsp+68h] [rbp-59h]
  int v110; // [rsp+6Ch] [rbp-55h]
  unsigned __int64 v111; // [rsp+70h] [rbp-51h]
  __int64 v112; // [rsp+78h] [rbp-49h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-41h] BYREF
  __int64 v114; // [rsp+88h] [rbp-39h]
  __int64 v115; // [rsp+90h] [rbp-31h]
  int v116; // [rsp+98h] [rbp-29h]
  int v117; // [rsp+9Ch] [rbp-25h] BYREF
  int v118; // [rsp+A0h] [rbp-21h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-19h]
  __int64 v120; // [rsp+B0h] [rbp-11h]
  unsigned __int64 v121; // [rsp+B8h] [rbp-9h]
  __int64 v122; // [rsp+C0h] [rbp-1h]
  unsigned __int64 v123; // [rsp+C8h] [rbp+7h] BYREF
  unsigned __int64 v124[8]; // [rsp+D0h] [rbp+Fh] BYREF
  unsigned __int64 v126; // [rsp+128h] [rbp+67h]
  int ProtectionMask; // [rsp+130h] [rbp+6Fh]

  v126 = a2;
  v6 = a2;
  ProtectionMask = MiMakeProtectionMask(a4);
  LOBYTE(v10) = ProtectionMask;
  if ( ProtectionMask == 24 )
  {
    v10 = 24;
  }
  else
  {
    if ( v8 == 24 )
    {
      if ( (v9 & 0x4000) == 0 )
        v8 = (*(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1) & 0x1F;
      if ( v8 == 24 )
        LOBYTE(v8) = 0;
    }
    v11 = v8 & 0x18;
    if ( v11 )
    {
      switch ( v11 )
      {
        case 16:
LABEL_128:
          v10 = ProtectionMask & 0xFFFFFFF7;
          break;
        case 8:
          v10 = ProtectionMask & 0xFFFFFFE7 | 8;
          break;
        case 24:
          v10 = ProtectionMask | 0x18;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v12 = ProtectionMask & 0x18;
      if ( v12 != 24 )
      {
        if ( v12 != 8 )
          goto LABEL_6;
        goto LABEL_128;
      }
      v10 = ProtectionMask & 0xFFFFFFE7;
    }
  }
  ProtectionMask = v10;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v108 = Process;
  if ( *(int *)(a1 + 52) < 0 )
    v121 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
         - 0x98000000000LL;
  else
    v121 = 0LL;
  v122 = 32LL * (v10 & 0x1F);
  v14 = v122;
  if ( qword_14043B180 )
  {
    if ( (v122 & qword_14043B180) != 0 )
      v14 = v122 | 0x10;
    else
      v14 = qword_14043B180 | v122;
  }
  if ( (v9 & 0x80000) != 0 )
    v14 |= 0x4000000uLL;
  BugCheckParameter4 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = (v6 + v7 - 1) | 0xFFF;
  v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v111 = v17;
  v102 = (__int64)&Process[1].IdealNode[12];
  v120 = ((__int64)(((v16 >> 9) & 0x7FFFFFFFF8LL) - ((v6 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (int)MiChargeFullProcessCommitment(Process, v120) < 0 )
  {
    v110 = 0;
    v70 = MiLockWorkingSetShared(v102);
    v71 = MiComputePageCommitment((unsigned int)v6 & 0xFFFFF000, v16, a1, v70, 0, 0LL);
    MiUnlockWorkingSetShared(v102, v70);
    v72 = v120 - v71;
    v52 = v120 == v71;
    v18 = v108;
    v115 = v72;
    if ( !v52 )
    {
      result = MiChargeFullProcessCommitment(v108, v72);
      if ( (int)result < 0 )
        return result;
    }
    v17 = v111;
  }
  else
  {
    v110 = 1;
    v18 = v108;
    v115 = ((__int64)(((v16 >> 9) & 0x7FFFFFFFF8LL) - ((v6 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  }
  v19 = *(_DWORD *)(a1 + 48);
  v109 = 0;
  if ( (v19 & 0x4000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v19 & 7) != 0 )
      goto LABEL_19;
  }
  else
  {
    if ( (v19 & 0xF8) != 0xC0 )
      goto LABEL_19;
    v73 = *(__int64 **)(a1 + 72);
    if ( !v73 )
      goto LABEL_19;
    if ( (v19 & 7) == 1 )
      goto LABEL_19;
    v74 = *v73;
    if ( *(_QWORD *)(v74 + 64) || (*(_DWORD *)(v74 + 56) & 0x1000) == 0 )
      goto LABEL_19;
  }
  v109 = 1;
  --CurrentThread->SpecialApcDisable;
  v20 = (ULONG_PTR)&v18[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx(v20, 0LL);
  if ( (int)MiCommitPageTablesForVad(a1, v6, v16) < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v20);
    v105 = 0;
    v75 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v75->ApcState.Process);
    else
      SessionId = -1;
    --v75->SpecialApcDisable;
    v77 = ++v75->AbAllocationRegionCount;
    LODWORD(v78) = ((char)v75->AbEntrySummary | (char)v75->AbOrphanedEntrySummary) ^ 0x3F;
    v52 = !_BitScanReverse((unsigned int *)&v79, v78);
    v116 = v79;
    if ( v52 )
      goto LABEL_162;
    while ( 1 )
    {
      v80 = 1 << v79;
      v81 = v79;
      v82 = &v75->LockEntries[v81];
      v78 = ~v80 & (unsigned int)v78;
      if ( (v82->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v82->LockState.0 & 1) == 0
        && (*(_QWORD *)&v82->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
        && v82->LockState.SessionId == SessionId )
      {
        v82->AcquiredByte &= ~1u;
        if ( v82->LockState.0 )
          break;
      }
      v52 = !_BitScanReverse((unsigned int *)&v79, v78);
      v116 = v79;
      if ( v52 )
        goto LABEL_162;
    }
    if ( !v82 )
    {
LABEL_162:
      if ( (*((_DWORD *)&v75->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v75, v20, SessionId, 0LL);
    }
    else
    {
      v82->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v82->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v75->LockEntries[v81].TreeNode, v78);
      v105 = 0;
      v105 = v82->BoostBitmap.AllFields & 0x1FFFF;
      v82->BoostBitmap.AllFields &= 0xFFFE0000;
      v82->ThreadLocalFlags &= ~1u;
      v82->LockState.0 = 0LL;
      v83 = ((char *)v82 - (char *)v75 - 800) / 96;
      if ( v77 == 1 )
        v75->AbEntrySummary |= 1 << v83;
      else
        _InterlockedOr8((volatile signed __int8 *)&v75->AbOrphanedEntrySummary, 1 << v83);
    }
    --v75->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v75, v20, (__int64)&v105);
    v52 = v75->SpecialApcDisable++ == -1;
    if ( v52 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v75->ApcState.ApcListHead[0].Flink != &v75->152 )
      KiCheckForKernelApcDelivery(v84);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v115 )
      MiReturnFullProcessCommitment(v108);
    return 3221225773LL;
  }
LABEL_19:
  v21 = v102;
  v22 = 0;
  v23 = 0LL;
  v100 = 0;
  v24 = 0LL;
  v101 = 0LL;
  v112 = 0LL;
  v25 = 0;
  v26 = *(_BYTE *)(v102 + 184) & 7;
  v103 = 0LL;
  if ( v26 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v114 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v24 = 0LL;
    }
  }
  else
  {
    if ( v26 == 2 )
      v27 = &dword_14043C7C0;
    else
      v27 = (LONG *)(v102 + 192);
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v27, v28);
      v23 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v86 = SchedulerAssist[5];
          SchedulerAssist[5] = v86 + 1;
          if ( v86 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v23 = 0LL;
          }
        }
      }
      _m_prefetchw(v27);
      v31 = *v27 & 0x7FFFFFFF;
      if ( v31 != _InterlockedCompareExchange(v27, v31 + 1, v31) )
      {
        v69 = CurrentPrcb->SchedulerAssist;
        if ( v69 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v87 = v69[5] - 1;
            v69[5] = v87;
            if ( !v87 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v27, v28);
        v23 = 0LL;
      }
      v17 = v111;
    }
    if ( v27[1] )
      _InterlockedExchange(v27 + 1, 0);
    v24 = 0LL;
    v32 = v28;
    v22 = 0;
    v21 = v102;
    v114 = v32;
  }
  if ( BugCheckParameter4 <= v17 )
  {
    while ( 1 )
    {
      v33 = 0xFFFFF6FB7DBED7F8uLL;
      v34 = 0x8000000000000000uLL;
      v35 = 0xFFFFF6FB7DBED000uLL;
      if ( !v25 || (BugCheckParameter4 & 0xFFF) == 0 )
      {
        if ( (_WORD)v22 )
        {
          MiIncreaseUsedPtesCount(v24, (unsigned __int16)v22);
          v23 = v101;
          v100 = 0;
        }
        if ( v23 )
          MiUnlockPageTableInternal(v21, v23);
        v38 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v101 = v38;
        v39 = (*(_DWORD *)(a1 + 48) >> 8) & 0x3F;
        v104 = v39;
        BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        v40 = BugCheckParameter3 + 1280;
        v41 = (__int64)(BugCheckParameter4 << 25) >> 16;
        if ( v41 < 0xFFFFF68000000000uLL || (v42 = 0, v41 > 0xFFFFF6FFFFFFFFFFuLL) )
          v42 = 1;
        while ( 1 )
        {
          if ( v42 )
          {
            v43 = MiFastLockLeafPageTable(v40, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
            if ( v43 )
            {
              if ( v43 == 1 )
                break;
              v88 = v38;
              while ( v43 != 1LL )
                v88 = ((v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              MiUnlockPageTable(v40, v88);
              v39 = v104;
              v38 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            }
          }
          valid = MiLockLowestValidPageTable(v40, BugCheckParameter4, v124, v35);
          if ( valid == v38 )
            break;
          MiUnlockPageTableInternal(v40, valid);
          MiUnlockWorkingSetShared(v40, v114);
          v67 = MmAccessFault(((unsigned __int64)v39 << 57) | 0x100000000000002LL, BugCheckParameter4, 0LL, 0LL);
          v68 = v67;
          if ( v67 < 0 )
          {
            MiFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v68, BugCheckParameter3, BugCheckParameter4);
          }
          MiLockWorkingSetShared(v40);
          v38 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        v6 = v126;
        v44 = ((v126 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v35 = 0xFFFFF6FB7DBED000uLL;
        v45 = *(_QWORD *)v44;
        if ( v44 >= 0xFFFFF6FB7DBED000uLL
          && v44 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v89 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v89 )
          {
            v90 = *(_QWORD *)(v89 + 8 * ((v44 >> 3) & 0x1FF));
            v91 = v45 | 0x20;
            if ( (v90 & 0x20) == 0 )
              v91 = v45;
            v45 = v91;
            if ( (v90 & 0x42) != 0 )
              v45 = v91 | 0x42;
          }
        }
        BugCheckParameter3 = v45;
        if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v92 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v92 )
          {
            v93 = *(_QWORD *)(v92 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
            v94 = v45 | 0x20;
            if ( (v93 & 0x20) == 0 )
              v94 = v45;
            v45 = v94;
            if ( (v93 & 0x42) != 0 )
              v45 = v94 | 0x42;
          }
        }
        v17 = v111;
        v24 = 48 * ((v45 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v22 = v100;
        v25 = 1;
        v103 = (_KPROCESS *)v24;
        v34 = 0x8000000000000000uLL;
        v33 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v36 = *(_QWORD *)BugCheckParameter4;
      if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
        && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0 )
      {
        v24 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v24 + 640) != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v24 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v95 = *(_QWORD *)(v24 + 1544);
          if ( v95 )
          {
            v96 = *(_QWORD *)(v95 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
            v97 = v36 | 0x20;
            v24 = (unsigned __int8)v96;
            LOBYTE(v24) = v96 & 0x20;
            if ( (v96 & 0x20) == 0 )
              v97 = *(_QWORD *)BugCheckParameter4;
            v36 = v97;
            if ( (v96 & 0x42) != 0 )
              v36 = v97 | 0x42;
          }
          v34 = 0x8000000000000000uLL;
        }
      }
      v107 = v36;
      if ( !v36 )
        break;
      v37 = v36;
      v34 = (__int64)&v107;
      if ( (unsigned __int64)&v107 >= 0xFFFFF6FB7DBED000uLL )
      {
        v34 = (__int64)&v107;
        if ( (unsigned __int64)&v107 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          v34 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v34 + 640) != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
          {
            v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            v37 = v36;
            if ( v34 )
            {
              v37 = v36 | 0x20;
              v98 = *(_QWORD *)(v34 + 8 * (((unsigned __int64)&v107 >> 3) & 0x1FF));
              v34 = (unsigned __int8)v98;
              LOBYTE(v34) = v98 & 0x20;
              if ( (v98 & 0x20) == 0 )
                v37 = v36;
              if ( (v98 & 0x42) != 0 )
                v37 |= 0x42uLL;
            }
          }
        }
      }
      if ( (v37 & 0x3E0) == 0x200 && (v37 & 1) == 0 && ((v37 & 0x400) == 0 || MiIsPrototypePteVadLookup(v37)) )
      {
        v36 = v122 | v36 & 0xFFFFFFFFFFFFFC1FuLL;
        v107 = v36;
        if ( (*(_DWORD *)(a1 + 48) & 0x80000) != 0 )
        {
          v36 |= 0x4000000uLL;
          v107 = v36;
        }
        if ( BugCheckParameter4 >= v35 && BugCheckParameter4 <= v33 )
        {
          if ( (unsigned int)MiPteHasShadow(v37, v36) )
          {
            v99 = v36;
            if ( !HIBYTE(word_14043B26C) && (v36 & 1) != 0 )
              v99 = v36 | 0x8000000000000000uLL;
            *(_QWORD *)BugCheckParameter4 = v99;
            MiWritePteShadow(BugCheckParameter4);
            goto LABEL_39;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v107 & 1) != 0 )
          {
            v36 = v107 | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)BugCheckParameter4 = v36;
        goto LABEL_39;
      }
      ++v112;
      if ( *a5 )
        goto LABEL_39;
      PageProtection = MiGetPageProtection(a1, BugCheckParameter4, &v123);
      if ( !v123 )
      {
        if ( ProtectionMask != PageProtection )
          *a5 = 1;
        goto LABEL_39;
      }
      if ( (_WORD)v22 )
      {
        MiIncreaseUsedPtesCount(v103, (unsigned __int16)v22);
        v22 = 0;
        v100 = 0;
      }
      MiUnlockPageTableInternal(v102, v101);
      MiUnlockWorkingSetShared(v102, v114);
      v101 = 0LL;
      v25 = 0;
      MiLockWorkingSetShared(v102);
LABEL_40:
      if ( BugCheckParameter4 > v17 )
      {
        if ( (_WORD)v22 )
        {
          v117 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v103->ProfileListHead, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v117, v36, v34);
            while ( (__int64)v103->ProfileListHead.Flink < 0 );
          }
          v103->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((__int64)v103->Header.WaitListHead.Blink ^ ((unsigned int)v103->Header.WaitListHead.Blink ^ ((unsigned int)v103->Header.WaitListHead.Blink + ((unsigned __int16)v22 << 16))) & 0x3FF0000);
          _InterlockedAnd64((volatile signed __int64 *)&v103->ProfileListHead, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned __int16)v22 <= 1u )
            MiIsAddressValid((unsigned __int64)v103->Header.WaitListHead.Flink | 0x8000000000000000uLL);
        }
        if ( v101 )
          MiUnlockPageTableInternal(v102, v101);
        goto LABEL_69;
      }
      v24 = (ULONG_PTR)v103;
      v21 = v102;
      v23 = v101;
    }
    if ( BugCheckParameter4 <= v121 )
      ++v112;
    LOWORD(v22) = v22 + 1;
    v36 = v14;
    v100 = v22;
    if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v14) )
      {
        if ( !HIBYTE(word_14043B26C) && (v14 & 1) != 0 )
          v36 |= v34;
        *(_QWORD *)BugCheckParameter4 = v36;
        MiWritePteShadow(BugCheckParameter4);
        goto LABEL_39;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v14 & 1) != 0 )
      {
        v36 |= v34;
      }
    }
    *(_QWORD *)BugCheckParameter4 = v36;
LABEL_39:
    BugCheckParameter4 += 8LL;
    v6 += 4096LL;
    v126 = v6;
    goto LABEL_40;
  }
LABEL_69:
  MiUnlockWorkingSetShared(v102, v114);
  v46 = v108;
  if ( v109 == 1 )
  {
    v47 = &v108[1].Affinity.Bitmap[8];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v108[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v46[1].Affinity.Bitmap[8]);
    v106 = 0;
    v48 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&v46[1].Affinity.Bitmap[8]) == 1 )
      v49 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
    else
      v49 = -1;
    --v48->SpecialApcDisable;
    v50 = ++v48->AbAllocationRegionCount == 1;
    LODWORD(v51) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
    v52 = !_BitScanReverse((unsigned int *)&v53, v51);
    v118 = v53;
    if ( v52 )
      goto LABEL_111;
    while ( 1 )
    {
      v54 = 1 << v53;
      v55 = v53;
      v56 = &v48->LockEntries[v55];
      v51 = ~v54 & (unsigned int)v51;
      if ( (v56->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v56->LockState.0 & 1) == 0
        && (*(_QWORD *)&v56->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v47 & 0x7FFFFFFFFFFFFFFCLL)
        && v56->LockState.SessionId == v49 )
      {
        v56->AcquiredByte &= ~1u;
        if ( v56->LockState.0 )
          break;
      }
      v52 = !_BitScanReverse((unsigned int *)&v53, v51);
      v118 = v53;
      if ( v52 )
        goto LABEL_111;
    }
    if ( !v56 )
    {
LABEL_111:
      if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v48, (ULONG_PTR)&v46[1].Affinity.Bitmap[8], v49, 0LL);
    }
    else
    {
      v56->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v56->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v48->LockEntries[v55].TreeNode, v51);
      v106 = 0;
      v106 = v56->BoostBitmap.AllFields & 0x1FFFF;
      v56->BoostBitmap.AllFields &= 0xFFFE0000;
      v56->ThreadLocalFlags &= ~1u;
      v56->LockState.0 = 0LL;
      v57 = ((char *)v56 - (char *)v48 - 800) / 96;
      if ( v50 )
        v48->AbEntrySummary |= 1 << v57;
      else
        _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v57);
    }
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v48, (__int64)&v46[1].Affinity.Bitmap[8], (__int64)&v106);
    v52 = v48->SpecialApcDisable++ == -1;
    if ( v52 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery(v58);
    v59 = CurrentThread;
    v52 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v52 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v59->ApcState.ApcListHead[0].Flink != &v59->152 )
      KiCheckForKernelApcDelivery((__int64)v59);
  }
  if ( v110 == 1 )
  {
    v60 = v112;
    if ( v112 )
      MiReturnFullProcessCommitment(v46);
    v115 = v120 - v60;
  }
  v61 = *(_DWORD *)(a1 + 52);
  v62 = v61;
  LODWORD(v62) = v61 & 0x7FFFFFFF;
  v63 = (v115 + (v62 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31))) >> 31;
  LODWORD(v62) = v61 ^ (v115 + (v61 & 0x7FFFFFFF | (*(unsigned __int8 *)(a1 + 34) << 31)));
  *(_BYTE *)(a1 + 34) = v63;
  *(_DWORD *)(a1 + 52) = v61 ^ v62 & 0x7FFFFFFF;
  return 0LL;
}
