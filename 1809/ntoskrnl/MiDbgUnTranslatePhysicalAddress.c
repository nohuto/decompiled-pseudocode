/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x1402BB494
 * Callers:
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1402BB0E8 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int8 v5; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_14043BA08 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_14043BA08, ZeroPte);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 1u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 8) != 0 || (v4 & 0x10) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BDC0);
    }
  }
  v5 = *((_BYTE *)a1 + 4);
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v5);
  }
}
