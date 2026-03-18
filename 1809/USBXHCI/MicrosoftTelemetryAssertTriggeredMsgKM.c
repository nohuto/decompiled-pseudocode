/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0006530
 * Callers:
 *     RootHub_WaitForResumeCompletion @ 0x1C0022CB0 (RootHub_WaitForResumeCompletion.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C000654C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
