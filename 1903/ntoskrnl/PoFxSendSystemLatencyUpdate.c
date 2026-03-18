/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1400EDAE4
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400EDA70 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x1403005D0 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1407296C4 (PopEnforceResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A5560 (PopWnfFullscreenVideoCallback.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1400EDB70 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x1400EDBA4 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400EDC00 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400EDCA4 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x1400EDD18 (PpmGetExitSamplingCountdown.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140443C14 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140571354;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v4, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
        result = KeFlushProcessWriteBuffers(1);
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
