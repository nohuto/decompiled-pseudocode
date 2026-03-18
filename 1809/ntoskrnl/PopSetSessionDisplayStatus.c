/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14071D7F4
 * Callers:
 *     PopSetDisplayStatus @ 0x1406E1F20 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x1406E1F6C (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x14071D74C (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x14014240C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_14076BC40;
  PopPrintEx(3u, "PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
