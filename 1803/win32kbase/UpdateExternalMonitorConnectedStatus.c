/*
 * XREFs of UpdateExternalMonitorConnectedStatus @ 0x1C00A544C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     InitVideo @ 0x1C00B2994 (InitVideo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DrvIsExternalMonitorActive @ 0x1C00D5600 (DrvIsExternalMonitorActive.c)
 */

NTSTATUS __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  NTSTATUS result; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-28h] BYREF
  int InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  v3[0] = 0;
  result = DrvIsExternalMonitorActive(v3);
  if ( result >= 0 )
  {
    result = v3[0];
    if ( gExternalMonitorConnected != v3[0] || a1 )
    {
      gExternalMonitorConnected = v3[0];
      InputBuffer = 23;
      v5 = v3[0];
      return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return result;
}
