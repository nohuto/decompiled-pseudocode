/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001E830 (RtlpHpSegPageRangeShrink.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiGetPagesToZero @ 0x140029C50 (MiGetPagesToZero.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
