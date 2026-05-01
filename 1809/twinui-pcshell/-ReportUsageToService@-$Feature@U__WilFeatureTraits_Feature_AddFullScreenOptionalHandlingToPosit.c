/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180065268
 * Callers:
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800651B0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180144FE0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180145270 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180145430 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlin.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetFeaturePropertyCache'::`2'::data,
           10094528LL,
           &v5,
           1LL,
           3);
}
