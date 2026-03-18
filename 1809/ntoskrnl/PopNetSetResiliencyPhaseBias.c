/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140876F58
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14075DA00 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x140876CD0 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x140876D18 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( qword_14043FFB8 )
  {
    LOBYTE(v2) = a1;
    qword_14043FFB8(v2);
  }
  return PopAcquirePolicyLock();
}
