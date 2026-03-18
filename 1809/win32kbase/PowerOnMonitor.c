/*
 * XREFs of PowerOnMonitor @ 0x1C0097530
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0097168 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0097280 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00972E0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00973DC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00977F0 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C009780C (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0097940 (EtwTracPowerOnMonitoreBegin.c)
 *     SqmPowerState @ 0x1C0098470 (SqmPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A2BA0 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00A2C54 (DrvSetMonitorPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A3CB0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvChangeD3RequestsState @ 0x1C00A5B98 (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00A5C60 (DCompositionForceRender.c)
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
  __int64 v14; // rcx
  int v15[4]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

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
        if ( !gPowerTransitionsState && !qword_1C01CE24C )
        {
          v16 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v16, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v11 = *((_QWORD *)gptiCurrent + 57);
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
        DrvSetMonitorPowerState(v13, 1LL, 0LL, a2);
        DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported() >= 0 )
          ModerncorePowerOnMonitor();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v14) = 1;
        DrvChangeD3RequestsState(v14);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C01CE1F0 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(PowerMonitorOn, a1, v6, v10);
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported() >= 0 )
      xxxRefreshDisplayOrientation();
    if ( v9 )
    {
      v15[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v15, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
