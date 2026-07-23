/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x1409337F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmLockPagableDataSection()
{
  return ((__int64 (*)(void))pXdvMmLockPagableDataSection)();
}
