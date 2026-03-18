/*
 * XREFs of VerifierIoGetDeviceInterfaces @ 0x1409704A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceInterfaces()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceInterfaces)();
}
