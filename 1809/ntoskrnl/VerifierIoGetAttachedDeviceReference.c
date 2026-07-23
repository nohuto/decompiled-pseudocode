/*
 * XREFs of VerifierIoGetAttachedDeviceReference @ 0x140932B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetAttachedDeviceReference()
{
  return ((__int64 (*)(void))pXdvIoGetAttachedDeviceReference)();
}
