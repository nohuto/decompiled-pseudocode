/*
 * XREFs of MiQueueLargeFreeZeroRebuild @ 0x14009D110
 * Callers:
 *     MiLargePageFreeToZero @ 0x14009B420 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExfTryAcquirePushLockShared @ 0x140103CD0 (ExfTryAcquirePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiQueueLargeFreeZeroRebuild(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // r15
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  int SessionId; // r14d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v13; // ett
  unsigned int v14; // ecx
  unsigned int i; // r8d
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  signed __int64 *v23; // r14
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // r11
  unsigned __int64 v29; // rsi
  __int64 v30; // r10
  __int64 v31; // r15
  _QWORD *v32; // r9
  unsigned __int64 v33; // r8
  int v34; // r12d
  __int64 v35; // rdi
  unsigned __int16 *v36; // rbx
  KIRQL v37; // al
  __int64 v38; // rcx
  KIRQL v39; // r14
  _DWORD *v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  struct _KPRCB *v44; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v46; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-50h]
  __int64 v48; // [rsp+30h] [rbp-48h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v52; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a3 + 1;
  v5 = a2;
  v6 = MiLargePageSizes[v4];
  v48 = a3;
  v7 = MiLargePageSizes[a3];
  v8 = a2 & ~(v7 - 1);
  if ( !a2 )
    return;
  SessionId = -1;
  if ( qword_14043B120 )
  {
    if ( qword_14043BA08 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140439E38, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = SchedulerAssist[5];
            SchedulerAssist[5] = v41 + 1;
            if ( v41 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v3 = a1;
              v5 = a2;
            }
          }
        }
        _m_prefetchw(&dword_140439E38);
        v13 = dword_140439E38 & 0x7FFFFFFF;
        if ( v13 == _InterlockedCompareExchange(
                      &dword_140439E38,
                      (dword_140439E38 & 0x7FFFFFFF) + 1,
                      dword_140439E38 & 0x7FFFFFFF) )
          goto LABEL_8;
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = v40[5] - 1;
            v40[5] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(&dword_140439E38, CurrentIrql);
      }
      v5 = a2;
      v3 = a1;
    }
    else
    {
      CurrentIrql = 18;
    }
LABEL_8:
    v14 = dword_14043B104;
    if ( v5 < *(_QWORD *)(qword_14043B120 + 16LL * (unsigned int)dword_14043B104) )
    {
      do
        --v14;
      while ( v5 < *(_QWORD *)(qword_14043B120 + 16LL * v14) );
    }
    else
    {
      for ( i = dword_14043B104 + 1; v5 >= *(_QWORD *)(qword_14043B120 + 16LL * i); ++v14 )
        ++i;
    }
    dword_14043B104 = v14;
    if ( CurrentIrql != 18 )
    {
      if ( CurrentIrql == 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
        v3 = a1;
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140439E38, retaddr);
          v3 = a1;
        }
        else
        {
          _InterlockedAnd(&dword_140439E38, 0xBFFFFFFF);
          _InterlockedDecrement(&dword_140439E38);
        }
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v43 = v17[5] - 1;
            v17[5] = v43;
            if ( !v43 )
            {
              KiRemoveSystemWorkPriorityKick(v16);
              v3 = a1;
            }
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v44 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v44);
          v3 = a1;
        }
        __writecr8(CurrentIrql);
      }
    }
  }
  v52 = 0;
  v18 = v3 + 184;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2 = v3 + 184;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v22 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        {
LABEL_21:
          if ( v22 )
          {
            if ( v18 >= 0xFFFF800000000000uLL && byte_14043CA10[((v18 >> 39) & 0x1FF) - 256] == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
            v22->LockState.SessionId = SessionId;
            v23 = (signed __int64 *)BugCheckParameter2;
            v22->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
          }
          else
          {
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            v23 = (signed __int64 *)BugCheckParameter2;
          }
          goto LABEL_26;
        }
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v3 + 184);
LABEL_20:
        v18 = BugCheckParameter2;
        goto LABEL_21;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
      AbEntrySummary = CurrentThread->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v21, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v21);
    v22 = &CurrentThread->LockEntries[v21];
    goto LABEL_20;
  }
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v22 = 0LL;
  v23 = (signed __int64 *)(v3 + 184);
LABEL_26:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)v23, (__int64)&v52);
  v25 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v25 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24);
  if ( !_InterlockedCompareExchange64(v23, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockShared(v23) )
  {
    if ( v22 )
      v22->AcquiredByte |= 1u;
    v26 = 48 * v8 - 0x58000000000LL;
    v27 = 0;
    v28 = MiLargePageContainingFrames[v4];
    v29 = v7 / v6;
    if ( v7 / v6 )
    {
      v30 = 48 * v6;
      v31 = a1;
      v32 = (_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL);
      do
      {
        if ( v8 > 0xFFFFFFFFFLL )
          break;
        if ( (*v32 & 0x20000000000000LL) == 0 )
          break;
        v33 = *(_QWORD *)(v26 + 40);
        if ( *(_QWORD *)(qword_14043B808 + 8 * ((v33 >> 40) & 0x3FF)) != a1 )
          break;
        if ( (*(_BYTE *)(v26 + 34) & 7u) > 1 )
          break;
        if ( (v33 & 0xFFFFFFFFFLL) != v28 )
          break;
        if ( *(__int64 *)(v26 + 8) >= 0 )
          break;
        ++v27;
        v8 += v6;
        v32 = (_QWORD *)((char *)v32 + v30);
        v26 += v30;
      }
      while ( v27 < v29 );
      v23 = (signed __int64 *)BugCheckParameter2;
    }
    else
    {
      v31 = a1;
    }
    v34 = 0;
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    if ( v27 == v29 )
    {
      v35 = *(_QWORD *)(v31 + 168);
      if ( *(_QWORD *)(v35 + 16) )
      {
        if ( PsReferencePartitionSafe(*(_QWORD *)(v31 + 168)) )
        {
          v36 = (unsigned __int16 *)(v31 + 520 * v48 + 5040);
          v37 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v31 + 6116));
          v38 = *v36;
          v39 = v37;
          if ( *(_QWORD *)&v36[4 * v38 + 4] )
            *((_BYTE *)v36 + 4) = 1;
          else
            ++v36[1];
          *(_QWORD *)&v36[4 * v38 + 4] = a2;
          if ( ++*v36 == 64 )
            *v36 = 0;
          if ( *(_BYTE *)(v31 + 6112) == 1 )
          {
            v34 = 1;
          }
          else
          {
            *(_BYTE *)(v31 + 6112) = 1;
            *(_QWORD *)(v31 + 6096) = MiRebuildLargeZeroPage;
            *(_QWORD *)(v31 + 6104) = v31;
            *(_QWORD *)(v31 + 6080) = 0LL;
            ExQueueWorkItemToPartition(v31 + 6080);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v31 + 6116));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v39 < 2u )
          {
            v46 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v46);
          }
          __writecr8(v39);
          if ( v34 == 1 )
            PsDereferencePartition(v35);
        }
      }
    }
  }
  else if ( v22 )
  {
    KeAbPostReleaseEx((ULONG_PTR)v23, v22);
  }
}
