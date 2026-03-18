/*
 * XREFs of PowerDimMonitor @ 0x1C00A466C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C004BB20 (DrvDxgkWriteDiagEntry.c)
 *     DrvSetMonitorBrightness @ 0x1C006D878 (DrvSetMonitorBrightness.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C00A2618 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     DrvDimMonitors @ 0x1C00D3F0C (DrvDimMonitors.c)
 */

void PowerDimMonitor()
{
  _BYTE v0[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightnessSupported
     || dword_1C01A0370 != dword_1C01A0364 && dword_1C01A0364 < (unsigned int)dword_1C01A035C)
    && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v0, 1);
    DrvSetMonitorBrightness(
      *(_QWORD *)(gpDispInfo + 16),
      (unsigned int)dword_1C01A0384,
      (unsigned int)dword_1C01A0388,
      1u,
      &byte_1C01A0394,
      0);
    DrvDimMonitors();
    if ( (int)IsModerncorePowerDimMonitorSupported() >= 0 )
      ModerncorePowerDimMonitor();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C01A0364 = dword_1C01A0384;
    dword_1C01A0370 = dword_1C01A0384;
  }
}
