/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800559F0
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800103C8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055870 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086234 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180086384 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088014 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088374 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088424 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800884F4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSa.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800885A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CA-AW4wil.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088654 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180088724 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800887D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800888A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA-AW4w.c)
 *     ?wil_details_RecordCachedUsage@@YAXIPEATwil_details_FeaturePropertyCache@@P6AXIIIPEBD@Z@Z @ 0x1800EDDF4 (-wil_details_RecordCachedUsage@@YAXIPEATwil_details_FeaturePropertyCache@@P6AXIIIPEBD@Z@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180144260 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180156C54 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
