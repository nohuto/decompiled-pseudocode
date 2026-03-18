/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800ACDE4
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800131F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014758 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA-AW.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18008ADE0 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AA678 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x1800AA7C4 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800ACCB4 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800ACFAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AD174 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AD1D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E59A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E5A78 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800E5D50 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180155E84 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18015A3F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18017BFB8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18021567C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
