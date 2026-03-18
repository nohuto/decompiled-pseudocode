/*
 * XREFs of ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179CF4
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C017A238 (MonitorCreatePhysicalMonitor.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C00560AC (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C005610C (-_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6A88 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CA0C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179630 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0179788 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0179824 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179E5C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0179F6C (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3DF4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02CEB98 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned int v6; // r12d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r13
  int EmergencySimulatedMonitor; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGMONITOR ***v12; // rdi
  DXGMONITOR *v13; // rsi
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGMONITOR *v17; // rbx
  int v18; // r15d
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v23; // r15d
  DXGMONITOR *v24; // r15
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  ADAPTER_DISPLAY *v33; // rax
  DXGADAPTER *v34; // r9
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v36; // rax
  struct DXGMONITOR ***v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  DXGMONITOR *v45; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v46; // [rsp+98h] [rbp+50h] BYREF
  struct _DEVICE_OBJECT *v47; // [rsp+A0h] [rbp+58h]
  unsigned __int8 v48; // [rsp+A8h] [rbp+60h]

  v48 = a4;
  v47 = a3;
  v6 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_BYTE *)this + 5) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q((__int64)this, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start, (const GUID *)a3, v6);
  v8 = a6;
  MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)this, v6, 0, 0LL, 1, (__int64)a6);
  v45 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor((MONITOR_MGR *)this, &v45);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v12 = (struct DXGMONITOR ***)v45;
    if ( !v45 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v28);
    }
    MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v12);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v29);
    }
    v12 = (struct DXGMONITOR ***)v45;
    if ( v45 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v30);
    }
  }
  v45 = 0LL;
  v13 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v6, 0, &v45);
  v17 = v45;
  v18 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v45 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v12 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v32);
    }
    v19 = v48;
    if ( *((_DWORD *)v17 + 108) == 1 )
    {
      if ( v48 && *((struct _DEVICE_OBJECT **)v17 + 7) == v47 )
      {
        LOBYTE(v15) = 1;
        DXGMONITOR::_ChangeLIDStatus(v17, v15);
        v33 = this[1];
        if ( *(_DWORD *)(*((_QWORD *)v33 + 2) + 284LL) == 32902 )
        {
          if ( DXGADAPTER::UsingSetTimingsFromVidPn(*((DXGADAPTER **)v33 + 2)) )
          {
            SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v34, v6, &v46);
            if ( SourceConnectedToTargetInClientVidPn == -1071774884
              || SourceConnectedToTargetInClientVidPn == -1071774912 )
            {
              ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], 0LL, v8);
            }
          }
        }
        return 0LL;
      }
      v13 = v17;
      v37 = (struct DXGMONITOR ***)v17;
      v17 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList((struct _FAST_MUTEX *)this, v37);
    }
    else
    {
      v13 = (DXGMONITOR *)*((_QWORD *)v17 + 55);
      *((_QWORD *)v17 + 55) = 0LL;
    }
  }
  else
  {
    if ( v45 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v38);
    }
    if ( v18 == -1073741275 )
    {
      v19 = v48;
      goto LABEL_14;
    }
    v39 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v39);
    v19 = v48;
  }
  if ( v13 )
  {
    v40 = (*((_DWORD *)v13 + 10) >> 1) & 1;
    if ( (_DWORD)v40 != (v19 != 0) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v40, v15);
      WdLogEvent5_WdAssertion(v41);
    }
    DXGMONITOR::_UnregisterPnPTargetDeviceNotification(v13);
    *((_QWORD *)v13 + 7) = 0LL;
  }
LABEL_14:
  v45 = 0LL;
  v23 = MONITOR_MGR::_CreatePhysicalMonitor((MONITOR_MGR *)this, v6, v47, v19, a5, &v45, v8);
  if ( v23 >= 0 )
  {
    v24 = v45;
    if ( !v45 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v42);
    }
    if ( v17 )
    {
      *((_DWORD *)v17 + 10) ^= (*((_DWORD *)v24 + 10) ^ *((_DWORD *)v17 + 10)) & 2;
      v43 = *((_DWORD *)v17 + 10) ^ ((unsigned __int8)*((_DWORD *)v17 + 10) ^ (unsigned __int8)*((_DWORD *)v24 + 10)) & 4;
      *((_DWORD *)v17 + 10) = v43;
      v25 = (*((_DWORD *)v24 + 10) ^ v43) & 0x20;
      *((_DWORD *)v24 + 10) ^= v25;
      *((_QWORD *)v17 + 55) = v24;
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v24);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v13 )
        v12 = (struct DXGMONITOR ***)v13;
      return MONITOR_MGR::_HandleCreateMonitorStep2((MONITOR_MGR *)this, v6, (struct DXGMONITOR *)v12, v24, v8);
    }
    if ( *((_QWORD *)v24 + 61) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v25, v20);
      WdLogEvent5_WdAssertion(v36);
    }
    *((_BYTE *)v24 + 480) = 1;
    if ( v13 )
      v12 = (struct DXGMONITOR ***)v13;
    *((_QWORD *)v24 + 61) = v12;
    MONITOR_MGR::_EnterMonitorPendingState((MONITOR_MGR *)this);
    return 0LL;
  }
  if ( v45 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v21, v20);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v13 )
    MONITOR_MGR::_HandleCreateMonitorStep2((MONITOR_MGR *)this, v6, v13, 0LL, v8);
  if ( v12 )
    MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, (struct DXGMONITOR *)v12);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q(v21, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v22, v6);
  return (unsigned int)v23;
}
