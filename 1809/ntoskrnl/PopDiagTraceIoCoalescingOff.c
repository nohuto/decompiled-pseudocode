/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x140874414
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402DBA80 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, "PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
