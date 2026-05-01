/*
 * XREFs of ?IsLightDismissSupportedView@TouchKeyboardExperienceManager@@AEAA_NI@Z @ 0x1802B71A8
 * Callers:
 *     _lambda_090ae1e053e5c7adb69314d8c41aea26_::operator() @ 0x180092674 (_lambda_090ae1e053e5c7adb69314d8c41aea26_--operator().c)
 *     _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8 (_lambda_4ae43a7ebf3caa9980047f7d59b4d07c_--operator().c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardShellUI@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802BA0FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ClipboardShellUI@@@wil@@CAX_NW4Repor.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsLightDismissSupportedView(
        TouchKeyboardExperienceManager *this,
        int a2)
{
  if ( a2 == 3 )
  {
    wil::Feature<__WilFeatureTraits_Feature_ClipboardShellUI>::ReportUsageToService(this);
    return 1;
  }
  return ((a2 - 2) & 0xFFFFFFFB) == 0;
}
