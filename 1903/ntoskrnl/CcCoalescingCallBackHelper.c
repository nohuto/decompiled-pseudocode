/*
 * XREFs of CcCoalescingCallBackHelper @ 0x14027C9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcRescheduleLazyWriteScan @ 0x1400B2864 (CcRescheduleLazyWriteScan.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, int *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v7; // rcx
  bool v8; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = *a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = v3 - 1;
  if ( !v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v8 = *(_QWORD *)(a1 + 600) < 0x2000uLL;
    *(_BYTE *)(a1 + 900) = 1;
    *(_BYTE *)(a1 + 592) = 0;
    if ( !v8 )
      CcScheduleLazyWriteScan(a1, 1, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    *(_BYTE *)(a1 + 900) = 0;
    CcRescheduleLazyWriteScan(a1, 0LL);
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    CcScheduleLazyWriteScan(a1, 1, 0);
LABEL_6:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
LABEL_19:
    __writecr8(OldIrql);
  }
  return 1;
}
