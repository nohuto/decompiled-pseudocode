/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x14012FFD0
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x1400BAD50 (MiUseSlabAllocator.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCheckSlabPage @ 0x1402DB4CC (MiCheckSlabPage.c)
 *     MiGetSlabPage @ 0x1402DC244 (MiGetSlabPage.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 SlabPage; // rax
  BOOL IsPfnFromSlabAllocation; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_140465800 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140465800;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v14) )
  {
    v10 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v14, v10) && !v14 )
    {
      SlabPage = MiGetSlabPage(v6, v10, v14, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v8 = MiLockPageInline(BugCheckParameter2);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
  if ( v5 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
    MiReplaceTransitionPage(BugCheckParameter2, v5, IsPfnFromSlabAllocation, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    v5 = BugCheckParameter2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  if ( v5 )
    return MiReleaseFreshPage(v5);
  return result;
}
