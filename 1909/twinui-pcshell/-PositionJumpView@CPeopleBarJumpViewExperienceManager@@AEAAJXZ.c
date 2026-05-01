/*
 * XREFs of ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1801B2304
 * Callers:
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B1E60 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x1801B13CC (-CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1801B16F0 (-GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRE.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::PositionJumpView(struct tagRECT *this)
{
  HMONITOR v2; // rax
  int AppBarPositionForMonitor; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( this[21].left <= 0 || this[21].top <= 0 )
    return 0LL;
  *(_QWORD *)&v8.left = 0LL;
  *(_QWORD *)&v8.right = 0LL;
  v2 = MonitorFromRect(this + 19, 1u);
  AppBarPositionForMonitor = CPeopleBarJumpViewExperienceManager::GetAppBarPositionForMonitor(
                               (CPeopleBarJumpViewExperienceManager *)this,
                               v2,
                               &v8,
                               (enum EDGEUI_TRAYSTUCKPLACE *)&this[18].top);
  if ( AppBarPositionForMonitor < 0 )
  {
    v4 = 310LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)AppBarPositionForMonitor);
    return (unsigned int)AppBarPositionForMonitor;
  }
  AppBarPositionForMonitor = CPeopleBarJumpViewExperienceManager::CalculateJumpViewPosition(
                               (CPeopleBarJumpViewExperienceManager *)this,
                               &v8,
                               this + 20);
  if ( AppBarPositionForMonitor < 0 )
  {
    v4 = 313LL;
    goto LABEL_5;
  }
  if ( !*(_QWORD *)&this[5].left )
    return 0LL;
  v6 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)&this[3].right, this + 20);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
