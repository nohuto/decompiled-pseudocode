/*
 * XREFs of VerifierIoRegisterShutdownNotification @ 0x140932F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterShutdownNotification()
{
  return ((__int64 (*)(void))pXdvIoRegisterShutdownNotification)();
}
