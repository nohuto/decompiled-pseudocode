/*
 * XREFs of VerifierIoGetDriverDirectory @ 0x140932D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetDriverDirectory()
{
  return ((__int64 (*)(void))pXdvIoGetDriverDirectory)();
}
