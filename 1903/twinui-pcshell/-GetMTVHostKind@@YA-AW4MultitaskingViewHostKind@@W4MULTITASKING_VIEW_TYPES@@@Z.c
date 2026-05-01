/*
 * XREFs of ?GetMTVHostKind@@YA?AW4MultitaskingViewHostKind@@W4MULTITASKING_VIEW_TYPES@@@Z @ 0x180349A54
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034ACDC (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D63C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B26C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180349DA0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall GetMTVHostKind(int a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( !(_DWORD)v5 )
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v5, 3u, a3);
      return 1LL;
    }
    v6 = v5 - 2;
    if ( v6 )
    {
      if ( v6 != 4 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          35LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          a4);
        __debugbreak();
      }
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsageToService();
    }
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsageToService(v4, 3u, a3);
  }
  return 0LL;
}
