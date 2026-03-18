/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408AF7BC
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402F6E08 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
