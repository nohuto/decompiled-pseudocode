/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x1406DEFAC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x140135A40 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x140569714 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8u);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9u);
}
