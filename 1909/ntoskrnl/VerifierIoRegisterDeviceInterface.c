/*
 * XREFs of VerifierIoRegisterDeviceInterface @ 0x140970700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoRegisterDeviceInterface()
{
  return ((__int64 (*)(void))pXdvIoRegisterDeviceInterface)();
}
