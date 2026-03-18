/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x14007FB84
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v3 = P[1];
  if ( !v3 )
    KeBugCheckEx(0x34u, 0x597uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
