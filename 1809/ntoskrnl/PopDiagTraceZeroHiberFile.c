/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x14057EF7C
 * Callers:
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
