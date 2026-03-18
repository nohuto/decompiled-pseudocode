/*
 * XREFs of PopSessionCreated @ 0x140749D30
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406F0CFC (PopDiagTraceSessionStates.c)
 */

void __fastcall PopSessionCreated(int a1)
{
  PopPrintEx(3u, (__int64)"PopAdaptive: Session %u is started\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, a1, 0);
}
