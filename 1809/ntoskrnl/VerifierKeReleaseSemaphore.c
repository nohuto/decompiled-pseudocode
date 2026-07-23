/*
 * XREFs of VerifierKeReleaseSemaphore @ 0x14093B210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReleaseSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReleaseSemaphore)();
}
