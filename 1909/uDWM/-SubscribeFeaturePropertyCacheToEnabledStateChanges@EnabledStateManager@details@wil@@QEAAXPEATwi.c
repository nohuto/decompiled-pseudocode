/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003428C
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180033BE4 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033CF0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800416D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CA-A.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800431A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004CFEC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CA-AW4wil_de.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D110 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D230 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CA-AW4w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D474 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D598 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CA-.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800343BC (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180077578 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  void (*v8)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      v6 = a1 + 1;
      AcquireSRWLockExclusive(a1 + 1);
      v9 = a3;
      v10 = a2;
      wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&a1[10], &v9, 0x10uLL);
      v7 = a1 + 4;
      if ( !a1[4].Ptr )
      {
        v7->Ptr = 0LL;
        v8 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v8 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), RTL_SRWLOCK *))v8)(
            v7,
            lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
            a1);
        }
      }
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
    }
    else
    {
      wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    }
  }
}
