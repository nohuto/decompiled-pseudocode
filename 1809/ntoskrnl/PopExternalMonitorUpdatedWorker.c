/*
 * XREFs of PopExternalMonitorUpdatedWorker @ 0x140764360
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013BA40 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopEvaluateInputSuppressionAction @ 0x14086DCBC (PopEvaluateInputSuppressionAction.c)
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
