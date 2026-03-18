/*
 * XREFs of IopInterlockedDecrementUlong @ 0x1401716FC
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x1400B4440 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(KSPIN_LOCK_QUEUE_NUMBER Number, _DWORD *a2)
{
  KIRQL v4; // al

  v4 = KeAcquireQueuedSpinLock(Number);
  LODWORD(a2) = --*a2;
  KeReleaseQueuedSpinLock(Number, v4);
  return (unsigned int)a2;
}
