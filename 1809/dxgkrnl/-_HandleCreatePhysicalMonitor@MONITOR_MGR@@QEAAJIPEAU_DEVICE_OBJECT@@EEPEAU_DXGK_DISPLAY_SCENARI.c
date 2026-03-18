/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C028FDA4 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C004EF48 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C004EFA8 (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C00B4314 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00B64DC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00BED04 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E310 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C028FAB8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0299A20 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        DXGADAPTER ***this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v8; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // r13
  int EmergencySimulatedMonitor; // eax
  __int64 v11; // rcx
  struct DXGMONITOR *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  DXGMONITOR *v16; // rsi
  int MonitorInstance; // eax
  __int64 v18; // rcx
  DXGMONITOR *v19; // rbx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // r15
  DXGADAPTER **v24; // rax
  DXGADAPTER *v25; // r9
  int SourceConnectedToTargetInClientVidPn; // eax
  struct DXGMONITOR *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // r15d
  DXGMONITOR *v36; // r15
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  DXGMONITOR *v42; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v43; // [rsp+98h] [rbp+50h] BYREF
  struct _DEVICE_OBJECT *v44; // [rsp+A0h] [rbp+58h]
  unsigned __int8 v45; // [rsp+A8h] [rbp+60h]

  v45 = a4;
  v44 = a3;
  if ( a2 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (const GUID *)a3, a2);
  v9 = a6;
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, a2, 0, 0LL, 1, (__int64)a6);
  v42 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((struct _FAST_MUTEX *)this, &v42);
  if ( EmergencySimulatedMonitor < 0 )
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v14);
    }
    v12 = v42;
    if ( v42 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v15);
    }
  }
  else
  {
    v12 = v42;
    if ( !v42 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
    }
    MONITOR_MGR::_RemoveMonitorFromList((MONITOR_MGR *)this, v12);
  }
  v42 = 0LL;
  v16 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, a2, 0, &v42);
  v19 = v42;
  v20 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v42 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v20 == -1073741275 )
    {
      v23 = v45;
      goto LABEL_39;
    }
    v30 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v30);
    v23 = v45;
  }
  else
  {
    if ( !v42 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( v12 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = v45;
    if ( *((_DWORD *)v19 + 108) == 1 )
    {
      if ( v45 && *((struct _DEVICE_OBJECT **)v19 + 7) == v44 )
      {
        DXGMONITOR::_ChangeLIDStatus(v19, 1);
        v24 = this[1];
        if ( *((_DWORD *)v24[2] + 71) == 32902 )
        {
          if ( DXGADAPTER::UsingSetTimingsFromVidPn(v24[2]) )
          {
            SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v25, a2, &v43);
            if ( SourceConnectedToTargetInClientVidPn == -1071774884
              || SourceConnectedToTargetInClientVidPn == -1071774912 )
            {
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], 0LL, v9);
            }
          }
        }
        return 0LL;
      }
      v16 = v19;
      v28 = v19;
      v19 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((MONITOR_MGR *)this, v28);
    }
    else
    {
      v16 = (DXGMONITOR *)*((_QWORD *)v19 + 55);
      *((_QWORD *)v19 + 55) = 0LL;
    }
  }
  if ( v16 )
  {
    v31 = (*((_DWORD *)v16 + 10) >> 1) & 1;
    if ( (_DWORD)v31 != (v23 != 0) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v32);
    }
    DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v16);
    *((_QWORD *)v16 + 7) = 0LL;
  }
LABEL_39:
  v42 = 0LL;
  v35 = MONITOR_MGR::_CreatePhysicalMonitor((MONITOR_MGR *)this, a2, v44, v23, a5, &v42, v9);
  if ( v35 >= 0 )
  {
    v36 = v42;
    if ( !v42 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( v19 )
    {
      *((_DWORD *)v19 + 10) ^= (*((_DWORD *)v36 + 10) ^ *((_DWORD *)v19 + 10)) & 2;
      v38 = *((_DWORD *)v19 + 10) ^ ((unsigned __int8)*((_DWORD *)v19 + 10) ^ (unsigned __int8)*((_DWORD *)v36 + 10)) & 4;
      *((_DWORD *)v19 + 10) = v38;
      v39 = (*((_DWORD *)v36 + 10) ^ v38) & 0x20;
      *((_DWORD *)v36 + 10) ^= v39;
      *((_QWORD *)v19 + 55) = v36;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v36);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v16 )
        v12 = v16;
      return MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v12, v36, v9);
    }
    if ( *((_QWORD *)v36 + 61) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v40);
    }
    *((_BYTE *)v36 + 480) = 1;
    if ( v16 )
      v12 = v16;
    *((_QWORD *)v36 + 61) = v12;
    MONITOR_MGR::_EnterMonitorPendingState((MONITOR_MGR *)this);
    return 0LL;
  }
  if ( v42 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( v16 )
    MONITOR_MGR::_HandleCreateMonitorStep2((struct _FAST_MUTEX *)this, a2, v16, 0LL, v9);
  if ( v12 )
    MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v12);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q(v33, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v34, a2);
  return (unsigned int)v35;
}
