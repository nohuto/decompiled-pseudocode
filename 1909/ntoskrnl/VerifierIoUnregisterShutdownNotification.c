/*
 * XREFs of VerifierIoUnregisterShutdownNotification @ 0x140970A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoUnregisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoUnregisterShutdownNotification)();
}
