/*
 * XREFs of ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x180165010
 * Callers:
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801638D0 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180163B20 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180163B90 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C9B4 (-IsHighContrast@@YAHXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18000FB08 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x18016292C (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(
        CPeopleBarFlyoutExperienceManager *this,
        char a2)
{
  int FlyoutRectForLocationAndBorderFlag; // ebx
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  FlyoutRectForLocationAndBorderFlag = CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
                                         (__int64)this,
                                         *((_QWORD *)this + 38),
                                         &v9,
                                         &v8);
  if ( FlyoutRectForLocationAndBorderFlag < 0 )
  {
    v5 = 859LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)FlyoutRectForLocationAndBorderFlag);
    return (unsigned int)FlyoutRectForLocationAndBorderFlag;
  }
  if ( a2 )
  {
    v7 = IsHighContrast();
    FlyoutRectForLocationAndBorderFlag = CSingleViewShellExperience::ShowBorder(
                                           (__int64)this + 112,
                                           v8,
                                           v7 != 0,
                                           0LL,
                                           0);
    if ( FlyoutRectForLocationAndBorderFlag < 0 )
    {
      v5 = 866LL;
      goto LABEL_3;
    }
    FlyoutRectForLocationAndBorderFlag = CSingleViewShellExperience::SetPosition(
                                           (CPeopleBarFlyoutExperienceManager *)((char *)this + 112),
                                           &v9);
    if ( FlyoutRectForLocationAndBorderFlag < 0 )
    {
      v5 = 869LL;
      goto LABEL_3;
    }
  }
  else
  {
    FlyoutRectForLocationAndBorderFlag = CSingleViewShellExperience::ShowBorder((__int64)this + 112, v8, 0LL, 0LL, 0);
    if ( FlyoutRectForLocationAndBorderFlag < 0 )
    {
      v5 = 874LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
