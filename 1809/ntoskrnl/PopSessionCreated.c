/*
 * XREFs of PopSessionCreated @ 0x140720290
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406DD9F0 (PopDiagTraceSessionStates.c)
 */

void __fastcall PopSessionCreated(int a1)
{
  PopPrintEx(3u, "PopAdaptive: Session %u is started\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, a1, 0);
}
