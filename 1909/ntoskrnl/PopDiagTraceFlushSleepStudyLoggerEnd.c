/*
 * XREFs of PopDiagTraceFlushSleepStudyLoggerEnd @ 0x14059D0CC
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1401698F4 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLoggerEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_STOP);
}
