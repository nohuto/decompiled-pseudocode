/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14011BB30
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14011BB44 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
