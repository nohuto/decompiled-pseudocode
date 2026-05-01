/*
 * XREFs of ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18006A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003F6A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18006A898 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F9A44 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned __int8 a3)
{
  ExperienceManagerUtils *v6; // rcx
  HWND v7; // rbx
  int RgnBox; // eax
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  const char *v12; // r9
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  struct tagRECT rc; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( v6 )
    v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  else
    v7 = 0LL;
  if ( !v7 )
    return 0LL;
  if ( !a2 )
  {
    v14 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, 0LL, a3);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    if ( SetPropW(v7, L"UIA_WindowVisibilityOverridden", 0LL) )
      return 0LL;
    v16 = 142LL;
    goto LABEL_20;
  }
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  RgnBox = GetRgnBox((HRGN)a2, &rc);
  v9 = 2LL;
  if ( RgnBox != 1 && (RgnBox != 2 || !IsRectEmpty(&rc)) )
    v9 = 0LL;
  v10 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, (HRGN)a2, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  if ( !SetPropW(v7, L"UIA_WindowVisibilityOverridden", (HANDLE)v9) )
  {
    v16 = 153LL;
LABEL_20:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      v12);
  }
  return 0LL;
}
