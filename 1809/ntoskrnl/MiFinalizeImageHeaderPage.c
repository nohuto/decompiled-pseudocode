/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x14012DE80
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 SlabPage; // r14
  _BYTE *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int8 v8; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (_QWORD *)(a1 + 16);
  SlabPage = -1LL;
  if ( !MiIsPfnFromSlabAllocation(a1) && MiUseSlabAllocator(v5, v4, *v1) )
    SlabPage = MiGetSlabPage(v7, (*(unsigned __int16 *)(v6 + 32) >> 1) & 0x1F, -1LL, 0x20000LL);
  v8 = MiLockPageInline(a1);
  MiRemoveLockedPageChargeAndDecRef(a1);
  if ( SlabPage != -1 && !*(_WORD *)(a1 + 32) )
  {
    MiReplaceTransitionPage(a1, 48 * SlabPage - 0x58000000000LL, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    MiReturnFreeZeroPage(a1);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
