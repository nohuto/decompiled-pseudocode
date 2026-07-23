/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x14057EF98
 * Callers:
 *     PopZeroHiberFile @ 0x14086D030 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
