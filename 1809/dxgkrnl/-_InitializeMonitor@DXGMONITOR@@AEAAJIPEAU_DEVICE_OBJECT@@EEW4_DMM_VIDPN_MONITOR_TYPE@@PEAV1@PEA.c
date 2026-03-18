/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B43B8 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E310 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00B4640 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00B48F4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C00B5EF8 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C00B5F38 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00C25BC (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01BDAB4 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0294F5C (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C02954D4 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C029577C (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02958C8 (-_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0295B10 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295C44 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0295E34 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z @ 0x1C0297448 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0299B04 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C029A940 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C029D710 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  char v8; // si
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  struct DXGMONITOR *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  int VideoOutputTechnology; // esi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  bool v23; // cf
  __int64 v24; // rax
  __int64 v25; // rax
  int updated; // eax
  DXGADAPTER *v27; // rcx
  __int64 v28; // rcx
  bool v29; // zf
  BOOL v30; // ecx
  _QWORD v31[4]; // [rsp+20h] [rbp-20h] BYREF
  BOOL v32; // [rsp+78h] [rbp+38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v33; // [rsp+88h] [rbp+48h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v14 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v21);
  }
  v15 = a7;
  if ( v14 != 1 )
  {
    if ( !a3 )
      goto LABEL_5;
    goto LABEL_26;
  }
  if ( !a3 || a7 )
  {
LABEL_26:
    v22 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v22);
  }
LABEL_5:
  *(_DWORD *)(a1 + 44) = v10;
  *(_QWORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 432) = v14;
  *(_DWORD *)(a1 + 436) = v14;
  if ( v8 )
  {
    v23 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFFB | (v23 ? 0 : 4) | 2;
  }
  v16 = *(_QWORD *)(a1 + 32);
  v33 = D3DKMDT_VOT_UNINITIALIZED;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(void *const *)(*(_QWORD *)(v16 + 8) + 16LL), v10, &v33, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v24);
  }
  v19 = v33;
  if ( v33 == D3DKMDT_VOT_UNINITIALIZED )
  {
    v25 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v25);
  }
  *(_DWORD *)(a1 + 48) = v19;
  if ( v14 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    if ( *(_DWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 160) )
      updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
    else
      updated = DXGMONITOR::_ProcessDisplayIDBlob((DXGMONITOR *)a1, a8);
  }
  else
  {
    if ( v15 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v15);
      ExReleaseResourceLite((PERESOURCE)((char *)v15 + 296));
      KeLeaveCriticalRegion();
      goto LABEL_18;
    }
    if ( v14 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitorFromEDID((DXGMONITOR *)a1);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((DXGMONITOR *)a1);
    if ( *(_DWORD *)(a1 + 208) )
      goto LABEL_18;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_18:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v14 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        v27 = *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL);
        if ( (*((_DWORD *)v27 + 77) & 0x40000) != 0 )
        {
          memset(v31, 0, 24);
          DXGADAPTER::GetVirtualMonitorInfo(v27, v10, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v31);
          *(_DWORD *)(a1 + 584) = v31[0];
        }
        else
        {
          DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 584));
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v28) + 20265) )
        {
          v32 = 0;
          v29 = *(_DWORD *)(a1 + 588) == 0;
          LOBYTE(v33) = 1;
          LOBYTE(a6) = 0;
          if ( !v29 )
          {
            if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(
                        (DXGMONITOR *)a1,
                        (enum _DXGK_DISPLAY_USAGE *)&v33,
                        (bool *)&a6) >= 0 )
            {
              v30 = (unsigned __int8)(v33 - 2) <= 1u;
            }
            else
            {
              DXGMONITOR::_ReadUsageOverridesFromMonitorStore(
                (DXGMONITOR *)a1,
                (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v32);
              v30 = v32;
            }
            *(_BYTE *)(a1 + 592) = a6;
            *(_DWORD *)(a1 + 588) = v30;
          }
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1);
        VideoOutputTechnology = DXGMONITOR::_UpdateLinkInfo((DXGMONITOR *)a1, *(_DWORD *)(a1 + 588) != 0);
      }
      if ( VideoOutputTechnology >= 0 )
        *(_DWORD *)(a1 + 40) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
