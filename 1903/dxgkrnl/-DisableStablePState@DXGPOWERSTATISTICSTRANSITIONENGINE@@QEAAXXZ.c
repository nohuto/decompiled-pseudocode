/*
 * XREFs of ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00435B4
 * Callers:
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01EC8B0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::DisableStablePState(KSPIN_LOCK *this)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  *((_BYTE *)this + 89) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
