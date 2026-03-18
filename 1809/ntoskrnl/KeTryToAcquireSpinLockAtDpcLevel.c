/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14011BAA0
 * Callers:
 *     <none>
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14011BAB4 (KxTryToAcquireSpinLock.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
