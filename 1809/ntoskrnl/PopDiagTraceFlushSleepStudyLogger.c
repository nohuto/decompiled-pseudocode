/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14056DE50
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x14015976C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A40 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
