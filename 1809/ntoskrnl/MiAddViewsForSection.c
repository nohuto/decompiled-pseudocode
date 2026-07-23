/*
 * XREFs of MiAddViewsForSection @ 0x140077160
 * Callers:
 *     MiReferenceDataSubsections @ 0x140026658 (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x14061EFB0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 *BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int16 v4; // di
  ULONG_PTR v6; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // rdx
  int active; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  unsigned __int64 v17; // rsi
  struct _KTHREAD *v18; // rdi
  BOOL v19; // r15d
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v31; // r10
  __int64 v32; // r11
  unsigned int v33; // r8d
  __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  unsigned __int8 v36; // al
  ULONG_PTR v37; // rcx
  _DWORD *v38; // rcx
  unsigned __int32 v39; // eax
  unsigned int v40; // esi
  int v41; // eax
  int v42; // eax
  unsigned __int8 v43; // al
  bool v44; // cf
  struct _KPRCB *v45; // rcx
  unsigned __int8 v46; // al
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // rcx
  struct _KPRCB *v49; // rcx
  unsigned __int64 v50; // rax
  struct _KTHREAD *v51; // rbx
  ULONG_PTR v52; // r9
  ULONG_PTR v53; // r10
  __int64 v54; // r11
  unsigned int v55; // r8d
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned __int8 v59; // bl
  __int64 v60; // rcx
  __int64 v61; // r14
  struct _KPRCB *v62; // rcx
  KIRQL v63; // al
  int v64; // eax
  struct _KPRCB *v65; // rcx
  struct _KPRCB *v66; // rcx
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // rbx
  unsigned int v69; // r8d
  ULONG_PTR v70; // r10
  __int64 v71; // r11
  __int64 v72; // rdx
  __int64 v73; // rcx
  _KLOCK_ENTRY *v74; // rcx
  unsigned __int8 v75; // bl
  unsigned __int8 v76; // [rsp+30h] [rbp-79h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-71h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-71h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-71h]
  int BugCheckParameter3; // [rsp+40h] [rbp-69h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-65h] BYREF
  int v82; // [rsp+48h] [rbp-61h] BYREF
  int v83; // [rsp+4Ch] [rbp-5Dh] BYREF
  int v84; // [rsp+50h] [rbp-59h] BYREF
  int v85; // [rsp+54h] [rbp-55h]
  __int64 v86; // [rsp+58h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-49h]
  _DWORD v88[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v89; // [rsp+70h] [rbp-39h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-31h]
  ULONG_PTR v91; // [rsp+80h] [rbp-29h]
  int v92; // [rsp+88h] [rbp-21h]
  int v93; // [rsp+8Ch] [rbp-1Dh]
  int v94; // [rsp+90h] [rbp-19h]
  int v95; // [rsp+94h] [rbp-15h]
  int v96; // [rsp+98h] [rbp-11h]
  __int64 v97; // [rsp+A0h] [rbp-9h]
  __int64 v98; // [rsp+A8h] [rbp-1h]
  __int64 v99; // [rsp+B0h] [rbp+7h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]
  unsigned int v101; // [rsp+110h] [rbp+67h]
  BOOL v102; // [rsp+110h] [rbp+67h]
  int v104; // [rsp+120h] [rbp+77h]
  unsigned __int8 v105; // [rsp+120h] [rbp+77h]
  KIRQL v106; // [rsp+120h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+77h]
  ULONG_PTR v108; // [rsp+128h] [rbp+7Fh]
  ULONG_PTR v109; // [rsp+128h] [rbp+7Fh]

  v3 = *BugCheckParameter2;
  v4 = a3;
  v91 = 0LL;
  v6 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v104 = 1;
    CurrentThread = 0LL;
    v86 = 0LL;
  }
  else
  {
    v27 = *(_QWORD *)v3;
    v104 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v86 = v27;
    ExAcquirePushLockExclusiveEx(v27 + 40, 0LL);
  }
  v88[1] = v4 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  v76 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 72, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v88[0] = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v41 = SchedulerAssist[5];
        SchedulerAssist[5] = v41 + 1;
        if ( v41 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(v3 + 72), 0x1Fu) )
    {
      v38 = CurrentPrcb->SchedulerAssist;
      if ( v38 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v42 = v38[5] - 1;
          v38[5] = v42;
          if ( !v42 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v88[0] = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 72), v76);
    }
    v10 = *(unsigned int *)(v3 + 72);
    if ( (*(_DWORD *)(v3 + 72) & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v10 & 0x40000000) == 0 )
        {
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 72), v10 | 0x40000000, v10);
          v21 = (_DWORD)v10 == v39;
          v10 = v39;
          if ( !v21 )
            continue;
        }
        KeYieldProcessorEx(v88, v10, a3);
        v10 = *(unsigned int *)(v3 + 72);
      }
      while ( (v10 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  if ( (v4 & 1) != 0 )
  {
    ++*(_QWORD *)(v3 + 40);
    ++*(_DWORD *)(v3 + 88);
    v4 |= 4u;
  }
  BugCheckParameter3 = -1;
  v98 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v93 = *(_DWORD *)(v6 + 44);
    v89 = v6;
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v85 = *(_DWORD *)(v6 + 52) & 0x3FFFFFFF;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        v44 = v43 < 2u;
        v28 = v76;
        if ( v44 || v76 >= 2u )
        {
LABEL_47:
          __writecr8(v28);
          if ( !v104 )
          {
            v29 = v86 + 40;
            BugCheckParameter2a = v86 + 40;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v29);
              v29 = BugCheckParameter2a;
            }
            BugCheckParameter3_4 = 0;
            BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
            else
              SessionId = 0xFFFFFFFFLL;
            v31 = BugCheckParameter1;
            --*(_WORD *)(BugCheckParameter1 + 486);
            ++*(_BYTE *)(v31 + 794);
            v32 = BugCheckParameter2a;
            v102 = *(_BYTE *)(v31 + 794) == 1;
            v99 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
            v33 = (*(char *)(v31 + 792) | *(char *)(v31 + 1422)) ^ 0x3F;
            v21 = !_BitScanReverse((unsigned int *)&v34, v33);
            v92 = v34;
            if ( v21 )
              goto LABEL_91;
            while ( 1 )
            {
              v33 &= ~(1 << v34);
              v35 = v31 + 96 * v34 + 800;
              v97 = v35;
              if ( (*(_BYTE *)(v35 + 26) & 1) != 0
                && (*(_DWORD *)(v35 + 32) & 1) == 0
                && (v98 & *(_QWORD *)(v35 + 32)) == v99
                && *(_DWORD *)(v35 + 40) == (_DWORD)SessionId )
              {
                *(_BYTE *)(v35 + 26) &= ~1u;
                if ( *(_QWORD *)(v35 + 32) )
                  break;
              }
              v21 = !_BitScanReverse((unsigned int *)&v34, v33);
              v92 = v34;
              if ( v21 )
                goto LABEL_91;
            }
            if ( !v35 )
            {
LABEL_91:
              if ( (*(_DWORD *)(v31 + 120) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, v31, BugCheckParameter2a, SessionId, 0LL);
            }
            else
            {
              *(_BYTE *)(v35 + 32) |= 2u;
              if ( *(__int64 *)(v35 + 32) < 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v35, 1LL);
                v35 = v97;
                v31 = BugCheckParameter1;
                v32 = BugCheckParameter2a;
              }
              BugCheckParameter3_4 = 0;
              BugCheckParameter3_4 = *(_DWORD *)(v35 + 88) & 0x1FFFF;
              *(_DWORD *)(v35 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v35 + 25) &= ~1u;
              *(_QWORD *)(v35 + 32) = 0LL;
              v36 = 1 << ((__int64)(v35 - v31 - 800) / 96);
              if ( v102 )
                *(_BYTE *)(v31 + 792) |= v36;
              else
                _InterlockedOr8((volatile signed __int8 *)(v31 + 1422), v36);
            }
            --*(_BYTE *)(v31 + 794);
            KiAbThreadRemoveBoosts(v31, v32, (__int64)&BugCheckParameter3_4);
            v37 = BugCheckParameter1;
            v21 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
            if ( v21 && *(_QWORD *)(v37 + 152) != v37 + 152 )
              KiCheckForKernelApcDelivery(v37);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          if ( (v4 & 2) != 0 )
            return 3221225865LL;
          result = MiCreatePrototypePtes(v6);
          v101 = result;
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result != -1073741302 )
              goto LABEL_100;
            if ( !v104 )
            {
              --CurrentThread->SpecialApcDisable;
              ExAcquirePushLockExclusiveEx(v86 + 40, 0LL);
            }
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            goto LABEL_55;
          }
          if ( !v104 )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx(v86 + 40, 0LL);
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            goto LABEL_16;
          }
LABEL_51:
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
LABEL_16:
          if ( a2 )
          {
            v13 = *(unsigned int *)(v6 + 44);
            if ( a2 <= v13 )
              goto LABEL_18;
            a2 -= v13;
          }
          v6 = *(_QWORD *)(v6 + 16);
          v91 = v89;
          if ( !v104 )
            v91 = v89;
          goto LABEL_55;
        }
        v45 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v45);
      }
      v28 = v76;
      goto LABEL_47;
    }
    if ( (v4 & 0x400) != 0 )
    {
      v101 = -1073741800;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v76 < 2u )
      {
        v66 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v66);
      }
      __writecr8(v76);
      v40 = v104;
      if ( !v104 )
      {
        v67 = v86 + 40;
        v109 = v86 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v67);
          v67 = v109;
        }
        v84 = 0;
        v68 = KeGetCurrentThread();
        BugCheckParameter2c = (ULONG_PTR)v68;
        if ( (unsigned int)MiGetSystemRegionType(v67) == 1 )
          v69 = MmGetSessionIdEx((__int64)v68->ApcState.Process);
        else
          v69 = -1;
        v70 = (ULONG_PTR)v68;
        --v68->SpecialApcDisable;
        ++v68->AbAllocationRegionCount;
        v71 = v109;
        AbAllocationRegionCount = v68->AbAllocationRegionCount;
        LODWORD(v72) = ((char)v68->AbEntrySummary | (char)v68->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v73, v72);
        v96 = v73;
        if ( v21 )
          goto LABEL_200;
        while ( 1 )
        {
          v72 = ~(1 << v73) & (unsigned int)v72;
          v74 = &v68->LockEntries[v73];
          v89 = (__int64)v74;
          if ( (v74->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v74->LockState.0 & 1) == 0
            && (v98 & *(_QWORD *)&v74->LockState.0) == (v109 & 0x7FFFFFFFFFFFFFFCLL)
            && v74->LockState.SessionId == v69 )
          {
            v74->AcquiredByte &= ~1u;
            if ( v74->LockState.0 )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v73, v72);
          v96 = v73;
          if ( v21 )
            goto LABEL_200;
        }
        if ( !v74 )
        {
LABEL_200:
          if ( (*((_DWORD *)&v68->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v68, v109, v69, 0LL);
        }
        else
        {
          v74->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v74->LockState.LockState < 0 )
          {
            KiAbEntryRemoveFromTree(&v74->TreeNode, v72);
            v70 = (ULONG_PTR)v68;
            v74 = (_KLOCK_ENTRY *)v89;
            v71 = v109;
          }
          v84 = 0;
          v84 = v74->BoostBitmap.AllFields & 0x1FFFF;
          v74->BoostBitmap.AllFields &= 0xFFFE0000;
          v74->ThreadLocalFlags &= ~1u;
          v74->LockState.0 = 0LL;
          v75 = 1 << ((char)((_BYTE)v74 - v70 - 32) / 96);
          if ( AbAllocationRegionCount == 1 )
            *(_BYTE *)(v70 + 792) |= v75;
          else
            _InterlockedOr8((volatile signed __int8 *)(v70 + 1422), v75);
        }
        --*(_BYTE *)(v70 + 794);
        KiAbThreadRemoveBoosts(v70, v71, (__int64)&v84);
        v21 = (*(_WORD *)(BugCheckParameter2c + 486))++ == 0xFFFF;
        if ( v21 && *(_QWORD *)(BugCheckParameter2c + 152) != BugCheckParameter2c + 152 )
LABEL_147:
          KiCheckForKernelApcDelivery(v60);
LABEL_148:
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
LABEL_149:
      result = v101;
      goto LABEL_150;
    }
    active = MiReferenceActiveSubsection(v6);
    v101 = active;
    if ( active >= 0 )
      break;
    if ( active != -1073741302 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v76 < 2u )
      {
        v49 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v49);
      }
      __writecr8(v76);
      v40 = v104;
      if ( !v104 )
      {
        v50 = v86 + 40;
        v108 = v86 + 40;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v50);
          v50 = v108;
        }
        v82 = 0;
        v51 = KeGetCurrentThread();
        BugCheckParameter2b = (ULONG_PTR)v51;
        if ( (unsigned int)MiGetSystemRegionType(v50) == 1 )
          v52 = (unsigned int)MmGetSessionIdEx((__int64)v51->ApcState.Process);
        else
          v52 = 0xFFFFFFFFLL;
        v53 = (ULONG_PTR)v51;
        --v51->SpecialApcDisable;
        ++v51->AbAllocationRegionCount;
        v54 = v108;
        v105 = v51->AbAllocationRegionCount;
        v89 = v108 & 0x7FFFFFFFFFFFFFFCLL;
        v55 = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
        v21 = !_BitScanReverse((unsigned int *)&v56, v55);
        v94 = v56;
        if ( v21 )
          goto LABEL_162;
        while ( 1 )
        {
          v57 = (__int64)&v51->LockEntries[v56];
          v55 &= ~(1 << v56);
          v97 = v57;
          if ( (*(_BYTE *)(v57 + 26) & 1) != 0
            && (*(_DWORD *)(v57 + 32) & 1) == 0
            && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v89
            && *(_DWORD *)(v57 + 40) == (_DWORD)v52 )
          {
            *(_BYTE *)(v57 + 26) &= ~1u;
            if ( *(_QWORD *)(v57 + 32) )
              break;
          }
          v21 = !_BitScanReverse((unsigned int *)&v56, v55);
          v94 = v56;
          if ( v21 )
            goto LABEL_162;
        }
        if ( !v57 )
        {
LABEL_162:
          if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v51, v108, v52, 0LL);
        }
        else
        {
          *(_BYTE *)(v57 + 32) |= 2u;
          if ( *(__int64 *)(v57 + 32) < 0 )
          {
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v57, v57);
            v53 = (ULONG_PTR)v51;
            v57 = v97;
            v54 = v108;
          }
          v82 = 0;
          v82 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
          *(_DWORD *)(v57 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v57 + 25) &= ~1u;
          *(_QWORD *)(v57 + 32) = 0LL;
          v58 = (__int64)((unsigned __int128)((__int64)(v57 - v53 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
          v59 = 1 << (v58 + (v58 < 0));
          if ( v105 == 1 )
            *(_BYTE *)(v53 + 792) |= v59;
          else
            _InterlockedOr8((volatile signed __int8 *)(v53 + 1422), v59);
        }
        --*(_BYTE *)(v53 + 794);
        KiAbThreadRemoveBoosts(v53, v54, (__int64)&v82);
        v21 = (*(_WORD *)(BugCheckParameter2b + 486))++ == 0xFFFF;
        if ( v21 && *(_QWORD *)(BugCheckParameter2b + 152) != BugCheckParameter2b + 152 )
          goto LABEL_147;
        goto LABEL_148;
      }
      goto LABEL_149;
    }
LABEL_55:
    if ( !v6 )
    {
LABEL_18:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
      else
        *(_DWORD *)(v3 + 72) = 0;
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      if ( v15 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v64 = v15[5] - 1;
          v15[5] = v64;
          if ( !v64 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v76 < 2u )
      {
        v65 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v65);
      }
      __writecr8(v76);
      if ( v104 )
        return 0LL;
      v17 = v86 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v17);
      v83 = 0;
      v18 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
      --v18->SpecialApcDisable;
      v19 = ++v18->AbAllocationRegionCount == 1;
      LODWORD(v20) = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
      v21 = !_BitScanReverse((unsigned int *)&v22, v20);
      v95 = v22;
      if ( v21 )
      {
LABEL_58:
        v24 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v23 = (__int64)&v18->LockEntries[v22];
          v20 = ~(1 << v22) & (unsigned int)v20;
          if ( (*(_BYTE *)(v23 + 26) & 1) != 0
            && (*(_DWORD *)(v23 + 32) & 1) == 0
            && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v24 = BugCheckParameter3;
            if ( *(_DWORD *)(v23 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v23 + 26) &= ~1u;
              if ( *(_QWORD *)(v23 + 32) )
                break;
            }
          }
          v21 = !_BitScanReverse((unsigned int *)&v22, v20);
          v95 = v22;
          if ( v21 )
            goto LABEL_58;
        }
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23, v20);
          v83 = 0;
          v83 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v25 = (v23 - (__int64)v18 - 800) / 96;
          if ( v19 )
            v18->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
LABEL_40:
          --v18->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v18, v17, (__int64)&v83);
          v21 = v18->SpecialApcDisable++ == -1;
          if ( v21 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
            KiCheckForKernelApcDelivery(v26);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, v24, 0LL);
      goto LABEL_40;
    }
  }
  v91 = v6;
  if ( v104 != 1 )
    goto LABEL_16;
  v12 = *(_DWORD *)(v6 + 52);
  if ( (v12 & 0x40000000) == 0 )
    goto LABEL_16;
  v85 = v12 & 0x3FFFFFFF;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
    v46 = KeGetCurrentIrql();
    v44 = v46 < 2u;
    v47 = v76;
    if ( !v44 && v76 < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
      goto LABEL_121;
    }
  }
  else
  {
LABEL_121:
    v47 = v76;
  }
  __writecr8(v47);
  result = MiAllocateFileExtents(v6, 0);
  v101 = result;
  if ( (int)result >= 0 )
    goto LABEL_51;
LABEL_100:
  v40 = v104;
LABEL_150:
  if ( v91 )
  {
    v106 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v61 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v106 < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62);
    }
    __writecr8(v106);
    if ( v61 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v40, v61);
    result = v101;
  }
  if ( (v4 & 1) != 0 )
  {
    v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    --*(_QWORD *)(v3 + 40);
    --*(_DWORD *)(v3 + 88);
    MiCheckControlArea(v3, v63);
    return v101;
  }
  return result;
}
