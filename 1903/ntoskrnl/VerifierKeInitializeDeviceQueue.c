/*
 * XREFs of VerifierKeInitializeDeviceQueue @ 0x140970CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeDeviceQueue()
{
  return ((__int64 (*)(void))pXdvKeInitializeDeviceQueue)();
}
