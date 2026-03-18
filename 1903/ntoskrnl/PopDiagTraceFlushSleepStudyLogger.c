/*
 * XREFs of PopDiagTraceFlushSleepStudyLogger @ 0x14059D868
 * Callers:
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140169E54 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceFlushSleepStudyLogger()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHSLEEPSTUDYLOGGER_START);
}
