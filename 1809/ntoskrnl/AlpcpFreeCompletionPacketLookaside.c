/*
 * XREFs of AlpcpFreeCompletionPacketLookaside @ 0x14010AA44
 * Callers:
 *     AlpcpDeletePort @ 0x140616AB0 (AlpcpDeletePort.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406B146C (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4C00 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AB7C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall AlpcpFreeCompletionPacketLookaside(KSPIN_LOCK *P)
{
  int v2; // edi
  unsigned __int8 OldIrql; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(P, &LockHandle);
  if ( *((_DWORD *)P + 3) )
  {
    v2 = 0;
    *((_DWORD *)P + 6) = 1;
  }
  else
  {
    v2 = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  if ( v2 )
    return AlpcpDeferredFreeCompletionPacketLookaside(P);
  return result;
}
