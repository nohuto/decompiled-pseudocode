/*
 * XREFs of VerifierIoCancelIrp @ 0x1409327F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoCancelIrp()
{
  return ((__int64 (*)(void))pXdvIoCancelIrp)();
}
