/*
 * XREFs of VerifierIoGetDeviceInterfaces @ 0x140931C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceInterfaces()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceInterfaces)();
}
