/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x1401886DC
 * Callers:
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiAddExpansionNonPagedPool @ 0x140188724 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
