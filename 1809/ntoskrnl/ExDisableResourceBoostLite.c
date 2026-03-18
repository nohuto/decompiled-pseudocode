/*
 * XREFs of ExDisableResourceBoostLite @ 0x14015FAA0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1400CC2F8 (CcAllocateInitializeBcb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  Resource->Flag |= 8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
