/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14011C4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // di
  __int64 *v5; // r8
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v12[3]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v13);
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
      v12[0] = 0LL;
      v12[1] = (volatile signed __int64 *)(v6 + 128);
      KxAcquireQueuedSpinLock((__int64)v12, (volatile __int64 *)(v6 + 128), (__int64)v5);
      v8 = v7[8];
      if ( v8 || *((_DWORD *)v7 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v7 + 50) + v8;
        v4 = 1;
      }
      KxReleaseQueuedSpinLock(v12);
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13);
  OldIrql = v13.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v4;
}
