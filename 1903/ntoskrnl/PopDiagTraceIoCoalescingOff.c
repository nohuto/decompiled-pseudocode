/*
 * XREFs of PopDiagTraceIoCoalescingOff @ 0x1408AFF5C
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1402F7358 (PopCoalescingSetActiveState.c)
 * Callees:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140138034 (PopDiagTraceEventNoPayload.c)
 */

void PopDiagTraceIoCoalescingOff()
{
  PopPrintEx(3u, (__int64)"PopCoalescing: OFF notification sent.\n");
  PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_OFF);
}
