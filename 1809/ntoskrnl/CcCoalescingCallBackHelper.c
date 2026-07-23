/*
 * XREFs of CcCoalescingCallBackHelper @ 0x140269320
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1400D784C (CcRescheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, _DWORD *a2)
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v4; // rcx
  bool v5; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  switch ( *a2 )
  {
    case 1:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      v5 = *(_QWORD *)(a1 + 600) < 0x2000uLL;
      *(_BYTE *)(a1 + 900) = 1;
      *(_BYTE *)(a1 + 592) = 0;
      if ( !v5 )
        CcScheduleLazyWriteScan(a1, 1, 0);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      goto LABEL_19;
    case 2:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      *(_BYTE *)(a1 + 900) = 0;
      CcRescheduleLazyWriteScan(a1, 0LL);
      goto LABEL_6;
    case 3:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
      CcScheduleLazyWriteScan(a1, 1, 0);
LABEL_6:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v4 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v4->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v4);
      }
LABEL_19:
      __writecr8(OldIrql);
      break;
  }
  return 1;
}
