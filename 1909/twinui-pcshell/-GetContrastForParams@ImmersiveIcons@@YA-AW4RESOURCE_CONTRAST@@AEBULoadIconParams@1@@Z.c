/*
 * XREFs of ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x18042AAFC
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18042AD24 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18042C140 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18042C2CC (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803338DC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CAX_NW4Repor.c)
 *     ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x18042BE04 (-GetMrtContrast@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@XZ.c)
 */

__int64 __fastcall ImmersiveIcons::GetContrastForParams(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsageToService(a1, a2, a3);
  result = 0LL;
  if ( !*(_DWORD *)(a1 + 36) )
    return ImmersiveIcons::GetMrtContrast();
  if ( *(_DWORD *)(a1 + 36) == 2 )
  {
    if ( *(_DWORD *)(a1 + 44) == 2 )
    {
      return 2LL;
    }
    else
    {
      result = 3LL;
      if ( *(_DWORD *)(a1 + 44) != 1 )
        return 1LL;
    }
  }
  return result;
}
