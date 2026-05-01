/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@wil@@SA_NXZ @ 0x18008D310
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801190B0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x1802817B0 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18008CE48 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_254.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D028 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_RestartManager_25418657@@@.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_RestartManager_25418657>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_RestartManager_25418657>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_RestartManager_25418657>::ReportUsageToService(v2, v3, v4);
  return v1;
}
