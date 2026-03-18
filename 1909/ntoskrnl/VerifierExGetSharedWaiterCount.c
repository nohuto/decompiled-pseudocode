/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x14096F500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetSharedWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetSharedWaiterCount)();
}
