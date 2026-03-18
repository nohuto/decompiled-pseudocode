/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C016F5F0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DxgkStatusChangeNotify @ 0x1C00CBEA0 (DxgkStatusChangeNotify.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015A8E0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C016F8D0 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016F9D8 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C016FDB4 (DxgkIncreaseMonitorUniqueness.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C017205C (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C0172608 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0173D68 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0173FC0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0174660 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0174C70 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0174E68 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01765D8 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3784 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02CAB40 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02CB0F4 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02CB5A0 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02CB750 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB818 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02CE134 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int MonitorDescriptorsFromRegistry; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rcx
  unsigned __int16 v10; // ax
  PVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int UsageOverridesFromPnpRegistry; // eax
  unsigned int UsageClass; // edi
  DXGMONITOR *v24; // rcx
  __int64 v25; // rdx
  const GUID *v26; // r8
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  bool v35; // zf
  int v36; // [rsp+20h] [rbp-30h]
  unsigned int v37; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v38[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+90h] [rbp+40h] BYREF
  char v40; // [rsp+98h] [rbp+48h] BYREF
  bool v41; // [rsp+A8h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this);
    if ( MonitorDescriptorsFromRegistry >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
  {
    operator delete[](v9);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v10 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v10;
  v11 = operator new[](v10, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v11;
  if ( !v11 )
  {
    v31 = WdLogNewEntry5_WdError(v13, v12, v14);
    WdLogEvent5_WdError(v31);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3);
  v16 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v16 + 16) + 308LL) & 0x40000) == 0 )
  {
    v17 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v39);
    v16 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = v17;
    if ( (int)(v17 + 0x80000000) < 0 || v17 == -1073741772 )
    {
      if ( (v15 = v39, v18 = (_DWORD *)((char *)this + 584), v17 == -1073741772) && *v18 || v17 >= 0 && *v18 != v39 )
      {
        *v18 = v39;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v15);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((unsigned int *)this + 11),
          9,
          (unsigned int)*v18,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v16, v15) + 303936) )
    goto LABEL_51;
  if ( *((_DWORD *)this + 148) )
  {
LABEL_27:
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
      8395569LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E248,
      1,
      v36);
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      if ( (unsigned int)DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(v24) == -1073741772
        && (*((_DWORD *)this + 10) & 2) != 0 )
      {
        LOBYTE(v39) = 0;
        if ( (int)DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(this, (bool *)&v39) >= 0
          && (*((_DWORD *)this + 10) & 0x800) == 0
          && (_BYTE)v39 )
        {
          DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, v39);
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(ADAPTER_DISPLAY **)(*((_QWORD *)this + 4) + 8LL), 0LL, a3);
        }
      }
    }
    if ( (int)DxgkIncreaseMonitorUniqueness() >= 0 )
    {
      v38[0] = 12LL;
      v38[1] = 0LL;
      DxgkStatusChangeNotify((int *)v38, v25, v26);
    }
    return 0LL;
  }
  v37 = 0;
  v40 = 1;
  v41 = 0;
  LOBYTE(v39) = 1;
  if ( DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v40, &v41, (bool *)&v39) >= 0 )
  {
    LOBYTE(v20) = v39;
    LOBYTE(v21) = v40;
    UsageClass = DXGMONITOR::GetUsageClass(v21, v20);
    if ( UsageClass != *((_DWORD *)this + 148) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32, v19);
      WdLogEvent5_WdAssertion(v33);
    }
  }
  else
  {
    UsageOverridesFromPnpRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                      this,
                                      (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v37);
    UsageClass = v37;
    MonitorDescriptorsFromRegistry = UsageOverridesFromPnpRegistry;
  }
  if ( MonitorDescriptorsFromRegistry < 0 || UsageClass == *((_DWORD *)this + 148) )
    goto LABEL_51;
  *((_BYTE *)this + 596) = v41;
  *((_DWORD *)this + 148) = UsageClass;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore(this, UsageClass);
  v34 = *((_DWORD *)this + 148);
  v35 = v34 == 0;
  if ( v34 )
  {
    DXGMONITOR::_DestroyTtmDevice(this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v35 = *((_DWORD *)this + 148) == 0;
  }
  result = DXGMONITOR::_UpdateLinkInfo(this, !v35);
  if ( (int)result < 0 )
  {
LABEL_51:
    if ( !*((_DWORD *)this + 148) )
      DXGMONITOR::_CreateTtmDevice(this, v19);
    goto LABEL_27;
  }
  return result;
}
