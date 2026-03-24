/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x14057DF98
 * Callers:
 *     PopZeroHiberFile @ 0x14086BDD0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
