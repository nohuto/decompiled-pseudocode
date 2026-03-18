/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14011EA70
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // di
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rbx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v11, 0, sizeof(v11));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = (__int64 *)CcVolumeCacheMapList;
  v6 = *((_QWORD *)PspSystemPartition + 1);
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v7 = v5 - 2;
      if ( *(v5 - 1) == a1 )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      v11.LockQueue.Next = 0LL;
      v11.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 128);
      KxAcquireQueuedSpinLock((__int64)&v11, (volatile __int64 *)(v6 + 128));
      if ( v7[8] || *((_DWORD *)v7 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v7 + 16) + *((_DWORD *)v7 + 50);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v11);
    }
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
  return v4;
}
