/*
 * XREFs of MiCreatePrototypePtes @ 0x140095A70
 * Callers:
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x140620030 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x140853B34 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiCreatePrototypePtes(__int64 *BugCheckParameter2, __int16 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PVOID PoolWithTag; // rax
  void *v9; // r12
  int v10; // ebx
  volatile LONG *v11; // rbx
  __int64 CommittedPages; // r12
  unsigned __int64 v13; // r11
  int v14; // eax
  int v15; // r13d
  volatile LONG *v16; // r15
  KIRQL v17; // al
  int v18; // r9d
  KIRQL v19; // r14
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // r13d
  int SubsectionCharges; // r15d
  _BOOL8 v24; // rdx
  __int64 v26; // r14
  struct _KTHREAD *v27; // rbx
  ULONG_PTR v28; // r9
  unsigned __int8 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // dl
  __int64 v36; // rbx
  int v37; // ebx
  int v38; // r13d
  int FileExtents; // ebx
  BOOL v40; // r8d
  bool v41; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _BOOL8 v43; // rdx
  __int64 v44; // r15
  struct _KTHREAD *v45; // rbx
  __int64 SessionId; // rdx
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  struct _KPRCB *v54; // rcx
  int v55; // [rsp+30h] [rbp-40h]
  int v56; // [rsp+34h] [rbp-3Ch] BYREF
  int v57; // [rsp+38h] [rbp-38h] BYREF
  volatile LONG *v58; // [rsp+40h] [rbp-30h]
  int v59; // [rsp+48h] [rbp-28h]
  unsigned int v60; // [rsp+4Ch] [rbp-24h]
  int v61; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v64; // [rsp+B0h] [rbp+40h]
  int v65; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v66; // [rsp+C8h] [rbp+58h]

  v5 = *BugCheckParameter2;
  v65 = 0;
  CurrentThread = KeGetCurrentThread();
  v58 = (volatile LONG *)v5;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)PoolWithTag);
  v64 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v37 = 5;
    v38 = a2 & 0x400;
    if ( !v38 || (v37 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, v37);
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
  v11 = v58;
  if ( *(_QWORD *)(v5 + 64) )
    CommittedPages = a3;
  else
    CommittedPages = MiGetCommittedPages(v58);
  LOWORD(v13) = -1;
  if ( (a2 & 4) != 0 )
  {
    v14 = 1;
    v55 = 1;
    goto LABEL_7;
  }
  v14 = MiControlAreaRequiresCharge((__int64)v58);
  v55 = v14;
  if ( v14 )
  {
LABEL_7:
    v15 = a2 & 0x180;
    while ( 1 )
    {
      if ( v14 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_24;
          }
          LOWORD(v13) = -1;
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v64 )
      {
        v65 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v11 + 40LL, 0LL);
      }
      v16 = v11 + 18;
      v17 = ExAcquireSpinLockExclusive(v11 + 18);
      v18 = v55;
      v19 = v17;
      if ( v55 != 2 )
        break;
      v40 = v64;
      v41 = v64
          ? CommittedPages == *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFF)
          : CommittedPages == MiGetCommittedPages(v11);
      if ( v41 )
        break;
      v60 = CommittedPages;
      if ( v40 )
        CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages(v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v11 + 18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v19);
      v43 = v64;
      if ( !v64 )
      {
        v44 = *(_QWORD *)v11 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v44);
        v56 = 0;
        v45 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v44) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v45->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v45->SpecialApcDisable;
        v66 = ++v45->AbAllocationRegionCount;
        v47 = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v41 = !_BitScanReverse((unsigned int *)&v48, v47);
          v59 = v48;
          if ( v41 )
            goto LABEL_93;
          v49 = (__int64)&v45->LockEntries[v48];
          v47 &= ~(1 << v48);
          if ( (*(_BYTE *)(v49 + 26) & 1) != 0
            && (*(_DWORD *)(v49 + 32) & 1) == 0
            && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v44 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v49 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v49 + 26) &= ~1u;
            if ( *(_QWORD *)(v49 + 32) )
              break;
          }
        }
        if ( !v49 )
        {
LABEL_93:
          if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v45, v44, (unsigned int)SessionId, 0LL);
          goto LABEL_105;
        }
        *(_BYTE *)(v49 + 32) |= 2u;
        if ( *(__int64 *)(v49 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49, SessionId);
        v56 = 0;
        v56 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
        *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v49 + 25) &= ~1u;
        *(_QWORD *)(v49 + 32) = 0LL;
        v50 = (v49 - (__int64)v45 - 800) / 96;
        if ( v66 == 1 )
          v45->AbEntrySummary |= 1 << v50;
        else
          _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, 1 << v50);
LABEL_105:
        --v45->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v45, v44, (__int64)&v56);
        v41 = v45->SpecialApcDisable++ == -1;
        if ( v41 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
          KiCheckForKernelApcDelivery(v51);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v11 = v58;
        v43 = 0LL;
        v65 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v60 )
      {
        MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (v11[15] & 0x3FF)), v43, v60);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
    v20 = v15 | 0x20;
    if ( v18 == 2 )
      v20 = v15 | 0x28;
    v21 = MiIncrementSubsectionViewCount(BugCheckParameter2, v20);
    v22 = v21;
    if ( v21 == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
      {
        v52 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v52);
      }
      SubsectionCharges = -1073741670;
    }
    else
    {
      if ( v21 == 3 )
        CommittedPages = 0LL;
      if ( v64 )
        *((_WORD *)BugCheckParameter2 + 16) |= 1u;
      if ( BugCheckParameter2[1] )
      {
        v35 = v20 | 0x10;
        if ( v55 != 2 )
          v35 = v20;
        v36 = MiDecrementSubsectionViewCount(BugCheckParameter2, v35);
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        SubsectionCharges = -1073741302;
        if ( v22 == 3 )
          CommittedPages = v36;
      }
      else
      {
        BugCheckParameter2[1] = (__int64)P;
        MiUpdateSystemProtoPtesTree((char *)BugCheckParameter2 + (v64 ? 112LL : 56LL), 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        SubsectionCharges = 0;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
        {
          v53 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v53);
        }
        P = 0LL;
      }
    }
    __writecr8(v19);
LABEL_24:
    v13 = -1LL;
    goto LABEL_25;
  }
  CommittedPages = 0LL;
  SubsectionCharges = -1073740277;
LABEL_25:
  v24 = v64;
  if ( !v64 && v65 == 1 )
  {
    v26 = *(_QWORD *)v58 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v13) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v26);
    v57 = 0;
    v27 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
      v28 = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v28 = 0xFFFFFFFFLL;
    --v27->SpecialApcDisable;
    v29 = ++v27->AbAllocationRegionCount;
    LODWORD(v30) = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v41 = !_BitScanReverse((unsigned int *)&v31, v30);
      v61 = v31;
      if ( v41 )
        break;
      v32 = (__int64)&v27->LockEntries[v31];
      v30 = ~(1 << v31) & (unsigned int)v30;
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
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32, v30);
            v57 = 0;
            v57 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
            *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v32 + 25) &= ~1u;
            *(_QWORD *)(v32 + 32) = 0LL;
            v33 = (v32 - (__int64)v27 - 800) / 96;
            if ( v29 == 1 )
              v27->AbEntrySummary |= 1 << v33;
            else
              _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v33);
            goto LABEL_50;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
LABEL_50:
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, (__int64)&v57);
    v41 = v27->SpecialApcDisable++ == -1;
    if ( v41 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v34);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v24 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (v58[15] & 0x3FF)), v24, CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)SubsectionCharges;
}
