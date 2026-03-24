/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x14057DF7C
 * Callers:
 *     PopZeroHiberFile @ 0x14086BDD0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
