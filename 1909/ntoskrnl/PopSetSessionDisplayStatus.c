/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14073CED8
 * Callers:
 *     PopSessionDisconnected @ 0x14072A91C (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x14072C12C (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x14074884C (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406F0CFC (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140794B60;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
