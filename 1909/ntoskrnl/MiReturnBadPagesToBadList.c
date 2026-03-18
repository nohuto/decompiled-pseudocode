/*
 * XREFs of MiReturnBadPagesToBadList @ 0x1402BE4D8
 * Callers:
 *     MiRemoveBadPages @ 0x1402BE1D0 (MiRemoveBadPages.c)
 *     MmRemovePhysicalMemory @ 0x140888B00 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReturnBadPagesToBadList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x58000000000LL;
    do
    {
      v4 = MiLockPageInline(v3);
      *(_WORD *)(v3 + 32) = 0;
      *(_QWORD *)(v3 + 40) &= 0xFFFFFFF000000000uLL;
      MiInsertPageInList(v3, 0x20u);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
