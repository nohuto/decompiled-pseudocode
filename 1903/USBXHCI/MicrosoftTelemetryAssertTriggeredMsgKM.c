/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00082F0
 * Callers:
 *     RootHub_WaitForResumeCompletion @ 0x1C0027218 (RootHub_WaitForResumeCompletion.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C000830C (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr);
}
