/*
 * XREFs of PopDiagTracePrepareSleep @ 0x1407270BC
 * Callers:
 *     PopPrepareSleep @ 0x14015EE80 (PopPrepareSleep.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTracePrepareSleep()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_PREPARESLEEP);
}
