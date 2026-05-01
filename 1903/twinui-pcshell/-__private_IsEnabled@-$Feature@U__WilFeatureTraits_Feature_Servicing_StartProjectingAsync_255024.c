/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415@@@wil@@SA_NXZ @ 0x18009B430
 * Callers:
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18000CC10 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009AF7C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsy.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009B274 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_StartProjectingAsync_25502415>::ReportUsageToService(v2, v3, v4);
  return v1;
}
