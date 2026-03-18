/*
 * XREFs of PowerDimUndimResend @ 0x1C0099C10
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x1C008F74C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00937B8 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C009441C (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0095510 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00A8BF0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 */

void PowerDimUndimResend()
{
  char v0; // di
  int v1; // [rsp+30h] [rbp-88h] BYREF
  __int16 v2; // [rsp+34h] [rbp-84h]
  bool v3; // [rsp+36h] [rbp-82h]
  _BYTE v4[96]; // [rsp+40h] [rbp-78h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  if ( !gProtocolType && !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    if ( gbPowerHighPrecisionBrightnessSupported || byte_1C01CE234 || dword_1C01CE210 == -1 )
    {
      v0 = 0;
    }
    else
    {
      v0 = 1;
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C01CE210,
        0xFFFFFFFFLL,
        dword_1C01CE210 == dword_1C01CE204,
        &byte_1C01CE234,
        1);
      LOBYTE(v2) = 1;
    }
    v3 = dword_1C01CE1F0 == 2;
    DrvSetMonitorsDimState(dword_1C01CE1F0 == 2);
    HIBYTE(v2) = 1;
    if ( v0 && byte_1C01CE234 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket(
        (struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4,
        dword_1C01CE210 == dword_1C01CE204);
      DrvDxgkWriteDiagEntry();
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v1);
}
