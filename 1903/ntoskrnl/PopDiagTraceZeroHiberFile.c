/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1405ADE64
 * Callers:
 *     PopZeroHiberFile @ 0x1408A86CC (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
