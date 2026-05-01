/*
 * XREFs of ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18018FBF4
 * Callers:
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x18018E6EC (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190290 (-OnViewDestroyed@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190350 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801904D0 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility(
        CPeopleBarFlyoutExperienceManager *this,
        unsigned __int8 a2)
{
  HWND WindowW; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 72) != a2 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( !WindowW )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    PostMessageW(WindowW, 0x4F6u, a2, 0LL);
    *((_BYTE *)this + 72) = a2;
  }
  return 0LL;
}
