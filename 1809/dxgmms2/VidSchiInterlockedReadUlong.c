/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C00115E0
 * Callers:
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00CA1B0 (VidSchFlushHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
