/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14059D84C
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140169E54 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
