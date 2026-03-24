/*
 * XREFs of ObpIncrPointerCount @ 0x14005B360
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     IopAcquireFastLock @ 0x14008C84C (IopAcquireFastLock.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACE40 (IoGetAttachedDeviceReference.c)
 *     IopCallDriverReference @ 0x1400B6BB0 (IopCallDriverReference.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA20 (ExpApplyPriorityBoost.c)
 *     ObpLockDirectoryShared @ 0x140109F58 (ObpLockDirectoryShared.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14010A2C0 (ExpSetResourceOwnerPointerEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1406969A4 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
