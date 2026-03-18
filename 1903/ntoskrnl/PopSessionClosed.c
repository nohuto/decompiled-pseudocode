/*
 * XREFs of PopSessionClosed @ 0x140728628
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x140728668 (PopFreeSessionState.c)
 */

__int64 __fastcall PopSessionClosed(unsigned int a1)
{
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, a1, 0);
  return PopFreeSessionState(a1);
}
