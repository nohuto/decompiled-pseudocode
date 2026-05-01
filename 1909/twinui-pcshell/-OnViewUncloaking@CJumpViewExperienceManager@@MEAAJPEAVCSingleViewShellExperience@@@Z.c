/*
 * XREFs of ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180017A94 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800364A8 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180042D24 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180050578 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x180051124 (-IsHighContrast@@YAHXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1800739EC (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18013E9FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetBorderFlagFromStuckEdge@CJumpViewExperienceManager@@AEAA?AW4Border@CSingleViewShellExperience@@XZ @ 0x1801BB24C (-GetBorderFlagFromStuckEdge@CJumpViewExperienceManager@@AEAA-AW4Border@CSingleViewShellExperienc.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_JumpListV3@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801BC8AC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_JumpListV3@@@wil@@CAX_NW4ReportingKi.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewUncloaking(
        CJumpViewExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  HWND v3; // rbx
  HSTRING v4; // r8
  const WCHAR *StringRawBuffer; // rax
  const char *v6; // r9
  int v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // ecx
  unsigned int BorderFlagFromStuckEdge; // eax
  __int64 v12; // r8
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               a2[3],
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                       *((Microsoft::WRL::Wrappers::Details **)this + 43),
                       0LL,
                       v4) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 43), 0LL);
    if ( !SetWindowTextW(v3, StringRawBuffer) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1DA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        v6);
  }
  if ( *((_QWORD *)this + 14) )
    CSingleViewShellExperience::SetWindowBand((__int64)this + 88);
  v7 = *((_DWORD *)this + 104);
  v8 = 92;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 90;
      }
      else
      {
        v8 = 88;
      }
    }
    else
    {
      v8 = 91;
    }
  }
  else
  {
    v8 = 89;
  }
  wil::Feature<__WilFeatureTraits_Feature_JumpListV3>::ReportUsageToService();
  IsHighContrast();
  BorderFlagFromStuckEdge = CJumpViewExperienceManager::GetBorderFlagFromStuckEdge((__int64)this - 64);
  CSingleViewShellExperience::ShowBorder((__int64)this + 88, BorderFlagFromStuckEdge, v12, 0LL, 0);
  if ( *((_DWORD *)this + 105) == 3 )
  {
    if ( (int)DwmpBeginTransitionRequest(64LL) >= 0 )
      DwmpEndTransitionRequest(64LL);
    v13 = CExperienceManagerAnimationHelper::Begin(
            (__int64)this + 352,
            *((ExperienceManagerUtils **)this + 14),
            v8 | 0x200000u,
            0LL,
            0);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
  }
  return 0LL;
}
