/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01ED0A0
 * Callers:
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D4BBC (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01730CC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        unsigned int a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, _QWORD, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax
  __int64 v11; // rax

  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( (*((_DWORD *)this + 77) & 0x40000) != 0 )
  {
    v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 229);
    if ( v9 )
      return v9(*((_QWORD *)this + 218), a2, a3);
  }
  v11 = WdLogNewEntry5_WdError(v7, v6, v8);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = -1073741822LL;
  WdLogEvent5_WdError(v11);
  return 3221225474LL;
}
