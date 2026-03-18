/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x14014CCD4
 * Callers:
 *     MiStoreEvictPageFile @ 0x1401315F8 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiFindPageFileWriteCluster @ 0x14014D6C0 (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x1402CDE48 (MiExtendPagingFileMaximum.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v6 = --*v3;
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  if ( !v6 )
    return v3;
  return (_DWORD *)v4;
}
