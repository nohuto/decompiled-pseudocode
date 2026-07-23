/*
 * XREFs of CcLogExtraWBThreadAction @ 0x1402695FC
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPerfLogExtraWBThreadAction @ 0x14026BB7C (CcPerfLogExtraWBThreadAction.c)
 */

__int64 __fastcall CcLogExtraWBThreadAction(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  int v6; // r15d
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+30h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &v10);
  v4 = *(_QWORD *)(a1 + 600);
  v5 = *(_QWORD *)(a1 + 624);
  v6 = *(_DWORD *)(a1 + 304);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return CcPerfLogExtraWBThreadAction(a2, v6, v4, v5, *(_QWORD *)(**(_QWORD **)(a1 + 8) + 7296LL));
}
