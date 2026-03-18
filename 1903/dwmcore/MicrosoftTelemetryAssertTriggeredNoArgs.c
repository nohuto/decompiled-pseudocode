/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180222240
 * Callers:
 *     PubSebRegisterRpc @ 0x1800DE140 (PubSebRegisterRpc.c)
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18018EE54 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180222268 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0LL, 0LL, 0xFFFFFFFFLL, -1);
}
