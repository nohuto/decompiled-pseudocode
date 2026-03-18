/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C028EF00 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C00B74EC (DxgkIncreaseMonitorUniqueness.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0133CBC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C48B4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0294F5C (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02950A4 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C029560C (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0295918 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0295D7C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296054 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296410 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0296620 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02967C0 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0296880 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029921C (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0299B04 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C029A430 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  int MonitorDescriptorsFromRegistry; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  unsigned __int16 v13; // ax
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  int ScaleFactorFromInf; // eax
  int v20; // edx
  int *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rax
  int UsageOverridesFromPnpRegistry; // eax
  int v29; // eax
  bool v30; // zf
  DXGMONITOR *v31; // rcx
  __int64 v32; // rdx
  const GUID *v33; // r8
  int v34; // [rsp+20h] [rbp-20h]
  _QWORD v35[2]; // [rsp+30h] [rbp-10h] BYREF
  int v36; // [rsp+80h] [rbp+40h] BYREF
  bool v37; // [rsp+88h] [rbp+48h] BYREF
  int v38; // [rsp+98h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this);
    if ( MonitorDescriptorsFromRegistry >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  v12 = (void *)*((_QWORD *)this + 14);
  if ( v12 )
  {
    operator delete[](v12);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v13 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v13;
  v14 = operator new(v13, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v14;
  if ( !v14 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    WdLogEvent5_WdError(v16);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3);
  v18 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 16) + 308LL) & 0x40000) == 0 )
  {
    ScaleFactorFromInf = DXGMONITOR::_ReadScaleFactorFromInf(this, (unsigned int *)&v36);
    v18 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = ScaleFactorFromInf;
    if ( (int)(ScaleFactorFromInf + 0x80000000) < 0 || ScaleFactorFromInf == -1073741772 )
    {
      if ( (v20 = v36, v21 = (int *)((char *)this + 584), ScaleFactorFromInf == -1073741772) && *v21
        || ScaleFactorFromInf >= 0 && *v21 != v36 )
      {
        *v21 = v36;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v20);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((_DWORD *)this + 11),
          9,
          (unsigned int)*v21,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v18) + 20265) )
    goto LABEL_48;
  if ( *((_DWORD *)this + 147) )
  {
LABEL_36:
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
      8395569LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
      1,
      v34);
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      if ( (unsigned int)DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(v31) == -1073741772
        && (*((_DWORD *)this + 10) & 2) != 0 )
      {
        LOBYTE(v36) = 0;
        if ( (int)DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(this, (bool *)&v36) >= 0
          && (*((_DWORD *)this + 10) & 0x800) == 0
          && (_BYTE)v36 )
        {
          DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, v36);
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(*((_QWORD *)this + 4) + 8LL), 0LL, a3);
        }
      }
    }
    if ( (int)DxgkIncreaseMonitorUniqueness((__int64)v31) >= 0 )
    {
      v35[0] = 12LL;
      v35[1] = 0LL;
      DxgkStatusChangeNotify((int *)v35, v32, v33);
    }
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((_DWORD *)this + 11),
      11,
      1LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    return 0LL;
  }
  v38 = 0;
  LOBYTE(v36) = 1;
  v37 = 0;
  if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v36, &v37) < 0 )
  {
    UsageOverridesFromPnpRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                      this,
                                      (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v38);
    v26 = v38;
    MonitorDescriptorsFromRegistry = UsageOverridesFromPnpRegistry;
  }
  else
  {
    v26 = (unsigned __int8)(v36 - 2) <= 1u;
    if ( v26 != *((_DWORD *)this + 147) )
    {
      LOBYTE(v25) = v36 - 2;
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
  }
  if ( MonitorDescriptorsFromRegistry < 0 || v26 == *((_DWORD *)this + 147) )
    goto LABEL_48;
  *((_BYTE *)this + 592) = v37;
  *((_DWORD *)this + 147) = v26;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore(this, v26);
  v29 = *((_DWORD *)this + 147);
  v30 = v29 == 0;
  if ( v29 )
  {
    DXGMONITOR::_DestroyTtmDevice((void **)this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((_DWORD *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v30 = *((_DWORD *)this + 147) == 0;
  }
  result = DXGMONITOR::_UpdateLinkInfo(this, !v30);
  if ( (int)result < 0 )
  {
LABEL_48:
    if ( !*((_DWORD *)this + 147) )
      DXGMONITOR::_CreateTtmDevice(this, v22, v23, v24);
    goto LABEL_36;
  }
  return result;
}
