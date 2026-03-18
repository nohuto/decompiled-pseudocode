/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00DCE30 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C0001C40 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(struct HDXGMONITOR__ *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v6; // rcx
  DXGMONITOR *v7; // rdi
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rax
  int DriverVersion; // eax
  __int64 v14; // rcx
  __int16 v15; // r10
  int v16; // r9d
  int v17; // r11d
  unsigned int v18; // ecx
  int v19; // r11d
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-28h]
  DXGMONITOR *v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  v23 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v23);
  if ( (int)result >= 0 )
  {
    v7 = v23;
    if ( !v23 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
      v11 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v11);
    }
    KeEnterCriticalRegion();
    v8 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    if ( (*((_DWORD *)v7 + 10) & 0x400) == 0 )
      goto LABEL_6;
    v22 = *(_QWORD *)((char *)v7 + 468);
    DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(a1);
    if ( !DisplayCoreFromMonitor )
    {
      v2 = -1073741275;
LABEL_6:
      ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
      KeLeaveCriticalRegion();
      return v2;
    }
    DriverVersion = DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)DisplayCoreFromMonitor + 2));
    v15 = WORD2(v22);
    v16 = 4;
    if ( DriverVersion < 2500 )
    {
      if ( (v22 & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v7) )
        v8 = 0;
      v21 = (v8 | *a2 & 0xFFFFFFFE) ^ (HIBYTE(v15) ^ (unsigned __int8)(v8 | *a2)) & 2;
      *a2 = v21;
    }
    else
    {
      v17 = *(_DWORD *)(v14 + 2408);
      if ( (v17 & 0xC) == 0 || (v22 & 0x400000000LL) == 0 || !DXGMONITOR::EdidSupportsHDR(v7) )
        v8 = 0;
      v18 = v8 | *a2 & 0xFFFFFFFE;
      *a2 = v18;
      v19 = v16 & v17;
      if ( !v19 || (v20 = 2, (v15 & 0x200) == 0) )
        v20 = 0;
      v21 = v20 | v18 & 0xFFFFFFFD;
      *a2 = v21;
      if ( !v19 )
      {
LABEL_27:
        v16 = 0;
LABEL_28:
        *a2 = v16 | v21 & 0xFFFFFFFB;
        goto LABEL_6;
      }
    }
    if ( (v15 & 0x400) != 0 && *((_BYTE *)v7 + 698) )
      goto LABEL_28;
    goto LABEL_27;
  }
  return result;
}
