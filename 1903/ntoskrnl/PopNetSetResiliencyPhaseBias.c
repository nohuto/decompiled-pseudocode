/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408B4238
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x140784710 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3F80 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408B3FC8 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( qword_14046BDC8 )
  {
    LOBYTE(v2) = a1;
    qword_14046BDC8(v2);
  }
  return PopAcquirePolicyLock();
}
