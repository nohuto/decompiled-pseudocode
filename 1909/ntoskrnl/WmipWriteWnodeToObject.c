/*
 * XREFs of WmipWriteWnodeToObject @ 0x14015ACF0
 * Callers:
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x14013C6FC (WmipClearIrpObjectList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     WmipQueueNotification @ 0x14071C518 (WmipQueueNotification.c)
 */

__int64 __fastcall WmipWriteWnodeToObject(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // bp
  unsigned __int8 OldIrql; // si
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  if ( v6 )
  {
    WmipClearIrpObjectList(*(_QWORD *)(a1 + 72));
    v6 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) != 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = 1;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( !v6 )
    return (unsigned int)WmipQueueNotification(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  v10 = *a2;
  v11 = *(_DWORD **)(v6 + 24);
  if ( *a2 <= *(_DWORD *)(*(_QWORD *)(v6 + 184) + 8LL) )
  {
    memmove(v11, a2, *a2);
    v8 = 0;
  }
  else
  {
    v11[12] = v10;
    *v11 = 56;
    v10 = 56;
    v11[11] = 32;
  }
  *(_QWORD *)(v6 + 56) = v10;
  *(_DWORD *)(v6 + 48) = 0;
  IofCompleteRequest((PIRP)v6, 0);
  if ( v8 )
    return (unsigned int)WmipQueueNotification(a1, a1 + (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 128, a2);
  return v7;
}
