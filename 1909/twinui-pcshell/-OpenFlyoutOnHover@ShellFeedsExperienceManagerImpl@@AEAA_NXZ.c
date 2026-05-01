/*
 * XREFs of ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x180094208
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x180093EB0 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x1800951BC (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_N@Z @ 0x180096548 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA-AW4Va.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@SA_NXZ @ 0x180096594 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@SA_NXZ.c)
 */

char __fastcall ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(ShellFeedsExperienceManagerImpl *this)
{
  char v1; // bl
  ShellFeedsExperienceManagerImpl *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  v1 = 1;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsHoverClickOptions>::__private_IsEnabled() )
  {
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
           L"ShellFeedsTaskbarOpenOnHover",
           (unsigned int *)&v3) < 0 )
      return (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant() != 4;
    else
      return (_DWORD)v3 != 0;
  }
  return v1;
}
