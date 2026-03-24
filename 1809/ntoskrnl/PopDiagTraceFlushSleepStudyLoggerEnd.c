/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14056DE34
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015978C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
