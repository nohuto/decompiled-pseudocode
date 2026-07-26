/*
 * XREFs of NdisDprAcquireSpinLock @ 0x1C005CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisDprAcquireSpinLock(KSPIN_LOCK *a1)
{
  KeAcquireSpinLockAtDpcLevel(a1);
}
