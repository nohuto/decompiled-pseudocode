/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14071EA74
 * Callers:
 *     PopSetDisplayStatus @ 0x1406E31A0 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x1406E31EC (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x14071E9CC (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x14014252C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406DD9F0 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_14076CE10;
  PopPrintEx(3u, "PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
