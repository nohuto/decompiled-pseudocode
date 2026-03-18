/*
 * XREFs of PopDiagTracePrepareSleep @ 0x14072521C
 * Callers:
 *     PopPrepareSleep @ 0x14015E7E0 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
