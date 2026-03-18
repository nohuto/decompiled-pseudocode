/*
 * XREFs of MiCheckControlArea @ 0x1400711B0
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x14005E8F0 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaBySection @ 0x140071174 (MiDereferenceControlAreaBySection.c)
 *     MiFlushRelease @ 0x1400717B4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MmPurgeSection @ 0x1400BCD50 (MmPurgeSection.c)
 *     MiDereferenceControlArea @ 0x1400F87E4 (MiDereferenceControlArea.c)
 *     MiReleaseFaultCharges @ 0x140133C7C (MiReleaseFaultCharges.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C507C (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiInsertUnusedSegment @ 0x140070468 (MiInsertUnusedSegment.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 *     MiClearFilePointer @ 0x14010A278 (MiClearFilePointer.c)
 *     PsGetNextPartition @ 0x1401231DC (PsGetNextPartition.c)
 *     MiImageUnused @ 0x14012974C (MiImageUnused.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiCleanSection @ 0x14017085C (MiCleanSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiShouldTrimUnusedSegments @ 0x1402BA514 (MiShouldTrimUnusedSegments.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x140609554 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, KIRQL a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int16 v7; // cx
  _QWORD *v8; // r14
  _BOOL8 v9; // r12
  __int64 v10; // r13
  struct _KPRCB *v11; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v14; // ecx
  KIRQL v15; // al
  bool v16; // zf
  __int64 inserted; // rax
  _QWORD *v18; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  int v21; // eax
  struct _KPRCB *v22; // rcx
  __int64 i; // rbx
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  __int128 v25; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = 0LL;
  v3 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_WORD *)(a1 + 60);
  v8 = 0LL;
  v25 = 0LL;
  v9 = v5 != 0;
  v24 = -1LL;
  v10 = *(_QWORD *)(qword_140465E88 + 8LL * (v7 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_37;
  }
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v3 = 2;
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v3 = 2;
    *(_DWORD *)(a1 + 56) = v14 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v14 & 0x40000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    if ( (v14 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v14 = *(_DWORD *)(a1 + 56);
      v2 = inserted;
    }
    if ( (v14 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1LL, &v24);
      v14 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v14 & 0x20020) == 0x20020 )
  {
    *(_DWORD *)(a1 + 56) = v14 | 4;
    *(_QWORD *)(a1 + 40) = 1LL;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    MiPurgeImageSection(a1);
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    a2 = v15;
    v16 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v16 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v3 )
        {
          v2 = MiInsertUnusedSegment(a1);
          v3 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v3 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v3 = 4;
  }
LABEL_3:
  if ( v3 >= 4 )
  {
    v8 = (_QWORD *)MiBuildWakeList(a1, 3LL);
    v3 &= ~4u;
  }
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, a2, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v20 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v20);
      }
      __writecr8(a2);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v11 = KeGetCurrentPrcb();
    SchedulerAssist = v11->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v21 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(a2);
    if ( v8 )
    {
      do
      {
        v18 = (_QWORD *)*v8;
        KeSignalGate(v8 + 2, 1LL);
        v8 = v18;
      }
      while ( v18 );
    }
    if ( qword_14046A2A8 >= 9 * (qword_14046A328 / 0xAuLL) )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(qword_14046A328, qword_14046A328 / 0xAuLL, qword_14046A2A8) )
      {
        for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
        {
          if ( *(_QWORD *)(*(_QWORD *)i + 1632LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1336LL), 0, 0);
        }
      }
    }
  }
  if ( v2 )
    MiReturnCrossPartitionSectionCharges(v10, v9, v2);
  return MiReturnImageBase(&v24);
}
