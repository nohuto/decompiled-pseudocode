/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C00C3AE8
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C00B7DA0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00BA988 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00C61B0 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkIsMonitorConnected @ 0x1C01D50C0 (DxgkIsMonitorConnected.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0239510 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0292520 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02931D0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C0293420 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0004C74 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00C3C04 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(DXGADAPTER *this, __int64 a2, __int64 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  unsigned __int8 v7; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  MONITOR_MGR *v13; // rdi
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  DXGMONITOR *v20; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DXGMONITOR *v27; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v12 = *((_QWORD *)this + 315);
  if ( !v12 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v23);
    v12 = *((_QWORD *)this + 315);
  }
  v13 = *(MONITOR_MGR **)(v12 + 96);
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v27 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v13, v6, v7, &v27);
  v19 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
    *(_QWORD *)(v22 + 24) = (unsigned int)v6;
    *(_QWORD *)(v22 + 32) = v13;
    WdLogEvent5_WdDmmEvent(v22);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v25 + 24) = (unsigned int)v6;
    *(_QWORD *)(v25 + 32) = v13;
    WdLogEvent5_WdError(v25);
    return v19;
  }
  else
  {
    v20 = v27;
    if ( !v27 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v26);
    }
    DXGMONITOR::_AddReference(v20, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v20);
    return 0LL;
  }
}
