/*
 * XREFs of CcIsThereDirtyDataEx @ 0x14026A270
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall CcIsThereDirtyDataEx(PVPB Vpb, PULONG NumberOfDirtyPages)
{
  BOOLEAN v4; // di
  __int64 v5; // r8
  __int64 *v6; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v14[3]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    DeviceObject = Vpb->DeviceObject;
    do
    {
      v8 = v6 - 2;
      if ( (struct _DEVICE_OBJECT *)*(v6 - 1) == DeviceObject )
        break;
      v6 = (__int64 *)*v6;
      v8 = 0LL;
    }
    while ( v6 != &CcVolumeCacheMapList );
    if ( v8 )
    {
      v9 = *((_QWORD *)PspSystemPartition + 1);
      v14[0] = 0LL;
      v14[1] = (volatile signed __int64 *)(v9 + 128);
      KxAcquireQueuedSpinLock((__int64)v14, (volatile __int64 *)(v9 + 128), v5);
      v10 = v8[4];
      if ( v10 || *((_DWORD *)v8 + 49) )
      {
        if ( NumberOfDirtyPages )
          *NumberOfDirtyPages = *((_DWORD *)v8 + 49) + v10;
        v4 = 1;
      }
      KxReleaseQueuedSpinLock(v14);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
