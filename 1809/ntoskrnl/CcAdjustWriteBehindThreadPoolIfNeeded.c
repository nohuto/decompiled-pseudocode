/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140023880
 * Callers:
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x140183980 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPool @ 0x1400239F0 (CcAdjustWriteBehindThreadPool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // di
  __int64 v5; // rdx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (_BYTE)dword_14054119C )
    return;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
    {
      v2 = 1;
      v5 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 600) > 0x2000uLL || a2 )
    {
      if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
      {
        CcAdjustWriteBehindThreadPool(a1, 0LL);
        v2 = 1;
      }
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(a1 + 328) && *(_QWORD *)(a1 + 256) == a1 + 256 )
    {
      LOBYTE(v5) = 1;
LABEL_9:
      CcAdjustWriteBehindThreadPool(a1, v5);
    }
  }
LABEL_10:
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
  {
    if ( KeGetCurrentIrql() < 2u )
      CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
}
