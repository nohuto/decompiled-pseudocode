/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x14057DF98
 * Callers:
 *     PopZeroHiberFile @ 0x14086BDF0 (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A40 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
