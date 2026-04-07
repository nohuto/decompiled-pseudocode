/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x18003581C
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180022D28 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180034094 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800341A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA-AW4w.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800356EC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041C80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180043750 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D13C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D260 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D380 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D4A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D5C4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D6E8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA-.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004F7E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@w.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800778A8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int (__fastcall *a2)(signed __int32 *, void *),
        void *a3)
{
  signed __int32 v6; // ebp
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = *(_DWORD *)a1;
    v8 = *(_DWORD *)a1;
    v6 = v8;
    if ( !a2(&v8, a3) )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)a1, v8, v6) )
      return 1LL;
  }
  return 0LL;
}
