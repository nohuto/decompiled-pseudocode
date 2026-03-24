/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x140930C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetExclusiveWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetExclusiveWaiterCount)();
}
