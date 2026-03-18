/*
 * XREFs of ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003CF58
 * Callers:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C002EFE8 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity(LARGE_INTEGER *this)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( _InterlockedIncrement((volatile signed __int32 *)&this[8]) == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&this[3].QuadPart, &LockHandle);
    this[4] = KeQueryPerformanceCounter(0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
