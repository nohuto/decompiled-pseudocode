/*
 * XREFs of MiFreeLargePageChain @ 0x1402E677C
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x140023500 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePageChain @ 0x1400969FC (MiGetLargePageChain.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeLargePageChain(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  unsigned __int8 v3; // si
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = *(_QWORD *)v1;
      v3 = MiLockPageInline(v1);
      MiInsertLargePageInNodeList((v1 + 0x58000000000LL) / 48, *(_BYTE *)(v1 + 34) & 7, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v3);
      v1 = v2;
    }
    while ( v2 );
  }
}
