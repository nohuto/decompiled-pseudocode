/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140878198
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14075EBD0 (PopNetEvaluationWorkerCallback.c)
 *     PopNetDisengageNetworkRefresh @ 0x140877F10 (PopNetDisengageNetworkRefresh.c)
 *     PopNetEngageNetworkRefresh @ 0x140877F58 (PopNetEngageNetworkRefresh.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( qword_140441078 )
  {
    LOBYTE(v2) = a1;
    qword_140441078(v2);
  }
  return PopAcquirePolicyLock();
}
