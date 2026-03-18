/*
 * XREFs of PowerOnMonitor @ 0x1C00669D0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     SqmPowerState @ 0x1C00644C0 (SqmPowerState.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00667F4 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0066970 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0066C9C (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0066CB8 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0066E00 (EtwTracPowerOnMonitoreBegin.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00B709C (DrvChangeD3RequestsState.c)
 *     DCompositionForceRender @ 0x1C00B7110 (DCompositionForceRender.c)
 *     DrvSetMonitorPowerState @ 0x1C00B7990 (DrvSetMonitorPowerState.c)
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
        if ( !gPowerTransitionsState && !qword_1C02127DC )
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
    if ( dword_1C0212780 == 2 )
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
