/*
 * XREFs of PopNotifyCallbacksPreSleep @ 0x1407282EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 PopNotifyCallbacksPreSleep()
{
  PopCheckpointSystemSleep(8);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_START);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PRESLEEP_CALLBACKS_STOP);
  return PopCheckpointSystemSleep(9);
}
