/*
 * XREFs of MiCheckControlArea @ 0x140076490
 * Callers:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiDereferenceControlAreaBySection @ 0x14007644C (MiDereferenceControlAreaBySection.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiFlushRelease @ 0x1400792BC (MiFlushRelease.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x140131A24 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x1402AC2CC (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x14007B590 (MiInsertUnusedSegment.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiClearFilePointer @ 0x14011A0AC (MiClearFilePointer.c)
 *     PsGetNextPartition @ 0x140120058 (PsGetNextPartition.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     MiImageUnused @ 0x1401278F0 (MiImageUnused.c)
 *     MiCleanSection @ 0x14016983C (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiShouldTrimUnusedSegments @ 0x1402A35F4 (MiShouldTrimUnusedSegments.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, KIRQL a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 *v7; // r14
  _BOOL8 v8; // r15
  __int64 v9; // r13
  struct _KPRCB *v10; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v13; // ecx
  KIRQL v14; // al
  bool v15; // zf
  __int64 inserted; // rax
  __int64 *v17; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  int v20; // eax
  struct _KPRCB *v21; // rcx
  __int64 i; // rbx
  _QWORD v23[2]; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v8 = v2 != 0;
  v9 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v23[0] = 0xFFFFFFFFLL;
  v23[1] = 0LL;
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_37;
  }
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v4 = 2;
    goto LABEL_3;
  }
  v13 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v4 = 2;
    *(_DWORD *)(a1 + 56) = v13 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v13 & 0x40000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    if ( (v13 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v13 = *(_DWORD *)(a1 + 56);
      v3 = inserted;
    }
    if ( (v13 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1LL, v23);
      v13 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v13 & 0x20020) == 0x20020 )
  {
    *(_DWORD *)(a1 + 56) = v13 | 4;
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
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    a2 = v14;
    v15 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v15 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v4 )
        {
          v3 = MiInsertUnusedSegment(a1);
          v4 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v4 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v4 = 4;
  }
LABEL_3:
  if ( v4 >= 4 )
  {
    v7 = MiBuildWakeList(a1, 3);
    v4 &= ~4u;
  }
  if ( v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, a2, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        v19 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v19);
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
    v10 = KeGetCurrentPrcb();
    SchedulerAssist = v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v20 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v21);
    }
    __writecr8(a2);
    if ( v7 )
    {
      do
      {
        v17 = (__int64 *)*v7;
        KeSignalGate(v7 + 2, 1LL);
        v7 = v17;
      }
      while ( v17 );
    }
    if ( qword_14043F7E8 >= 9 * (qword_14043F868 / 0xAuLL) )
    {
      if ( (unsigned int)MiShouldTrimUnusedSegments(qword_14043F868, qword_14043F868 / 0xAuLL) )
      {
        for ( i = PsGetNextPartition(0LL); i; i = PsGetNextPartition(i) )
        {
          if ( *(_QWORD *)(*(_QWORD *)i + 1632LL) )
            KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1336LL), 0, 0);
        }
      }
    }
  }
  if ( v3 )
    MiReturnCrossPartitionSectionCharges(v9, v8, v3);
  return MiReturnImageBase(v23);
}
