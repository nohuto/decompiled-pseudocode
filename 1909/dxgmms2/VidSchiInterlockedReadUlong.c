/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x1C00110B0
 * Callers:
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C007C780 (VidSchFlushContext.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00CCC50 (VidSchFlushHwQueue.c)
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
