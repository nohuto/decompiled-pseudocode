/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x14011C408
 * Callers:
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406C3B84 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406C3D00 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406C3D9C (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall AlpcpQueueIoCompletionPort(__int64 *a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  unsigned __int8 OldIrql; // di
  char result; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1[6];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 >= *(_DWORD *)(v4 + 8) )
  {
    v11 = 0LL;
    if ( a2 )
      ++*(_DWORD *)(v4 + 20);
    else
      ++*(_DWORD *)(v4 + 16);
  }
  else
  {
    v10 = *(_QWORD **)(v4 + 32);
    if ( v10 )
    {
      *(_QWORD *)(v4 + 32) = *v10;
      v9 = *(_DWORD *)(v4 + 12);
    }
    v11 = v10[1];
    *(_DWORD *)(v4 + 12) = v9 + 1;
  }
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
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    result = KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
  if ( v11 )
    return IoSetIoCompletionEx2(a1[4], a1[5], -(__int64)(a2 != 0), 0, 0LL, 0, v11, a4);
  return result;
}
