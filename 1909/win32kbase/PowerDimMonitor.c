/*
 * XREFs of PowerDimMonitor @ 0x1C01060CC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
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

void PowerDimMonitor()
{
  char v0; // bl
  __int64 v1; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v2[96]; // [rsp+40h] [rbp-78h] BYREF

  v1 = 0x1000000000001LL;
  if ( !gProtocolType )
  {
    v0 = 1;
    if ( !gbPowerHighPrecisionBrightnessSupported
      && (dword_1C02127A0 == dword_1C0212794 || dword_1C0212794 >= (unsigned int)dword_1C021278C) )
    {
      v0 = 0;
    }
    memset(v2, 0, 0x58uLL);
    if ( v0 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, 1);
      DrvSetMonitorBrightness(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned int)dword_1C02127B4,
        (unsigned int)dword_1C02127B8,
        1u,
        &byte_1C02127C4,
        0,
        v1);
      BYTE4(v1) = 1;
    }
    DrvSetMonitorsDimState(1);
    BYTE5(v1) = 1;
    if ( v0 )
    {
      if ( (int)IsModerncorePowerDimMonitorSupported() >= 0 )
        ModerncorePowerDimMonitor();
      if ( gSqmIsOptedIn )
        SqmPowerState();
      DrvDxgkWriteDiagEntry();
      dword_1C0212794 = dword_1C02127B4;
      dword_1C02127A0 = dword_1C02127B4;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)&v1);
}
