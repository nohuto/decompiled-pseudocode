/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x14078D0A0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013DC1C (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408AA074 (PopEvaluateInputSuppressionAction.c)
 */

__int64 PopExternalMonitorUpdatedWorker()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax

  if ( PopPlatformAoAc )
  {
    PopAcquirePolicyLock();
    PopOkayToQueueNextWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem);
    PopReleasePolicyLock();
    return PopEvaluateInputSuppressionAction(v1, v0, v2);
  }
  return result;
}
