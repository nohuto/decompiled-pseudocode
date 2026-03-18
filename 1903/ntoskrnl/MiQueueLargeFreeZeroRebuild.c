/*
 * XREFs of MiQueueLargeFreeZeroRebuild @ 0x14009FE80
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiLargePageFreeToZero @ 0x14009FA50 (MiLargePageFreeToZero.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x14009DCF0 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

char __fastcall MiQueueLargeFreeZeroRebuild(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // r14
  char result; // al
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // ebx
  _KLOCK_ENTRY *v12; // rbp
  __int64 v13; // rcx
  bool v14; // zf
  signed __int64 *v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int64 v18; // rbp
  __int64 v19; // r10
  _QWORD *v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int8 AbEntrySummary; // al
  __int64 v23; // rcx
  int SessionId; // eax
  __int64 v25; // rsi
  unsigned __int16 *v26; // rdi
  KIRQL v27; // al
  __int64 v28; // rcx
  KIRQL v29; // r14
  int v30; // r15d
  char v31; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v34; // [rsp+30h] [rbp-48h]
  int v36; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+20h]

  v4 = a3 + 1;
  result = a3;
  v6 = MiLargePageSizes[v4];
  v34 = a3;
  v7 = MiLargePageSizes[a3];
  v8 = a2 & ~(v7 - 1);
  if ( !a2 )
    return result;
  v37 = MiPageToNode(a2);
  v36 = 0;
  v9 = a1 + 184;
  CurrentThread = KeGetCurrentThread();
  v11 = v37;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( !AbEntrySummary )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v12 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
        {
LABEL_27:
          if ( !v12 )
          {
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_4;
          }
          if ( v9 >= 0xFFFF800000000000uLL )
          {
            if ( byte_140467440[((v9 >> 39) & 0x1FF) - 256] == 1 )
            {
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
              v9 = a1 + 184;
              goto LABEL_32;
            }
            v9 = a1 + 184;
          }
          SessionId = -1;
LABEL_32:
          v12->LockState.SessionId = SessionId;
          v12->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v9 & 0x7FFFFFFFFFFFFFFCLL);
          goto LABEL_4;
        }
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v9);
LABEL_26:
        v9 = a1 + 184;
        goto LABEL_27;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    _BitScanForward((unsigned int *)&v23, AbEntrySummary);
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v23);
    v12 = &CurrentThread->LockEntries[v23];
    goto LABEL_26;
  }
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v12 = 0LL;
LABEL_4:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9, &v36);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13);
  v15 = (signed __int64 *)(a1 + 184);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), 17LL, 0LL) )
    goto LABEL_8;
  result = ExfTryAcquirePushLockShared((unsigned __int64 *)(a1 + 184));
  if ( result )
  {
    v15 = (signed __int64 *)(a1 + 184);
LABEL_8:
    if ( v12 )
      v12->AcquiredByte |= 1u;
    v16 = 48 * v8 - 0x58000000000LL;
    v17 = 0;
    v18 = v7 / v6;
    if ( v7 / v6 )
    {
      v19 = 48 * v6;
      v20 = (_QWORD *)(48 * v8 - 0x57FFFFFFFD8LL);
      do
      {
        if ( v8 > 0xFFFFFFFFFLL )
          break;
        if ( (*v20 & 0x20000000000000LL) == 0 )
          break;
        v21 = *(_QWORD *)(v16 + 40);
        if ( *(_QWORD *)(qword_140466188 + 8 * ((v21 >> 40) & 0x3FF)) != a1 )
          break;
        if ( (*(_BYTE *)(v16 + 34) & 7u) > 1 )
          break;
        if ( (v21 & 0xFFFFFFFFFLL) != MiLargePageContainingFrames[v4] )
          break;
        if ( *(__int64 *)(v16 + 8) >= 0 )
          break;
        ++v17;
        v8 += v6;
        v20 = (_QWORD *)((char *)v20 + v19);
        v16 += v19;
      }
      while ( v17 < v18 );
      v11 = v37;
      v15 = (signed __int64 *)(a1 + 184);
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v15);
      v15 = (signed __int64 *)(a1 + 184);
    }
    KeAbPostRelease((ULONG_PTR)v15);
    result = v17;
    if ( v17 == v18 )
    {
      v25 = *(_QWORD *)(a1 + 168);
      if ( *(_QWORD *)(v25 + 16) )
      {
        result = PsReferencePartitionSafe(*(_QWORD *)(a1 + 168));
        if ( result )
        {
          v26 = (unsigned __int16 *)(a1 + 520 * v34 + 5040);
          v27 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
          v28 = *v26;
          v29 = v27;
          if ( *(_QWORD *)&v26[4 * v28 + 4] )
            *((_BYTE *)v26 + 4) = 1;
          else
            ++v26[1];
          v30 = 0;
          *(_QWORD *)&v26[4 * v28 + 4] = a2;
          if ( ++*v26 == 64 )
            *v26 = 0;
          v31 = *(_BYTE *)(a1 + 6112);
          if ( v31 != -1 )
            *(_BYTE *)(a1 + 6112) = ++v31;
          if ( v31 != 8 || *(_BYTE *)(a1 + 6113) )
          {
            v30 = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 6113) = 1;
            *(_QWORD *)(a1 + 6104) = a1;
            *(_QWORD *)(a1 + 6096) = MiRebuildLargeZeroPage;
            *(_QWORD *)(a1 + 6080) = 0LL;
            ExQueueWorkItemToPartition((_QWORD *)(a1 + 6080), 1, v11, v25);
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 6116));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          result = v29;
          __writecr8(v29);
          if ( v30 == 1 )
            return PsDereferencePartition(v25);
        }
      }
    }
    return result;
  }
  if ( v12 )
    return KeAbPostReleaseEx(a1 + 184, v12);
  return result;
}
