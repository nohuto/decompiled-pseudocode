/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180010DDC
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180014B78 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180033BE4 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033CF0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA-AW4w.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18003523C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800416D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800431A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004CFEC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D110 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D230 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D474 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D598 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA-.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180077578 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        __int64 (__fastcall *a2)(signed __int32 *, void *),
        void *a3)
{
  signed __int32 v6; // ebp
  __int64 result; // rax
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = *(_DWORD *)a1;
    v8 = *(_DWORD *)a1;
    v6 = v8;
    result = a2(&v8, a3);
    if ( !(_DWORD)result )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)a1, v8, v6) )
      return 1LL;
  }
  return result;
}
