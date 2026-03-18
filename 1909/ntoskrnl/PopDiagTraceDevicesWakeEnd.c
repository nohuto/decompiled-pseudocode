/*
 * XREFs of PopDiagTraceDevicesWakeEnd @ 0x1407271A0
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceDevicesWakeEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICESWAKE_END);
}
