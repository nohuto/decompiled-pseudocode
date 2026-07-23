/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x14014F9FC
 * Callers:
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140150D80 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRefPageFileSpaceBitmaps(KSPIN_LOCK *a1, __int64 a2)
{
  KSPIN_LOCK v4; // rsi
  int v5; // ebx
  unsigned __int8 OldIrql; // bp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 29, &v9);
  v4 = a1[14];
  ++*(_DWORD *)v4;
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v4 + 32);
  v5 = *(_DWORD *)a1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v9);
  OldIrql = v9.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9.OldIrql < 2u )
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
