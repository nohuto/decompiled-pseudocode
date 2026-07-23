/*
 * XREFs of MiAttachToOwningSession @ 0x14011A53C
 * Callers:
 *     MiCapturePfnVm @ 0x140083638 (MiCapturePfnVm.c)
 *     MiLockStealSystemVm @ 0x1400E99F8 (MiLockStealSystemVm.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiSelectSessionAttachProcess @ 0x14007E604 (MiSelectSessionAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400EE098 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v9[5]; // [rsp+20h] [rbp-28h] BYREF

  TopLevelPfn = MiGetTopLevelPfn(a1);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v5 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( MiTryToAcquireExpansionLockAtDpc(v9) )
    {
      v6 = MiSelectSessionAttachProcess(v5);
      if ( a2 == 17 )
      {
        KxReleaseQueuedSpinLock(v9);
        return v6;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KxReleaseQueuedSpinLock(v9);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a2);
      if ( v6 && (int)MmAttachSession((ULONG_PTR)v6) >= 0 )
        return v6;
      MiLockPageInline(a1);
    }
  }
  return 0LL;
}
