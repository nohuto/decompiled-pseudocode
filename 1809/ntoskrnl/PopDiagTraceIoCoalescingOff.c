/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408731B4
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402DB890 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140135A60 (PopDiagTraceEventNoPayload.c)
 *     PopPrintEx @ 0x14014242C (PopPrintEx.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, "PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
