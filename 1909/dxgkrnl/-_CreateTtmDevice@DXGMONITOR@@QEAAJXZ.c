/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015E68C
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D1E28 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017398C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179E5C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C02CA8C8 (MonitorSetUsageClass.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C015E7A8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2)
{
  char *v3; // r15
  unsigned int v4; // ebp
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  struct DXGGLOBAL *Global; // rax
  int TtmDevice; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax

  if ( *((_DWORD *)this + 148) )
  {
    v16 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    v3 = (char *)this + 576;
    if ( *((_QWORD *)this + 72) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
      return 0LL;
    }
    v4 = *((_DWORD *)this + 10);
    v5 = *((_DWORD *)this + 108);
    v6 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v7 + 192);
    Global = DXGGLOBAL::GetGlobal(v6, a2);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 74),
                  (v4 >> 1) & 1 | (v5 != 1 ? 2 : 0),
                  v8,
                  v7,
                  *((_DWORD *)this + 11),
                  (v4 >> 1) & 1 | (v5 != 1 ? 2 : 0),
                  v3);
    v14 = TtmDevice;
    if ( TtmDevice >= 0 )
      return 0LL;
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v17[3] = this;
    v17[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v17[5] = v14;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v14;
  }
}
