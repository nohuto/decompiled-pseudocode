/*
 * XREFs of VerifierKeReleaseSpinLockForDpc @ 0x140970EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSpinLockForDpc()
{
  return ((__int64 (*)(void))pXdvKeReleaseSpinLockForDpc)();
}
