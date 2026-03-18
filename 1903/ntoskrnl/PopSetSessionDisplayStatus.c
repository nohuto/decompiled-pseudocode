/*
 * XREFs of PopSetSessionDisplayStatus @ 0x14073AF78
 * Callers:
 *     PopSessionDisconnected @ 0x1407295AC (PopSessionDisconnected.c)
 *     PopSetDisplayStatus @ 0x14072A294 (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x14074694C (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int Src; // [rsp+48h] [rbp+10h] BYREF

  Src = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_1407926E0;
  PopPrintEx(3u, (__int64)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &Src);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &Src);
}
