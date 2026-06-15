/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180048588
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800465F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtte.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800481A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180048C64 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005B6A0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaki.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005B7D8 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800625B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18013E614 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18004828C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800BF8D8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  RTL_SRWLOCK *v6; // rsi
  signed __int64 v7; // rax
  unsigned __int64 v8; // rcx
  RTL_SRWLOCK *v9; // rcx
  unsigned __int64 v10; // rdx
  void (*v11)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      v6 = a1 + 1;
      AcquireSRWLockExclusive(a1 + 1);
      v13 = a2;
      v7 = (char *)a1[11].Ptr - (char *)a1[10].Ptr;
      v8 = (char *)a1[12].Ptr - (char *)a1[10].Ptr;
      Source = a3;
      if ( v7 + 16 < v8 )
        goto LABEL_4;
      v10 = 16LL;
      if ( 2 * v8 > 0x10 )
        v10 = 2 * v8;
      if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&a1[10], v10) )
      {
LABEL_4:
        memcpy_s(
          a1[11].Ptr,
          ((char *)a1[12].Ptr - (char *)a1[11].Ptr) & -(__int64)(a1[11].Ptr < a1[12].Ptr),
          &Source,
          0x10uLL);
        a1[11].Ptr = (char *)a1[11].Ptr + 16;
      }
      v9 = a1 + 4;
      if ( !a1[4].Ptr )
      {
        v9->Ptr = 0LL;
        v11 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v11 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), RTL_SRWLOCK *))v11)(
            v9,
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
