/*
 * XREFs of KeAcquireSpinLockForDpc @ 0x1402A76E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

KIRQL __stdcall KeAcquireSpinLockForDpc(PKSPIN_LOCK SpinLock)
{
  KIRQL v1; // bl

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    return KeAcquireSpinLockRaiseToDpc(SpinLock);
  v1 = 2;
  KxAcquireSpinLock(SpinLock);
  return v1;
}
