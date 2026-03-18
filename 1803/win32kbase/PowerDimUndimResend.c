/*
 * XREFs of PowerDimUndimResend @ 0x1C006D7D4
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C006D878 (DrvSetMonitorBrightness.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00A2618 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 */

__int64 PowerDimUndimResend()
{
  int v0; // ebx
  __int64 result; // rax
  _BYTE v2[96]; // [rsp+30h] [rbp-78h] BYREF

  v0 = 0;
  if ( !gProtocolType
    && !gbPowerHighPrecisionBrightnessSupported
    && !gfSwitchInProgress
    && !byte_1C01A0394
    && dword_1C01A0370 != -1 )
  {
    result = DrvSetMonitorBrightness(
               *(_QWORD *)(gpDispInfo + 16),
               dword_1C01A0370,
               -1,
               dword_1C01A0370 == dword_1C01A0364,
               (__int64)&byte_1C01A0394,
               1);
    if ( byte_1C01A0394 )
    {
      LOBYTE(v0) = dword_1C01A0370 == dword_1C01A0364;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, v0);
      return DrvDxgkWriteDiagEntry();
    }
  }
  return result;
}
