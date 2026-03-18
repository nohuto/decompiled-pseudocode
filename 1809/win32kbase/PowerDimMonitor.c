/*
 * XREFs of PowerDimMonitor @ 0x1C00E2618
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x1C008F74C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x1C00937B8 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C009441C (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0095510 (DrvDxgkWriteDiagEntry.c)
 *     SqmPowerState @ 0x1C0098470 (SqmPowerState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00A8BF0 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 */

void PowerDimMonitor()
{
  char v0; // bl
  int v1; // [rsp+30h] [rbp-88h] BYREF
  __int16 v2; // [rsp+34h] [rbp-84h]
  char v3; // [rsp+36h] [rbp-82h]
  _BYTE v4[96]; // [rsp+40h] [rbp-78h] BYREF

  v1 = 1;
  v2 = 0;
  v3 = 1;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( gbPowerHighPrecisionBrightnessSupported
      || dword_1C01CE210 != dword_1C01CE204 && dword_1C01CE204 < (unsigned int)dword_1C01CE1FC )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v4, 1);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C01CE224,
        (unsigned int)dword_1C01CE228,
        1u,
        &byte_1C01CE234,
        0);
      LOBYTE(v2) = 1;
    }
    else
    {
      v0 = 0;
    }
    DrvSetMonitorsDimState(1);
    HIBYTE(v2) = 1;
    if ( v0 )
    {
      if ( (int)IsModerncorePowerDimMonitorSupported() >= 0 )
        ModerncorePowerDimMonitor();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      DrvDxgkWriteDiagEntry();
      dword_1C01CE204 = dword_1C01CE224;
      dword_1C01CE210 = dword_1C01CE224;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v1);
}
