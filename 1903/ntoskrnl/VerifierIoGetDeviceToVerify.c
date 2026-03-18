/*
 * XREFs of VerifierIoGetDeviceToVerify @ 0x140328740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDeviceToVerify()
{
  return ((__int64 (*)(void))pXdvIoGetDeviceToVerify)();
}
