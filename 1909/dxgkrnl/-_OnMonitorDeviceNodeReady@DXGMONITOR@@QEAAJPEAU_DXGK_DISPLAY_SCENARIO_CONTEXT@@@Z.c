/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01779F0
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C017A004 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C01776CC (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0177A90 (-_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0177B58 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0177DB0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0178450 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179E5C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(DXGMONITOR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  MONITOR_MGR *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  v6 = *((_DWORD *)this + 10);
  if ( (v6 & 0x10) == 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v10);
    }
    if ( !*((_QWORD *)this + 7) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v11);
    }
    if ( *((_DWORD *)this + 108) != 1 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v12);
    }
    *((_DWORD *)this + 10) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a2, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)this, v7);
    DXGMONITOR::_UpdatePnPDeviceProperties(this);
    if ( *((_BYTE *)this + 480) )
    {
      v13 = (MONITOR_MGR *)*((_QWORD *)this + 4);
      if ( !v13 )
      {
        v14 = WdLogNewEntry5_WdAssertion(0LL, v8);
        WdLogEvent5_WdAssertion(v14);
        v13 = (MONITOR_MGR *)*((_QWORD *)this + 4);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  v13,
                  *((_DWORD *)this + 11),
                  *((struct DXGMONITOR **)this + 61),
                  this,
                  a2) < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v17);
      }
      if ( *((_BYTE *)this + 480) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v16, v15);
        WdLogEvent5_WdAssertion(v18);
      }
    }
  }
  return 0LL;
}
