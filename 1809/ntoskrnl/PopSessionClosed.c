/*
 * XREFs of PopSessionClosed @ 0x1406E2698
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406DD9F0 (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x1406E26D8 (PopFreeSessionState.c)
 */

__int64 __fastcall PopSessionClosed(unsigned int a1)
{
  PopPrintEx(3u, "PopAdaptive: Session %u is closed\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, a1, 0);
  return PopFreeSessionState(a1);
}
