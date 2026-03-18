/*
 * XREFs of UpdateExternalMonitorConnectedStatus @ 0x1C0005158
 * Callers:
 *     InitVideo @ 0x1C00767BC (InitVideo.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvIsExternalMonitorActive @ 0x1C00051F0 (DrvIsExternalMonitorActive.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UpdateExternalMonitorConnectedStatus(char a1)
{
  NTSTATUS result; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v5 = 0;
  v3[0] = 0;
  result = DrvIsExternalMonitorActive(v3);
  if ( result >= 0 )
  {
    result = v3[0];
    if ( gExternalMonitorConnected != v3[0] || a1 )
    {
      gExternalMonitorConnected = v3[0];
      LODWORD(InputBuffer) = 23;
      LOBYTE(v5) = v3[0];
      return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
    }
  }
  return result;
}
