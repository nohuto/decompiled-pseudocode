/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180220B30
 * Callers:
 *     PubSebRegisterRpc @ 0x1800DE830 (PubSebRegisterRpc.c)
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18018D714 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180220B58 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0LL, 0LL, 0xFFFFFFFFLL, -1);
}
