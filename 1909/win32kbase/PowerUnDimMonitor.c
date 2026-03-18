/*
 * XREFs of PowerUnDimMonitor @ 0x1C0066CB8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00669D0 (PowerOnMonitor.c)
 * Callees:
 *     SqmPowerState @ 0x1C00644C0 (SqmPowerState.c)
 *     DrvSetMonitorsDimState @ 0x1C00A110C (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C00A8740 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00B9E10 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C00B9EEC (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BC954 (DrvSetMonitorBrightness.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void PowerUnDimMonitor()
{
  bool v0; // bl
  __int64 v1; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v2[96]; // [rsp+40h] [rbp-78h] BYREF

  v1 = 2LL;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( !gbPowerHighPrecisionBrightnessSupported )
      v0 = dword_1C02127A0 != dword_1C021278C;
    memset(v2, 0, 0x58uLL);
    if ( v0 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, 0);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        dword_1C02127A4,
        dword_1C02127A8,
        0,
        (__int64)&byte_1C02127C4,
        0,
        v1);
      BYTE4(v1) = 1;
    }
    else if ( dword_1C0212780 == 1 )
    {
      goto LABEL_13;
    }
    DrvSetMonitorsDimState(0LL);
    BYTE5(v1) = 1;
    if ( v0 )
    {
      if ( (int)IsModerncorePowerUnDimMonitorSupported() >= 0 )
        ModerncorePowerUnDimMonitor();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      DrvDxgkWriteDiagEntry(v2);
      dword_1C021278C = dword_1C02127A4;
      dword_1C02127A0 = dword_1C02127A4;
    }
  }
LABEL_13:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v1);
}
