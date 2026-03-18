/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x140725238
 * Callers:
 *     PopPrepareSleep @ 0x14015E7E0 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
