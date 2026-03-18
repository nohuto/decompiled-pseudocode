/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x140188C8C
 * Callers:
 *     MiFreeInitializationCode @ 0x14071290C (MiFreeInitializationCode.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1400B9B40 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiAddExpansionNonPagedPool @ 0x140188CD4 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 i; // rdi
  unsigned __int8 v8; // si
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !MiIsPfnFromSlabAllocation(a1) )
    return MiAddExpansionNonPagedPool(v5, a3);
  result = 48 * a3;
  for ( i = 48 * a3 + a1; a3; --a3 )
  {
    i -= 48LL;
    v8 = MiLockPageInline(i);
    *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
    *(_QWORD *)(i + 16) = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(i + 16));
    MiReturnFreeZeroPage(i);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v8;
    __writecr8(v8);
  }
  return result;
}
