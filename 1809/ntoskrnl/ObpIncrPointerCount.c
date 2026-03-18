/*
 * XREFs of ObpIncrPointerCount @ 0x14005B360
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock @ 0x14008C84C (IopAcquireFastLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACE20 (IoGetAttachedDeviceReference.c)
 *     IopCallDriverReference @ 0x1400B6B90 (IopCallDriverReference.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     ObpLockDirectoryShared @ 0x140109F38 (ObpLockDirectoryShared.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A2A0 (ExpSetResourceOwnerPointerEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1406969C4 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
