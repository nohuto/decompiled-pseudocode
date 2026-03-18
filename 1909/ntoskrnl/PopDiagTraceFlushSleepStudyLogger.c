/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14059D0E8
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1401698F4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
