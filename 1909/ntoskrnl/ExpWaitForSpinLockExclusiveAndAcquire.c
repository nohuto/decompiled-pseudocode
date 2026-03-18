/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400
 * Callers:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(void *SchedulerAssist, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // edi
  volatile signed __int32 *v4; // rsi
  signed __int32 v5; // eax
  struct _KPRCB *v6; // rbp
  _DWORD *v7; // rcx
  signed __int32 v9; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  int v11; // eax
  int v12; // eax

  v2 = 0;
  v4 = (volatile signed __int32 *)SchedulerAssist;
  while ( 1 )
  {
    v5 = *v4;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        SchedulerAssist = (void *)(unsigned int)v5;
        LODWORD(SchedulerAssist) = v5 | 0x40000000;
        v9 = v5;
        v5 = _InterlockedCompareExchange(v4, v5 | 0x40000000, v5);
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
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist) )
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
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            _InterlockedOr((volatile signed __int32 *)SchedulerAssist, 0x10000u);
          }
        }
      }
      v5 = *v4;
    }
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v11 = v7[5];
        v7[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( !_interlockedbittestandset(v4, 0x1Fu) )
      break;
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v12 = *((_DWORD *)SchedulerAssist + 5) - 1;
        *((_DWORD *)SchedulerAssist + 5) = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return v2;
}
