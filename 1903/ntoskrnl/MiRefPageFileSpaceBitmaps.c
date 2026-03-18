/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x14014CD64
 * Callers:
 *     MiStoreEvictPageFile @ 0x1401315F8 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiFindPageFileWriteCluster @ 0x14014D6C0 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(KSPIN_LOCK *a1, __int64 a2)
{
  KSPIN_LOCK v4; // rsi
  int v5; // ebx
  unsigned __int8 OldIrql; // bp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v4 = a1[14];
  ++*(_DWORD *)v4;
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v4 + 32);
  v5 = *(_DWORD *)a1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 24) = v5;
  return result;
}
