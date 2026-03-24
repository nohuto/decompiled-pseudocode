/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0
 * Callers:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     MiRemoveWsle @ 0x14006A870 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14006ADD0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiAddViewsForSection @ 0x140077170 (MiAddViewsForSection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIdentifyPfn @ 0x1400A7EE0 (MiIdentifyPfn.c)
 *     CcGetPartition @ 0x1400AD030 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1400AFC40 (CcGetVirtualAddress.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAEA0 (RtlpHpLfhSlotAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC6A0 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE30 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     MmPurgeSection @ 0x1400E7D00 (MmPurgeSection.c)
 *     CcCanIWrite @ 0x140104D20 (CcCanIWrite.c)
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // ebx
  signed __int32 v5; // eax
  struct _KPRCB *v6; // rbp
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v9; // ett
  _DWORD *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // eax
  int v13; // eax

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v9 = v5;
        v5 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        if ( v9 != v5 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        }
      }
      v5 = *a1;
    }
    v6 = KeGetCurrentPrcb();
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( !_interlockedbittestandset(a1, 0x1Fu) )
      break;
    v10 = v6->SchedulerAssist;
    if ( v10 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v13 = v10[5] - 1;
        v10[5] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return v2;
}
