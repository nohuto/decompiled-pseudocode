/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178698
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179630 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7908 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F480 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0173E0C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0174248 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C017467C (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01763F8 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0176EBC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitMipiDsi2Caps@DXGMONITOR@@AEAAJXZ @ 0x1C0178890 (-_InitMipiDsi2Caps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01788FC (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C0178A60 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178B38 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0178B90 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0178BF4 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178C58 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178CC4 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0178D34 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C017928C (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0179328 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01ED6D0 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02CAC00 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB0EC (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB5FC (-_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CEE58 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02CF15C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D027C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02D0680 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r14d
  struct DXGMONITOR *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  int VideoOutputTechnology; // esi
  __int64 v22; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v23; // ebx
  int updated; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  _QWORD v39[4]; // [rsp+30h] [rbp-20h] BYREF
  int UsageClass; // [rsp+90h] [rbp+40h] BYREF
  bool v41; // [rsp+98h] [rbp+48h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v42; // [rsp+A8h] [rbp+58h] BYREF

  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2);
  v15 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v15 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v28);
  }
  v16 = a7;
  if ( v15 != 1 )
  {
    if ( !a3 )
      goto LABEL_6;
    goto LABEL_30;
  }
  if ( !a3 || a7 )
  {
LABEL_30:
    v29 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v29);
  }
LABEL_6:
  *(_DWORD *)(a1 + 44) = v10;
  *(_QWORD *)(a1 + 56) = a3;
  *(_DWORD *)(a1 + 432) = v15;
  *(_DWORD *)(a1 + 436) = v15;
  if ( a4 )
  {
    v30 = a5 != 0;
    a5 = -a5;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFFFFFFFB | (v30 ? 0 : 4) | 2;
  }
  v17 = *(_QWORD *)(a1 + 32);
  v42 = D3DKMDT_VOT_UNINITIALIZED;
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
  VideoOutputTechnology = DmmGetVideoOutputTechnology((DXGADAPTER *)v18, v10, &v42, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v31);
  }
  v23 = v42;
  if ( v42 == D3DKMDT_VOT_UNINITIALIZED )
  {
    v32 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v32);
  }
  *(_DWORD *)(a1 + 48) = v23;
  if ( v15 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology >= 0 )
    {
      if ( *(_DWORD *)(a1 + 128) || !*(_QWORD *)(a1 + 160) )
        updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
      else
        updated = DXGMONITOR::_ProcessDisplayIDBlob((DXGMONITOR *)a1, a8);
      VideoOutputTechnology = updated;
    }
    if ( (*(_DWORD *)(v18 + 308) & 0x100) != 0
      && (*(int (__fastcall **)(_QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, int *))(*(_QWORD *)(*(_QWORD *)(v18 + 2552) + 16LL)
                                                                                               + 1840LL))(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 2552) + 16LL) + 1744LL),
           v10,
           &v42,
           &a6) >= 0 )
    {
      *(_DWORD *)(a1 + 756) = v42;
      *(_DWORD *)(a1 + 760) = a6;
    }
  }
  else if ( v16 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
    VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v16);
    ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v15 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitorFromEDID((DXGMONITOR *)a1);
    }
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL) + 2452LL) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v19);
    if ( !*(_DWORD *)(a1 + 208) )
      VideoOutputTechnology = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1, v19, v22);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v15 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        if ( (*(_DWORD *)(v18 + 308) & 0x40000) != 0 )
        {
          memset(v39, 0, 24);
          DXGADAPTER::GetVirtualMonitorInfo((DXGADAPTER *)v18, v10, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v39);
          *(_DWORD *)(a1 + 584) = v39[0];
        }
        else
        {
          DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 584));
        }
        if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v26, v25) + 303936) )
        {
          LOBYTE(a6) = 1;
          UsageClass = 0;
          v41 = 0;
          LOBYTE(v42) = 1;
          if ( *(_DWORD *)(a1 + 592) )
          {
            if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(
                        (DXGMONITOR *)a1,
                        (enum _DXGK_DISPLAY_USAGE *)&a6,
                        &v41,
                        (bool *)&v42) >= 0 )
            {
              LOBYTE(v33) = v42;
              LOBYTE(v34) = a6;
              UsageClass = DXGMONITOR::GetUsageClass(v34, v33);
            }
            else
            {
              DXGMONITOR::_ReadUsageOverridesFromMonitorStore(
                (DXGMONITOR *)a1,
                (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
            }
            if ( (int)DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(
                        (DXGMONITOR *)a1,
                        (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass) < 0 )
            {
              v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
              WdLogEvent5_WdWarning(v38);
            }
            *(_DWORD *)(a1 + 592) = UsageClass;
            *(_BYTE *)(a1 + 596) = v41;
          }
        }
        DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadWCGEnforcedFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore((DXGMONITOR *)a1);
        VideoOutputTechnology = DXGMONITOR::_UpdateLinkInfo((DXGMONITOR *)a1, *(_DWORD *)(a1 + 592) != 0);
        DXGMONITOR::_InitColorSpaceTransformCaps((DXGMONITOR *)a1);
        DXGMONITOR::_InitMipiDsi2Caps((DXGMONITOR *)a1);
      }
      if ( VideoOutputTechnology >= 0 )
        *(_DWORD *)(a1 + 40) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}
