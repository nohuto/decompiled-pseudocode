/*
 * XREFs of VerifierIoReuseIrp @ 0x140933050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReuseIrp()
{
  return ((__int64 (*)(void))pXdvIoReuseIrp)();
}
