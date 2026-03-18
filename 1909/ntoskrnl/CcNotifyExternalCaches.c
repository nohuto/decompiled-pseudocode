/*
 * XREFs of CcNotifyExternalCaches @ 0x14016F70C
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x14018DB90 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCalculatePagesToWrite @ 0x140080494 (CcCalculatePagesToWrite.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  __int64 v2; // rbx
  KIRQL v3; // si
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *((_QWORD *)PspSystemPartition + 1);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 128));
  v4 = (_QWORD *)(v2 + 600);
  v5 = CcCalculatePagesToWrite(v2, a1, v2 + 600, (unsigned __int64 *)(v2 + 624), 0);
  if ( v5 == 0xFFFFFFFFLL )
  {
    LODWORD(v6) = 100;
  }
  else if ( *v4 )
  {
    v6 = 100 * (unsigned __int64)v5 / *v4;
  }
  else
  {
    LODWORD(v6) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v6 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v9 = *(i - 3);
      if ( v9 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v9 * (unsigned __int64)(unsigned int)v6 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
