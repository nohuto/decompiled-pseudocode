/*
 * XREFs of VerifierIoGetInitialStack @ 0x140932D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetInitialStack()
{
  return ((__int64 (*)(void))pXdvIoGetInitialStack)();
}
