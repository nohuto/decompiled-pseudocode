/*
 * XREFs of PopDiagTracePrepareSleepEnd @ 0x1407270D8
 * Callers:
 *     PopPrepareSleep @ 0x14015EE80 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleepEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP_END);
}
