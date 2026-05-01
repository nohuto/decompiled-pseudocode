/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B7A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180015838 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@CAX_NW4Rep.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x180073A30 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x18007ADD8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     ?KeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x180083820 (-KeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1801DFA98 (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCreated(
        PriorityBoostHelper **this,
        struct CSingleViewShellExperience *a2)
{
  CSingleViewShellExperience *v2; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  HWND v11; // rax
  HWND v12; // rbx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CSingleViewShellExperience *)(this + 28);
  v4 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)(this + 28), 3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CC,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::ReportUsageToService(v6, v5, v7);
  if ( wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() != 5 )
  {
    v9 = PriorityBoostHelper::OnViewCreated(this[27]);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    if ( this[31]
      && (wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 3
       || wil::Feature<__WilFeatureTraits_Feature_StartInSeparateUWP>::__private_GetVariant() == 4) )
    {
      CSingleViewShellExperience::KeepAlive(v2, (__int64)v8, v10);
    }
  }
  v11 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[31], v8);
  v12 = v11;
  if ( v11 )
  {
    if ( !SetPropW(v11, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v13 = 482LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( !SetPropW(v12, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
    {
      v13 = 486LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
