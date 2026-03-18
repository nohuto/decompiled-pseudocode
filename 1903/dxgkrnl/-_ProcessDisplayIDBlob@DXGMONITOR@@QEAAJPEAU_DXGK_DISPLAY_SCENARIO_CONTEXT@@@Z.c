/*
 * XREFs of ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C00573D4 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014AE94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C016C6E4 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C016FEA4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C016FF0C (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0170458 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C01707E0 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0171FC0 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C0172608 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02CAB40 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02CF09C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02CFA9C (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02CFD94 (-_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessDisplayIDBlob(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // rax
  int PhysicalSize; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  EDIDCACHE *v36; // rcx
  __int64 v37; // rdx
  struct _FAST_MUTEX *v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v41; // [rsp+60h] [rbp+30h] BYREF
  bool v42; // [rsp+68h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 184) )
  {
    v5 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v5 + 24) = *((_QWORD *)this + 20);
    *(_QWORD *)(v5 + 32) = -1071247357LL;
LABEL_18:
    WdLogEvent5_WdError(v5);
    goto LABEL_19;
  }
  v6 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v6 + 24) = this;
  WdLogEvent5_WdDmmEvent(v6);
  v9 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v7, v8);
  v13 = v9;
  if ( v9 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  v16 = DXGMONITOR::_ParseDisplayIDForMonitorModes(this, v10);
  v20 = v16;
  if ( v16 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
  }
  DXGMONITOR::_RetrieveHDRParamDriverOverrides(this);
  DXGMONITOR::_ParseDisplayIDForHDRParams(this);
  DXGMONITOR::_UpdateHDRParamsIfRequired(this);
  DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 0, 0, v22);
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v24, v23) + 303936) && !*((_DWORD *)this + 148) )
  {
    LOBYTE(v41) = 1;
    v42 = 0;
    LOBYTE(v40) = 1;
    IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                    this,
                                    (enum _DXGK_DISPLAY_USAGE *)&v41,
                                    &v42,
                                    (bool *)&v40);
    v29 = IntendedUsageFromDescriptor;
    if ( IntendedUsageFromDescriptor >= 0 )
    {
      *((_DWORD *)this + 148) = DXGMONITOR::GetUsageClass(v41, v40);
      *((_BYTE *)this + 596) = v42;
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v27, v26, v28);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdError(v30);
    }
  }
  if ( *((_DWORD *)this + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12)) )
  {
    PhysicalSize = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)this + 168), &v41, (unsigned int *)&v40);
    v35 = PhysicalSize;
    if ( PhysicalSize >= 0 )
    {
      v36 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v33, v32) + 95);
      if ( v36 )
        EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v36, v41, v40, 1);
      goto LABEL_19;
    }
    v5 = WdLogNewEntry5_WdError(v33, v32, v34);
    *(_QWORD *)(v5 + 24) = v35;
    goto LABEL_18;
  }
LABEL_19:
  if ( (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(this) < 0 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this, v37);
  if ( !*((_DWORD *)this + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(this, v37);
  v38 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  if ( !v38 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL, v37);
    WdLogEvent5_WdAssertion(v39);
    v38 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  }
  MONITOR_MGR::_IssueMonitorEvent(v38, *((unsigned int *)this + 11), 3, 0LL, *((_DWORD *)this + 108), (__int64)a2);
  return 0LL;
}
