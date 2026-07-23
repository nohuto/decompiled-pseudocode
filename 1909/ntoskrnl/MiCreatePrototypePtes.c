/*
 * XREFs of MiCreatePrototypePtes @ 0x1400BFB60
 * Callers:
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140072660 (MiIncrementSubsectionViewCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x1402DE728 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14064F444 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x14088BDF0 (MiChargeLargeProtoSubsection.c)
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
  __int64 v34; // rdx
  __int64 v35; // rbx
  int v36; // ebx
  int v37; // r12d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  bool v40; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _BOOL8 v42; // rdx
  __int64 v43; // r14
  struct _KTHREAD *v44; // rbx
  unsigned int SessionId; // edx
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rdx
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  struct _KPRCB *v52; // rcx
  int v53; // [rsp+30h] [rbp-68h]
  int v54; // [rsp+34h] [rbp-64h] BYREF
  _DWORD v55[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v56; // [rsp+40h] [rbp-58h]
  int v57; // [rsp+44h] [rbp-54h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-48h]
  BOOL v60; // [rsp+A0h] [rbp+8h]
  int v61; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v62; // [rsp+B8h] [rbp+20h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v61 = 0;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8LL * a4, 0x74536D4Du);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)PoolWithTag);
  v60 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v36 = 5;
    v37 = a2 & 0x400;
    if ( !v37 || (v36 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v36);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v37 )
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
    v53 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v25 = 3LL;
  else
    v25 = (a2 >> 7) & 2;
  v13 = MiControlAreaRequiresCharge(v5, v25);
  v53 = v13;
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
      if ( !v60 )
      {
        v61 = 1;
        CurrentThread->SpecialApcDisable += v12;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v5 + 40LL, 0LL);
      }
      v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      v16 = v53;
      v17 = v15;
      if ( v53 != 2 )
        break;
      v40 = v60
          ? CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)
          : CommittedPages == MiGetCommittedPages((_QWORD *)v5);
      if ( v40 )
        break;
      v56 = CommittedPages;
      if ( v60 )
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
      v42 = v60;
      if ( !v60 )
      {
        v43 = *(_QWORD *)v5 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43);
        v54 = 0;
        v44 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v44->ApcState.Process);
        else
          SessionId = -1;
        --v44->SpecialApcDisable;
        v62 = ++v44->AbAllocationRegionCount;
        v46 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v40 = !_BitScanReverse((unsigned int *)&v47, v46);
          v55[1] = v47;
          if ( v40 )
            goto LABEL_95;
          v48 = (__int64)&v44->LockEntries[v47];
          v46 &= ~(1 << v47);
          if ( (*(_BYTE *)(v48 + 26) & 1) != 0
            && (*(_DWORD *)(v48 + 32) & 1) == 0
            && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v43 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v48 + 40) == SessionId )
          {
            *(_BYTE *)(v48 + 26) &= ~1u;
            if ( *(_QWORD *)(v48 + 32) )
              break;
          }
        }
        if ( !v48 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v48 + 32) |= 2u;
        if ( *(__int64 *)(v48 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v48);
        v54 = 0;
        v54 = *(_DWORD *)(v48 + 88) & 0x1FFFF;
        *(_DWORD *)(v48 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v48 + 25) &= ~1u;
        *(_QWORD *)(v48 + 32) = 0LL;
        v49 = (v48 - (__int64)v44 - 800) / 96;
        if ( v62 == 1 )
          v44->AbEntrySummary |= 1 << v49;
        else
          _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v49);
LABEL_107:
        --v44->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v44, v43, &v54);
        v40 = v44->SpecialApcDisable++ == -1;
        if ( v40 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v42 = 0LL;
        v61 = 0;
      }
      LOWORD(v12) = -1;
      v13 = 2;
      if ( v56 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
          v42,
          v56);
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
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      v22 = -1073741670;
    }
    else
    {
      if ( v19 == 3 )
        CommittedPages = 0LL;
      if ( v60 )
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
      if ( *(_QWORD *)(BugCheckParameter2 + 8) )
      {
        v34 = v18 | 0x10;
        if ( v53 != 2 )
          v34 = v18;
        v35 = MiDecrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v34, v20);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        {
          v52 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v52);
        }
        v22 = -1073741302;
        if ( v21 == 3 )
          CommittedPages = v35;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 8) = P;
        MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v60 ? 112LL : 56LL), 1LL);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
        {
          v51 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v51);
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
  v23 = v60;
  if ( !v60 && v61 == 1 )
  {
    v26 = *(_QWORD *)v5 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v12) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    v55[0] = 0;
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
      v40 = !_BitScanReverse((unsigned int *)&v31, v30);
      v57 = v31;
      if ( v40 )
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
            v55[0] = *(_DWORD *)(v32 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, v55);
    v40 = v27->SpecialApcDisable++ == -1;
    if ( v40 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v23 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF)),
      v23,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v22;
}
