/*
 * XREFs of ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x18011FE38
 * Callers:
 *     ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1801206F0 (-SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService((__int64)this, a2, a3);
  return 0LL;
}
