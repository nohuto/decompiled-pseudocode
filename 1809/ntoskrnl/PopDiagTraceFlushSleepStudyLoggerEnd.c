/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14056EE34
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015988C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
