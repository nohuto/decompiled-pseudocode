/*
 * XREFs of PopDiagTraceZeroHiberFileEnd @ 0x1405ADE80
 * Callers:
 *     PopZeroHiberFile @ 0x1408A86CC (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFileEnd()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_STOP);
}
