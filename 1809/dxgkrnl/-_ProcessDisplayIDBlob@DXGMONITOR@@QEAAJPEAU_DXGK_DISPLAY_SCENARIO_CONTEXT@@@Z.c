/*
 * XREFs of ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0050A84 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133B9C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C015569C (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C029A940 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029BC90 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C029BF60 (-_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C029D420 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C029D59C (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessDisplayIDBlob(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  bool v29; // cf
  bool v30; // zf
  int PhysicalSize; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  EDIDCACHE *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct _FAST_MUTEX *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // [rsp+40h] [rbp+8h] BYREF
  int v41; // [rsp+50h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 184) )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 20);
    *(_QWORD *)(v6 + 32) = -1071247357LL;
LABEL_18:
    WdLogEvent5_WdError(v6);
    goto LABEL_19;
  }
  v7 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdDmmEvent(v7);
  v10 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v8, v9);
  v15 = v10;
  if ( v10 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  v18 = DXGMONITOR::_ParseDisplayIDForMonitorModes(this, v11, v13, v14);
  v22 = v18;
  if ( v18 < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v22;
    WdLogEvent5_WdWarning(v23);
  }
  DXGMONITOR::_RetrieveHDRParamDriverOverrides(this);
  DXGMONITOR::_ParseDisplayIDForHDRParams(this);
  DXGMONITOR::_UpdateHDRParamsIfRequired(this);
  DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 0, 0);
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v24) + 20265) && !*((_DWORD *)this + 147) )
  {
    LOBYTE(v40) = 1;
    LOBYTE(v41) = 0;
    IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                    this,
                                    (enum _DXGK_DISPLAY_USAGE *)&v40,
                                    (bool *)&v41);
    v27 = IntendedUsageFromDescriptor;
    if ( IntendedUsageFromDescriptor >= 0 )
    {
      v29 = (_BYTE)v40 == 2;
      v30 = (_BYTE)v40 == 3;
      *((_BYTE *)this + 592) = v41;
      *((_DWORD *)this + 147) = v29 || v30;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v28 + 24) = v27;
      WdLogEvent5_WdError(v28);
    }
  }
  if ( *((_DWORD *)this + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12)) )
  {
    PhysicalSize = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)this + 168), (unsigned int *)&v41, &v40);
    v33 = PhysicalSize;
    if ( PhysicalSize >= 0 )
    {
      v34 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v32) + 98);
      if ( v34 )
        EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v34, v41, v40, 1);
      goto LABEL_19;
    }
    v6 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v6 + 24) = v33;
    goto LABEL_18;
  }
LABEL_19:
  if ( (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(this) < 0 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this);
  if ( !*((_DWORD *)this + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(this, v35, v36, v37);
  v38 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  if ( !v38 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v39);
    v38 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  }
  MONITOR_MGR::_IssueMonitorEvent(v38, *((_DWORD *)this + 11), 3, 0LL, *((_DWORD *)this + 108), (__int64)a2);
  return 0LL;
}
