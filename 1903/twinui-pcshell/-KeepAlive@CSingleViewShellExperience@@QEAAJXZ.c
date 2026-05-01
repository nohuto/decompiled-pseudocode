/*
 * XREFs of ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18004FE90
 * Callers:
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18004FE80 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180198AD0 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800458C4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005004C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::KeepAlive(CSingleViewShellExperience *this)
{
  unsigned int *v2; // rcx
  ExperienceManagerUtils *v3; // rdx
  int v4; // eax
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService();
  v2 = (unsigned int *)((char *)this + 72);
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( (*((_BYTE *)this + 132) & 0x40) != 0 )
  {
    v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(v2, v3, 3u);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 900LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return 0LL;
  }
  v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(v2, v3, 4u);
  if ( v4 < 0 )
  {
    v6 = 904LL;
    goto LABEL_7;
  }
  return 0LL;
}
