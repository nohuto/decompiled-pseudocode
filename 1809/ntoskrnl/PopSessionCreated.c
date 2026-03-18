/*
 * XREFs of PopSessionCreated @ 0x14071F010
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14014240C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 */

void __fastcall PopSessionCreated(int a1)
{
  PopPrintEx(3u, "PopAdaptive: Session %u is started\n", a1);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, a1, 0);
}
