/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180222118
 * Callers:
 *     PubSebRegisterRpc @ 0x1800D5AE8 (PubSebRegisterRpc.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180222134 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
