/*
 * XREFs of PowerDimUndimResend @ 0x1C00623F8
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x1C00A2198 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C00A95C0 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00BCE70 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00BCF4C (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BEE70 (DrvSetMonitorBrightness.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall PowerDimUndimResend(__int64 a1)
{
  int v1; // ebx
  char v2; // di
  __int64 v3; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v4[96]; // [rsp+40h] [rbp-78h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( !gProtocolType && !gfSwitchInProgress )
  {
    if ( gbPowerHighPrecisionBrightnessSupported || byte_1C02157C4 || dword_1C02157A0 == -1 )
    {
      v2 = 0;
    }
    else
    {
      v2 = 1;
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        dword_1C02157A0,
        -1,
        dword_1C02157A0 == dword_1C0215794,
        (__int64)&byte_1C02157C4,
        1,
        v3);
      BYTE4(v3) = 1;
    }
    LOBYTE(a1) = dword_1C0215780 == 2;
    BYTE6(v3) = dword_1C0215780 == 2;
    DrvSetMonitorsDimState(a1);
    BYTE5(v3) = 1;
    if ( v2 && byte_1C02157C4 )
    {
      memset(v4, 0, 0x58uLL);
      LOBYTE(v1) = dword_1C02157A0 == dword_1C0215794;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4, v1);
      DrvDxgkWriteDiagEntry(v4);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v3);
}
