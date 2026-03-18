/*
 * XREFs of PopDiagTraceZeroHiberFile @ 0x1405ADE44
 * Callers:
 *     PopZeroHiberFile @ 0x1408A7F2C (PopZeroHiberFile.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceZeroHiberFile()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROHIBERFILE_START);
}
