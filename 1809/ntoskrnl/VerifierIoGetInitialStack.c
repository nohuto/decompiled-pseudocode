/*
 * XREFs of VerifierIoGetInitialStack @ 0x140931D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetInitialStack()
{
  return ((__int64 (*)(void))pXdvIoGetInitialStack)();
}
