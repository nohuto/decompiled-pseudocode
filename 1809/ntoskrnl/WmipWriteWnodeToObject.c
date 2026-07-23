/*
 * XREFs of WmipWriteWnodeToObject @ 0x14010C1D4
 * Callers:
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x14010C2EC (WmipClearIrpObjectList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     WmipQueueNotification @ 0x1406904D8 (WmipQueueNotification.c)
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
  struct _KLOCK_QUEUE_HANDLE v14[2]; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, v14);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = 0;
  if ( v6 )
  {
    WmipClearIrpObjectList(*(_QWORD *)(a1 + 72));
    v6 &= -(__int64)(_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) != 0);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)v14);
  v8 = 1;
  OldIrql = v14[0].OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0].OldIrql < 2u )
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
