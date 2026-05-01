/*
 * XREFs of ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016A790
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800694B4 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewCreated(
        ExperienceManagerUtils **this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  HWND v6; // rbx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CSingleViewShellExperience::SetPreferentialRMSettings((__int64)(this + 27), 3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      414LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(this[30], v4);
  v6 = v5;
  if ( v5 )
  {
    if ( !SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
    {
      v7 = 425LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    if ( !SetPropW(v6, L"WindowShouldReportLayoutCompletedTelemetryProp", HANDLE_FLAG_INHERIT) )
    {
      v7 = 429LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
