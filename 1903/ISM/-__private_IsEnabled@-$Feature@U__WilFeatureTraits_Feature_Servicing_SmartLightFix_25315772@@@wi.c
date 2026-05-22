/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@wil@@SA_NXZ @ 0x1800356BC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180016BA0 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800ACAA8 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035508 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_2531.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035658 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772@@@w.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_SmartLightFix_25315772>::ReportUsageToService(v2, v3, v4);
  return v1;
}
