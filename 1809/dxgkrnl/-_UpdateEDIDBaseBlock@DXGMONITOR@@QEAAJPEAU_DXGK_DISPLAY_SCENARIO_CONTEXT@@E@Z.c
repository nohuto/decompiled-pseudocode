/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E0D0 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C00B5EF8 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133B9C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021B9F0 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C0296C2C (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C029A940 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C029C388 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C029C950 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C029D420 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C029D59C (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C029E15C (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rsi
  char v5; // r12
  DXGMONITOR *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r15
  EDIDCACHE *v13; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v15; // rax
  bool v16; // bp
  char v17; // bp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  DXGMONITOR *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rax
  bool v39; // cf
  bool v40; // zf
  struct _FAST_MUTEX *v41; // rcx
  __int64 v42; // rax
  bool v44; // [rsp+70h] [rbp+8h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v45; // [rsp+80h] [rbp+18h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 17);
  v5 = a3;
  v7 = this;
  LODWORD(v8) = 0;
  if ( v4 && *((_DWORD *)this + 32) )
  {
    v9 = *v4;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v9 + 8), (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)&v45);
    if ( *((_DWORD *)v7 + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v7 + 12)) )
      LOBYTE(v8) = 1;
    v10 = *((_DWORD *)v7 + 11);
    v11 = *(_QWORD *)(*((_QWORD *)v7 + 4) + 8LL);
    v12 = *(struct DXGADAPTER **)(v11 + 16);
    v13 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 98);
    if ( v13 )
      EDIDCACHE::AddEdid(v13, v12, v10, v8, (unsigned __int8 *)(v9 + 24), v45);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v9 + 24));
    v8 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v15 + 24) = v9 + 24;
      *(_QWORD *)(v15 + 32) = v8;
      WdLogEvent5_WdWarning(v15);
      MonitorLogBadEDID(v9 + 24, v8);
      LODWORD(v8) = 0;
      v9 = 0LL;
LABEL_10:
      v16 = v9 != *((_QWORD *)v7 + 18);
      goto LABEL_11;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_10;
  this = (DXGMONITOR *)*((_QWORD *)v7 + 18);
  if ( !this )
    goto LABEL_10;
  a3 = *(_QWORD *)(v9 + 16);
  v16 = 0;
  if ( a3 != *((_QWORD *)this + 2)
    || a3
    && (v27 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v9, a3 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v9 + 16) + 31LL),
        v27 != this) )
  {
    v16 = 1;
  }
LABEL_11:
  v17 = v5 | v16;
  if ( v17 )
  {
    v18 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = v7;
    WdLogEvent5_WdDmmEvent(v18);
    v21 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v7, v19, v20);
    v8 = v21;
    if ( v21 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v26 + 24) = v8;
      WdLogEvent5_WdError(v26);
      return (unsigned int)v8;
    }
    if ( v9 )
    {
      *((_QWORD *)v7 + 18) = v9;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v7, v22, v24, v25) < 0 )
        *((_QWORD *)v7 + 18) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v7) < 0 )
      {
        v30 = DXGMONITOR::_ParseEDIDForHDRParams(v7, v28, v29);
        v32 = v30;
        if ( v30 < 0 )
        {
          v33 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v33 + 24) = v32;
          WdLogEvent5_WdError(v33);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v7);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v7, 0);
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v34) + 20265) && !*((_DWORD *)v7 + 147) )
      {
        LOBYTE(v45) = 1;
        v44 = 0;
        IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                        v7,
                                        (enum _DXGK_DISPLAY_USAGE *)&v45,
                                        &v44);
        v37 = IntendedUsageFromDescriptor;
        if ( IntendedUsageFromDescriptor >= 0 )
        {
          v39 = (_BYTE)v45 == D3DKMDT_MCO_MONITORDESCRIPTOR;
          v40 = (_BYTE)v45 == D3DKMDT_MCO_MONITORDESCRIPTOR_REGISTRYOVERRIDE;
          *((_BYTE *)v7 + 592) = v44;
          *((_DWORD *)v7 + 147) = v39 || v40;
        }
        else
        {
          v38 = WdLogNewEntry5_WdError(v36);
          *(_QWORD *)(v38 + 24) = v37;
          WdLogEvent5_WdError(v38);
        }
      }
      LODWORD(v8) = 0;
    }
    else
    {
      *((_QWORD *)v7 + 18) = 0LL;
    }
    if ( (*((_DWORD *)v7 + 10) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v7);
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(v7);
  }
  if ( (!*((_DWORD *)v7 + 64) && !*((_DWORD *)v7 + 52) || v17)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(v7) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v7);
  }
  if ( !*((_DWORD *)v7 + 64) && !*((_DWORD *)v7 + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v7, (__int64)a2, a3, a4);
  if ( v17 )
  {
    v41 = (struct _FAST_MUTEX *)*((_QWORD *)v7 + 4);
    if ( !v41 )
    {
      v42 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v42);
      v41 = (struct _FAST_MUTEX *)*((_QWORD *)v7 + 4);
    }
    MONITOR_MGR::_IssueMonitorEvent(v41, *((_DWORD *)v7 + 11), 3, 0LL, *((_DWORD *)v7 + 108), (__int64)a2);
  }
  return (unsigned int)v8;
}
