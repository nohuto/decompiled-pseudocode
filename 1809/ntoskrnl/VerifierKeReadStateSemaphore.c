/*
 * XREFs of VerifierKeReadStateSemaphore @ 0x14093ADF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateSemaphore()
{
  return ((__int64 (*)(void))pXdvKeReadStateSemaphore)();
}
