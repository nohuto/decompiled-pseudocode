/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0A9C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C0291BDC (MonitorSetUsageClass.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C00B7BC8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // r15
  unsigned int v6; // ebp
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct DXGGLOBAL *Global; // rax
  int TtmDevice; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax

  if ( *((_DWORD *)this + 147) )
  {
    v16 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    v5 = (char *)this + 576;
    if ( *((_QWORD *)this + 72) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
      return 0LL;
    }
    v6 = *((_DWORD *)this + 10);
    v7 = *((_DWORD *)this + 108);
    v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
    v9 = *(_QWORD *)(v8 + 16);
    v10 = *(_QWORD *)(v9 + 192);
    Global = DXGGLOBAL::GetGlobal(v8);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 77),
                  (v6 >> 1) & 1 | (v7 != 1 ? 2 : 0),
                  v10,
                  v9,
                  *((_DWORD *)this + 11),
                  (v6 >> 1) & 1 | (v7 != 1 ? 2 : 0),
                  v5);
    v14 = TtmDevice;
    if ( TtmDevice >= 0 )
      return 0LL;
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v17[3] = this;
    v17[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v17[5] = v14;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v14;
  }
}
