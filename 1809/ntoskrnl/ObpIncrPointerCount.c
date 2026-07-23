/*
 * XREFs of ObpIncrPointerCount @ 0x14005B360
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock @ 0x14008C83C (IopAcquireFastLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     ObpLockDirectoryShared @ 0x140109FD8 (ObpLockDirectoryShared.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A340 (ExpSetResourceOwnerPointerEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D21B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x140697B64 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
