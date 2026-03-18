/*
 * XREFs of ObpIncrPointerCount @ 0x1400476A0
 * Callers:
 *     IoGetAttachedDeviceReference @ 0x14000E250 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     IopCallDriverReference @ 0x1400BAD70 (IopCallDriverReference.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1406BBFE0 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
