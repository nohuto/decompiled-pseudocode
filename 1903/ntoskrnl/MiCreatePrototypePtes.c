/*
 * XREFs of MiCreatePrototypePtes @ 0x1400DFCE0
 * Callers:
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x140071220 (MiControlAreaRequiresCharge.c)
 *     MiGetCommittedPages @ 0x140071488 (MiGetCommittedPages.c)
 *     MiDecrementSubsectionViewCount @ 0x1400716A0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x1402DE9C8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x140689274 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x14088C5D0 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r13
  PVOID PoolWithTag; // rax
  void *v9; // r14
  int v10; // ebx
  __int64 CommittedPages; // r15
  unsigned __int64 v12; // r11
  int v13; // eax
  int v14; // r12d
  KIRQL v15; // al
  int v16; // r8d
  KIRQL v17; // bp
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  int v21; // r12d
  unsigned int v22; // r14d
  _BOOL8 v23; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  struct _KTHREAD *v27; // rbx
  ULONG_PTR v28; // r9
  unsigned __int8 v29; // r12
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // ebx
  int v38; // r12d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  bool v41; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _BOOL8 v43; // rdx
  __int64 v44; // r14
  struct _KTHREAD *v45; // rbx
  unsigned int SessionId; // edx
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  struct _KPRCB *v54; // rcx
  int v55; // [rsp+30h] [rbp-68h]
  int v56; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v57[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+40h] [rbp-58h]
  int v59; // [rsp+44h] [rbp-54h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-48h]
  BOOL v62; // [rsp+A0h] [rbp+8h]
  int v63; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v64; // [rsp+B8h] [rbp+20h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v63 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)PoolWithTag);
  v62 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v37 = 5;
    v38 = a2 & 0x400;
    if ( !v38 || (v37 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v37);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v38 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
      }
      return (unsigned int)FileExtents;
    }
    return 3221225626LL;
  }
  if ( *(_QWORD *)(v5 + 64) )
    CommittedPages = a3;
  else
    CommittedPages = MiGetCommittedPages((_QWORD *)v5);
  LOWORD(v12) = -1;
  if ( (a2 & 4) != 0 )
  {
    v13 = 1;
    v55 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v25 = 3LL;
  else
    v25 = (a2 >> 7) & 2;
  v13 = MiControlAreaRequiresCharge(v5, v25);
  v55 = v13;
  if ( v13 )
  {
LABEL_7:
    v14 = a2 & 0x180;
    while ( 1 )
    {
      if ( v13 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          v12 = -1LL;
          v22 = SubsectionCharges;
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_24;
          }
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v62 )
      {
        v63 = 1;
        CurrentThread->SpecialApcDisable += v12;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
      }
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      v16 = v55;
      v17 = v15;
      if ( v55 != 2 )
        break;
      v41 = v62
          ? CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)
          : CommittedPages == MiGetCommittedPages((_QWORD *)v5);
      if ( v41 )
        break;
      v58 = CommittedPages;
      if ( v62 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v5);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v17);
      v43 = v62;
      if ( !v62 )
      {
        v44 = *(_QWORD *)v5 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v44);
        v56 = 0;
        v45 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v44) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v45->ApcState.Process);
        else
          SessionId = -1;
        --v45->SpecialApcDisable;
        v64 = ++v45->AbAllocationRegionCount;
        v47 = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v41 = !_BitScanReverse((unsigned int *)&v48, v47);
          v57[1] = v48;
          if ( v41 )
            goto LABEL_95;
          v49 = (__int64)&v45->LockEntries[v48];
          v47 &= ~(1 << v48);
          if ( (*(_BYTE *)(v49 + 26) & 1) != 0
            && (*(_DWORD *)(v49 + 32) & 1) == 0
            && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v44 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v49 + 40) == SessionId )
          {
            *(_BYTE *)(v49 + 26) &= ~1u;
            if ( *(_QWORD *)(v49 + 32) )
              break;
          }
        }
        if ( !v49 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v45, v44, SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v49 + 32) |= 2u;
        if ( *(__int64 *)(v49 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
        v56 = 0;
        v56 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
        *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v49 + 25) &= ~1u;
        *(_QWORD *)(v49 + 32) = 0LL;
        v50 = (v49 - (__int64)v45 - 800) / 96;
        if ( v64 == 1 )
          v45->AbEntrySummary |= 1 << v50;
        else
          _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, 1 << v50);
LABEL_107:
        --v45->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v45, v44, &v56);
        v41 = v45->SpecialApcDisable++ == -1;
        if ( v41 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
          KiCheckForKernelApcDelivery(v51);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v43 = 0LL;
        v63 = 0;
      }
      LOWORD(v12) = -1;
      v13 = 2;
      if ( v58 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
          v43,
          v58);
        v13 = 2;
        LOWORD(v12) = -1;
      }
    }
    v18 = v14 | 0x20;
    if ( v16 == 2 )
      v18 = v14 | 0x28;
    v19 = MiIncrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v18);
    v21 = v19;
    if ( v19 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
      {
        v52 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v52);
      }
      v22 = -1073741670;
    }
    else
    {
      if ( v19 == 3 )
        CommittedPages = 0LL;
      if ( v62 )
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      {
        v35 = v18 | 0x10;
        if ( v55 != 2 )
          v35 = v18;
        v36 = MiDecrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v35, v20);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        v22 = -1073741302;
        if ( v21 == 3 )
          CommittedPages = v36;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = P;
        MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v62 ? 112LL : 56LL), 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        {
          v53 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v53);
        }
        P = 0LL;
        v22 = 0;
      }
    }
    __writecr8(v17);
    v12 = -1LL;
    goto LABEL_24;
  }
  CommittedPages = 0LL;
  v22 = -1073740277;
LABEL_24:
  v23 = v62;
  if ( !v62 && v63 == 1 )
  {
    v26 = *(_QWORD *)v5 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v12) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v26);
    v57[0] = 0;
    v27 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
      v28 = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v28 = 0xFFFFFFFFLL;
    --v27->SpecialApcDisable;
    v29 = ++v27->AbAllocationRegionCount;
    v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v41 = !_BitScanReverse((unsigned int *)&v31, v30);
      v59 = v31;
      if ( v41 )
        break;
      v32 = (__int64)&v27->LockEntries[v31];
      v30 &= ~(1 << v31);
      if ( (*(_BYTE *)(v32 + 26) & 1) != 0
        && (*(_DWORD *)(v32 + 32) & 1) == 0
        && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v26 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v32 + 40) == (_DWORD)v28 )
      {
        *(_BYTE *)(v32 + 26) &= ~1u;
        if ( *(_QWORD *)(v32 + 32) )
        {
          if ( v32 )
          {
            *(_BYTE *)(v32 + 32) |= 2u;
            if ( *(__int64 *)(v32 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
            v57[0] = *(_DWORD *)(v32 + 88) & 0x1FFFF;
            *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v32 + 25) &= ~1u;
            *(_QWORD *)(v32 + 32) = 0LL;
            v33 = (v32 - (__int64)v27 - 800) / 96;
            if ( v29 == 1 )
              v27->AbEntrySummary |= 1 << v33;
            else
              _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v33);
            goto LABEL_51;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
LABEL_51:
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, v57);
    v41 = v27->SpecialApcDisable++ == -1;
    if ( v41 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v34);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v23 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
      v23,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v22;
}
