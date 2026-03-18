/*
 * XREFs of MiAttachToOwningSession @ 0x14012C5BC
 * Callers:
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 *     MiCapturePfnVm @ 0x14013ECA0 (MiCapturePfnVm.c)
 * Callees:
 *     MiSelectSessionAttachProcess @ 0x140002524 (MiSelectSessionAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400E27C8 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2)
{
  __int64 TopLevelPfn; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
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
    if ( MiTryToAcquireExpansionLockAtDpc(&LockHandle) )
    {
      v6 = MiSelectSessionAttachProcess(v5);
      if ( a2 == 17 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return v6;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
