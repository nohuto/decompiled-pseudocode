/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01BDAB4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C5A48 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        unsigned int a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD, _QWORD, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax
  __int64 v9; // rax

  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( (*((_DWORD *)this + 77) & 0x40000) != 0 )
  {
    v7 = (__int64 (__fastcall *)(_QWORD, _QWORD, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 227);
    if ( v7 )
      return v7(*((_QWORD *)this + 216), a2, a3);
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = -1073741822LL;
  WdLogEvent5_WdError(v9);
  return 3221225474LL;
}
