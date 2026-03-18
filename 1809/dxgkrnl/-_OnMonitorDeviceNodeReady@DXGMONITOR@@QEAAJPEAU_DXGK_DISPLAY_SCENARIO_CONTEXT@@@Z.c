/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C0290E80 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0295D7C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296054 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296410 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C0296C2C (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0296E90 (-_UpdatePnPDeviceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v7 = *((_DWORD *)this + 10);
  if ( (v7 & 0x10) == 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v8);
    }
    if ( !*((_QWORD *)this + 7) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    if ( *((_DWORD *)this + 108) != 1 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_DWORD *)this + 10) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a2, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_UpdatePnPDeviceProperties(this);
    if ( *((_BYTE *)this + 480) )
    {
      v11 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
      if ( !v11 )
      {
        v12 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v12);
        v11 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  v11,
                  *((_DWORD *)this + 11),
                  *((struct DXGMONITOR **)this + 61),
                  this,
                  a2) < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v14);
      }
      if ( *((_BYTE *)this + 480) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
    }
  }
  return 0LL;
}
