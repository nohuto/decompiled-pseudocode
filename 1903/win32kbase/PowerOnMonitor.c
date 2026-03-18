/*
 * XREFs of PowerOnMonitor @ 0x1C005B3B0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C005A854 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B124 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B2C0 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C005B67C (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C005B698 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C005B7E0 (EtwTracPowerOnMonitoreBegin.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C005B7FC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C005B9DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0061E10 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B8870 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00B8DA0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B8DF0 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00BA158 (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00BA1D0 (DCompositionForceRender.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14[4]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C02157DC )
        {
          v15 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v15, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v11 = *((_QWORD *)gptiCurrent + 56);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v12 + 64LL) & 1) != 0 )
                DCompositionForceRender(1LL, 0LL, 0LL, 0LL);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 1LL, 0LL, a2);
        DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported() >= 0 )
          ModerncorePowerOnMonitor();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v13) = 1;
        DrvChangeD3RequestsState(v13);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C0215780 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(PowerMonitorOn, a1, v6, v10);
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported() >= 0 )
      xxxRefreshDisplayOrientation();
    if ( v9 )
    {
      v14[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v14, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
