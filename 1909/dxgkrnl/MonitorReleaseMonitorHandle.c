/*
 * XREFs of MonitorReleaseMonitorHandle @ 0x1C00ED228
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005373C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ECB40 (DxgkGetMonitorInternalInfo.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01297D0 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C012ED68 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C014CA40 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C015F0E0 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0180660 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0182E30 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkIsMonitorConnected @ 0x1C02034F0 (DxgkIsMonitorConnected.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0270860 (DxgkHandleForceProjectionMonitor.c)
 *     ?ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02B99F0 (-ReleaseMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMD.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02CCCD0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02CCF20 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02CDA80 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorReleaseMonitorHandle(DXGADAPTER *this, __int64 a2, void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( this && a2 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v10 = *((_QWORD *)this + 319);
    if ( !v10 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v12);
      v10 = *((_QWORD *)this + 319);
    }
    if ( *(_QWORD *)(v10 + 96) )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 400), a3, 0x20u);
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
  }
  return 3221225485LL;
}
