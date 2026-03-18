/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x140725300
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
