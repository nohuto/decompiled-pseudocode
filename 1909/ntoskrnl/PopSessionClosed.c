/*
 * XREFs of PopSessionClosed @ 0x140729998
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406F0CFC (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x1407299D8 (PopFreeSessionState.c)
 */

__int64 __fastcall PopSessionClosed(unsigned int a1)
{
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is closed\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, a1, 0);
  return PopFreeSessionState(a1);
}
