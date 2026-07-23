/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x14030ACB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceToVerify()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceToVerify)();
}
