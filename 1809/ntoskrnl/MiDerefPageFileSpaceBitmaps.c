/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x14014FA88
 * Callers:
 *     MiStoreEvictPageFile @ 0x140137E48 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140150C60 (MiFindPageFileWriteCluster.c)
 *     MiExtendPagingFileMaximum @ 0x1402B78D0 (MiExtendPagingFileMaximum.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = 0LL;
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &v10);
  v6 = --*v3;
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
    OldIrql = v10.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10.OldIrql < 2u )
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
