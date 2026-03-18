/*
 * XREFs of CcIsThereDirtyDataEx @ 0x14027D820
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // di
  __int64 *v5; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v12, 0, sizeof(v12));
  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v5 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v7 = v5 - 2;
      if ( (struct _DEVICE_OBJECT *)*(v5 - 1) == DeviceObject )
        break;
      v5 = (__int64 *)*v5;
      v7 = 0LL;
    }
    while ( v5 != &CcVolumeCacheMapList );
    if ( v7 )
    {
      v8 = *((_QWORD *)PspSystemPartition + 1);
      v12.LockQueue.Next = 0LL;
      v12.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 128);
      KxAcquireQueuedSpinLock((__int64)&v12, (volatile __int64 *)(v8 + 128));
      if ( v7[4] || *((_DWORD *)v7 + 49) )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *((_DWORD *)v7 + 8) + *((_DWORD *)v7 + 49);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v12);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v4;
}
