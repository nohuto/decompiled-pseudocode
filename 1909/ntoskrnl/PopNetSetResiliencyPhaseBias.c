/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x1408B3B08
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x140786A70 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3850 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x1408B3898 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( qword_14046BB08 )
  {
    LOBYTE(v2) = a1;
    qword_14046BB08(v2);
  }
  return PopAcquirePolicyLock();
}
