/*
 * XREFs of WheapSqmWaitWorkerRoutine @ 0x1408DD4C0
 * Callers:
 *     WheapEtwEnableCallback @ 0x1407614A0 (WheapEtwEnableCallback.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321934 (WheapSqmCollectWheaOscTelemetry.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1408DC4A4 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DD0C4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DD374 (WheapSqmCollectPshedPluginTelemetry.c)
 */

__int64 WheapSqmWaitWorkerRoutine()
{
  __int64 result; // rax
  __int64 v1; // rdx

  if ( WheapIsSqmLoggerRunning() )
  {
    WheapSqmCollectWheaPolicyTelemetry();
    WheapSqmCollectPshedPluginTelemetry();
    return WheapSqmCollectWheaOscTelemetry();
  }
  else
  {
    result = (unsigned int)(WheapSqmWaitRetryCount + 1);
    WheapSqmWaitRetryCount = result;
    if ( (unsigned int)result <= 7 )
    {
      v1 = -WheapSqmWaitTimeout;
      WheapSqmWaitTimeout *= 2LL;
      return KiSetTimerEx((__int64)&WheapSqmWaitTimer, v1, 0, 0, (__int64)&WheapSqmWaitTimerDpc);
    }
  }
  return result;
}
