/*
 * XREFs of ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180083820
 * Callers:
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180083810 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B7A00 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x18001395C (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::KeepAlive(CSingleViewShellExperience *this, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rcx
  ExperienceManagerUtils *v5; // rdx
  int v6; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService((__int64)this, a2, a3);
  v4 = (unsigned int *)((char *)this + 72);
  v5 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( (*((_BYTE *)this + 132) & 0x40) != 0 )
  {
    v6 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(v4, v5, 3u);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 900LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6);
    return 0LL;
  }
  v6 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(v4, v5, 4u);
  if ( v6 < 0 )
  {
    v8 = 904LL;
    goto LABEL_7;
  }
  return 0LL;
}
