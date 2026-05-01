/*
 * XREFs of ?GetMonitorWorkArea@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1801B1984
 * Callers:
 *     ?OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B1BA0 (-OnViewCloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B2160 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetMonitorWorkArea(const RECT *this, struct tagRECT *a2)
{
  HMONITOR v3; // rdi
  const char *v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = MonitorFromRect(this + 19, 1u);
  if ( v3 == (HMONITOR)-1LL )
  {
    v5 = 372LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
             v4);
  }
  mi.cbSize = 40;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v5 = 375LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v5,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
             v4);
  }
  result = 0LL;
  *a2 = mi.rcWork;
  return result;
}
