/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14056EE50
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015988C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
