/*
 * XREFs of WmipCompleteGuidIrpWithError @ 0x1400EDCE4
 * Callers:
 *     WmipReceiveNotifications @ 0x1401381D8 (WmipReceiveNotifications.c)
 *     WmipDeleteMethod @ 0x140696A80 (WmipDeleteMethod.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x14013C6FC (WmipClearIrpObjectList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall WmipCompleteGuidIrpWithError(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
  {
    WmipClearIrpObjectList(v2);
    v2 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 48) = -1073741816;
    IofCompleteRequest((PIRP)v2, 0);
  }
}
