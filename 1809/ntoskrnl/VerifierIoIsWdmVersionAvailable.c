/*
 * XREFs of VerifierIoIsWdmVersionAvailable @ 0x140932D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoIsWdmVersionAvailable()
{
  return ((__int64 (*)(void))pXdvIoIsWdmVersionAvailable)();
}
