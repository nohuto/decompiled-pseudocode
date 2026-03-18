/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E310
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0018C34 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00B6114 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C00B64DC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C028FAB8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct DXGMONITOR **a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct DXGMONITOR **v7; // r15
  __int64 v9; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGMONITOR *v19; // rbx
  __int64 v20; // rax
  int MonitorInstance; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  struct DXGMONITOR **v25; // rdi
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax

  v7 = a6;
  v9 = a2;
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v9 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  *v7 = 0LL;
  v15 = (char *)operator new(0x430uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v15 )
    v19 = DXGMONITOR::DXGMONITOR(v15, this, v17, v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    a6 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v9, 0, (struct DXGMONITOR **)&a6);
    v25 = a6;
    v26 = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( a6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v30);
      }
      if ( v26 != -1073741275 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v31);
      }
      MONITOR_MGR::_InsertMonitorToList((struct _FAST_MUTEX *)this, v19);
    }
    else
    {
      if ( !a6 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( *((_DWORD *)v25 + 108) == 1 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( v25[55] )
      {
        v29 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v29);
      }
      v25[55] = v19;
    }
    LOBYTE(v24) = a4;
    v33 = (int)DXGMONITOR::_InitializeMonitor((__int64)v19, (unsigned int)v9, (__int64)a3, v24, a5, 1, 0LL, a7);
    if ( v25 )
      v25[55] = 0LL;
    else
      MONITOR_MGR::_RemoveMonitorFromList(this, v19);
    if ( (int)v33 >= 0 )
    {
      *v7 = v19;
      return 0LL;
    }
    else
    {
      v34 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v34 + 24) = v9;
      *(_QWORD *)(v34 + 32) = v33;
      WdLogEvent5_WdError(v34);
      DXGMONITOR::`scalar deleting destructor'(v19);
      return (unsigned int)v33;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v16);
    WdLogEvent5_WdError(v20);
    return 3221225495LL;
  }
}
