/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x14007C9B8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeVolumeCacheMap(_DWORD *P)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned __int8 OldIrql; // di
  _DWORD **v6; // rdx
  PVOID *v7; // rcx
  void *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v3 = P[1];
  if ( !v3 )
    KeBugCheckEx(0x34u, 0x598uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = v3 - 1;
  P[1] = v4;
  if ( !v4 )
  {
    v2 = 1;
    v6 = (_DWORD **)*((_QWORD *)P + 2);
    v7 = (PVOID *)*((_QWORD *)P + 3);
    if ( v6[1] != P + 4 || *v7 != P + 4 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    v8 = (void *)*((_QWORD *)P + 20);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6D566343u);
}
