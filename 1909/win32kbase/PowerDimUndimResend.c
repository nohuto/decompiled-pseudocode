/*
 * XREFs of PowerDimUndimResend @ 0x1C006354C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0046FBC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062C00 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvSetMonitorsDimState @ 0x1C00A110C (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C00A8740 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00B9E10 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00B9EEC (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BC954 (DrvSetMonitorBrightness.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void PowerDimUndimResend()
{
  int v0; // ebx
  char v1; // di
  __int64 v2; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v3[96]; // [rsp+40h] [rbp-78h] BYREF

  v0 = 0;
  v2 = 0LL;
  if ( !gProtocolType && !gfSwitchInProgress )
  {
    if ( gbPowerHighPrecisionBrightnessSupported || byte_1C02127C4 || dword_1C02127A0 == -1 )
    {
      v1 = 0;
    }
    else
    {
      v1 = 1;
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        dword_1C02127A0,
        -1,
        dword_1C02127A0 == dword_1C0212794,
        (__int64)&byte_1C02127C4,
        1,
        v2);
      BYTE4(v2) = 1;
    }
    BYTE6(v2) = dword_1C0212780 == 2;
    DrvSetMonitorsDimState();
    BYTE5(v2) = 1;
    if ( v1 && byte_1C02127C4 )
    {
      memset(v3, 0, 0x58uLL);
      LOBYTE(v0) = dword_1C02127A0 == dword_1C0212794;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v3, v0);
      DrvDxgkWriteDiagEntry(v3);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v2);
}
