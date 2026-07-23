/*
 * XREFs of MiFreeLargePageChain @ 0x1402CCA1C
 * Callers:
 *     MiGetLargePageChain @ 0x140028A18 (MiGetLargePageChain.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
      MiInsertLargePageInNodeListHelper((v1 + 0x58000000000LL) / 48, 0x200uLL, *(_BYTE *)(v1 + 34) & 7, 0LL);
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
