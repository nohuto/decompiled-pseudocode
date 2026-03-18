/*
 * XREFs of ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003CD54
 * Callers:
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01BD2C0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
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
