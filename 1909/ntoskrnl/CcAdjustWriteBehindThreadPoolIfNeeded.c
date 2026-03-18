/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204
 * Callers:
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcChargeDirtyPages @ 0x14007A114 (CcChargeDirtyPages.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x14018DB90 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14012AF78 (CcAdjustWriteBehindThreadPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  __int64 result; // rax
  char v3; // di
  __int64 v6; // rdx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)dword_1405711AC )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
    {
      v3 = 1;
      v6 = 0LL;
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
        v3 = 1;
      }
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(a1 + 328) && *(_QWORD *)(a1 + 256) == a1 + 256 )
    {
      LOBYTE(v6) = 1;
LABEL_9:
      CcAdjustWriteBehindThreadPool(a1, v6);
    }
  }
LABEL_10:
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
  if ( v3 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
      return CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
  return result;
}
