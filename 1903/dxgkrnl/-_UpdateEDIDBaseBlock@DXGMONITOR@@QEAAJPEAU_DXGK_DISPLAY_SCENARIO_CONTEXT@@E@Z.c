/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7608 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0021BA0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014AE94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C016FEA4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C016FF0C (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01702A4 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0170458 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C01707E0 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C017088C (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0171D68 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0171FC0 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0172080 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0172464 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C0172608 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C01738DC (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorLogBadEDID @ 0x1C02C9890 (MonitorLogBadEDID.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02CAB40 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02CF09C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 *v3; // rsi
  DXGMONITOR *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // r15
  EDIDCACHE *v13; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v15; // r8
  bool v16; // bp
  char v17; // bp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rax
  struct _FAST_MUTEX *v39; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  DXGMONITOR *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // [rsp+70h] [rbp+8h] BYREF
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v48; // [rsp+80h] [rbp+18h] BYREF
  bool v49; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 17);
  v6 = this;
  LODWORD(v7) = 0;
  if ( v3 && *((_DWORD *)this + 32) )
  {
    v8 = *v3;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), &v48);
    if ( *((_DWORD *)v6 + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v6 + 12)) )
      LOBYTE(v7) = 1;
    v10 = *((_DWORD *)v6 + 11);
    v11 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL);
    v12 = *(struct DXGADAPTER **)(v11 + 16);
    v13 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v11, v9) + 95);
    if ( v13 )
      EDIDCACHE::AddEdid(v13, v12, v10, v7, (const unsigned __int8 *)(v8 + 24), v48);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v8 + 24));
    v7 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(this, a2, v15);
      *(_QWORD *)(v41 + 24) = v8 + 24;
      *(_QWORD *)(v41 + 32) = v7;
      WdLogEvent5_WdWarning(v41);
      MonitorLogBadEDID(v8 + 24, (unsigned int)v7);
      LODWORD(v7) = 0;
      v8 = 0LL;
LABEL_11:
      v16 = v8 != *((_QWORD *)v6 + 18);
      goto LABEL_12;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_11;
  this = (DXGMONITOR *)*((_QWORD *)v6 + 18);
  if ( !this )
    goto LABEL_11;
  v42 = *(_QWORD *)(v8 + 16);
  v16 = 0;
  if ( v42 != *((_QWORD *)this + 2)
    || v42
    && (v43 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v8, v42 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v8 + 16) + 31LL),
        v43 != this) )
  {
    v16 = 1;
  }
LABEL_12:
  v17 = a3 | v16;
  if ( v17 )
  {
    v18 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v18 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v18);
    v21 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v6, v19, v20);
    v7 = v21;
    if ( v21 < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v44 + 24) = v7;
      WdLogEvent5_WdError(v44);
      return (unsigned int)v7;
    }
    if ( v8 )
    {
      *((_QWORD *)v6 + 18) = v8;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock(v6) < 0 )
        *((_QWORD *)v6 + 18) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v6) < 0 )
      {
        v25 = DXGMONITOR::_ParseEDIDForHDRParams(v6);
        v29 = v25;
        if ( v25 < 0 )
        {
          v45 = WdLogNewEntry5_WdError(v27, v26, v28);
          *(_QWORD *)(v45 + 24) = v29;
          WdLogEvent5_WdError(v45);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v6);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v6, 0, 0, v30);
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v32, v31) + 303936) && !*((_DWORD *)v6 + 148) )
      {
        v47 = 1;
        v49 = 0;
        LOBYTE(v48) = 1;
        IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                        v6,
                                        (enum _DXGK_DISPLAY_USAGE *)&v47,
                                        &v49,
                                        (bool *)&v48);
        v37 = IntendedUsageFromDescriptor;
        if ( IntendedUsageFromDescriptor >= 0 )
        {
          LOBYTE(v34) = v48;
          LOBYTE(v35) = v47;
          *((_DWORD *)v6 + 148) = DXGMONITOR::GetUsageClass(v35, v34);
          *((_BYTE *)v6 + 596) = v49;
        }
        else
        {
          v38 = WdLogNewEntry5_WdError(v35, v34, v36);
          *(_QWORD *)(v38 + 24) = v37;
          WdLogEvent5_WdError(v38);
        }
      }
      LODWORD(v7) = 0;
    }
    else
    {
      *((_QWORD *)v6 + 18) = 0LL;
    }
    if ( (*((_DWORD *)v6 + 10) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(v6);
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(v6);
  }
  if ( (!*((_DWORD *)v6 + 64) && !*((_DWORD *)v6 + 52) || v17)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(v6) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes(v6);
  }
  if ( !*((_DWORD *)v6 + 64) && !*((_DWORD *)v6 + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v6);
  if ( v17 )
  {
    v39 = (struct _FAST_MUTEX *)*((_QWORD *)v6 + 4);
    if ( !v39 )
    {
      v46 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v46);
      v39 = (struct _FAST_MUTEX *)*((_QWORD *)v6 + 4);
    }
    MONITOR_MGR::_IssueMonitorEvent(v39, *((unsigned int *)v6 + 11), 3, 0LL, *((_DWORD *)v6 + 108), (__int64)a2);
  }
  return (unsigned int)v7;
}
