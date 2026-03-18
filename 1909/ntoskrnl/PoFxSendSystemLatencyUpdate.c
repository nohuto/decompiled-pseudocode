/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1400F09A4
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400F0930 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140300080 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x14072AA34 (PopEnforceResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1408A4DA0 (PopWnfFullscreenVideoCallback.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1400F0A30 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x1400F0A64 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400F0AC0 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400F0B64 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x1400F0BD8 (PpmGetExitSamplingCountdown.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140443B94 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
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
