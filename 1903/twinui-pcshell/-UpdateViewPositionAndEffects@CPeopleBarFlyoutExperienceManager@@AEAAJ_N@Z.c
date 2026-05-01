/*
 * XREFs of ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801919DC
 * Callers:
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190100 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180190350 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801903C0 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18004CDD4 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18004E1D8 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?IsHighContrast@@YAHXZ @ 0x180050800 (-IsHighContrast@@YAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x18018F19C (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateViewPositionAndEffects(
        CPeopleBarFlyoutExperienceManager *this,
        char a2)
{
  int FlyoutRectForLocationAndBorderFlag; // ebx
  __int64 v5; // rdx
  CSingleViewShellExperience *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  FlyoutRectForLocationAndBorderFlag = CPeopleBarFlyoutExperienceManager::GetFlyoutRectForLocationAndBorderFlag(
                                         (__int64)this,
                                         *((_QWORD *)this + 38),
                                         &v12,
                                         &v11);
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
  v7 = (CPeopleBarFlyoutExperienceManager *)((char *)this + 112);
  if ( a2 )
  {
    v8 = IsHighContrast();
    v9 = CSingleViewShellExperience::ShowBorder((__int64)this + 112, v11, v8 != 0, 0LL, 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x362,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    FlyoutRectForLocationAndBorderFlag = CSingleViewShellExperience::SetPosition(v7, &v12);
    if ( FlyoutRectForLocationAndBorderFlag < 0 )
    {
      v5 = 869LL;
      goto LABEL_3;
    }
  }
  else
  {
    FlyoutRectForLocationAndBorderFlag = CSingleViewShellExperience::ShowBorder((__int64)this + 112, v11, 0LL, 0LL, 0);
    if ( FlyoutRectForLocationAndBorderFlag < 0 )
    {
      v5 = 874LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
