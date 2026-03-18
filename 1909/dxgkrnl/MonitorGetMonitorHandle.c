/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C00EC42C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C01298E8 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C012ED68 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C014CA40 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C015F0E0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0180660 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0182E30 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkIsMonitorConnected @ 0x1C02034F0 (DxgkIsMonitorConnected.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0270860 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02CC260 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02CCCD0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02CCF20 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0006830 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00EC72C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(DXGADAPTER *this, __int64 a2, unsigned __int8 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  MONITOR_MGR *v15; // rdi
  int MonitorInstance; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  DXGMONITOR *v21; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct DXGMONITOR *v28; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v14 = *((_QWORD *)this + 319);
  if ( !v14 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v24);
    v14 = *((_QWORD *)this + 319);
  }
  v15 = *(MONITOR_MGR **)(v14 + 96);
  if ( !v15 )
  {
    v25 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v28 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v6, a3, &v28);
  v20 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v23 = WdLogNewEntry5_WdDmmEvent(v18, v17);
    *(_QWORD *)(v23 + 24) = (unsigned int)v6;
    *(_QWORD *)(v23 + 32) = v15;
    WdLogEvent5_WdDmmEvent(v23);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v26 + 24) = (unsigned int)v6;
    *(_QWORD *)(v26 + 32) = v15;
    WdLogEvent5_WdError(v26);
    return v20;
  }
  else
  {
    v21 = v28;
    if ( !v28 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v27);
    }
    DXGMONITOR::_AddReference(v21, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v21);
    return 0LL;
  }
}
