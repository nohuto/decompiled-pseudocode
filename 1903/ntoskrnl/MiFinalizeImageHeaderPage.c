/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x14012F5E0
 * Callers:
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x1400DAED0 (MiUseSlabAllocator.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR a1)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  unsigned int v13; // esi
  __int64 SlabPage; // rax
  BOOL IsPfnFromSlabAllocation; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_140465B00 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140465B00;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v17) )
  {
    v13 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !MiIsPfnFromSlabAllocation(a1) || !(unsigned int)MiCheckSlabPage(a1, v17, v13) && !v17 )
    {
      SlabPage = MiGetSlabPage(v6, v13, v17, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v8 = MiLockPageInline(a1);
  MiRemoveLockedPageChargeAndDecRef(a1, v9, v10, v11);
  if ( v5 && !*(_WORD *)(a1 + 32) )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
    MiReplaceTransitionPage(a1, v5, IsPfnFromSlabAllocation, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    v5 = a1;
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
  if ( v5 )
    return MiReleaseFreshPage(v5);
  return result;
}
