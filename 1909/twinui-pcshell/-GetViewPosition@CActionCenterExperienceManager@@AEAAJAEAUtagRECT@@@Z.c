/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x180045F9C
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180048F44 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004E6F0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800419D0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rsi
  const char *v5; // r9
  HMONITOR v6; // rdx
  int PerMonitorDpi; // eax
  double v8; // xmm0_8
  int v9; // esi
  int v10; // edi
  LANGID ThreadUILanguage; // ax
  __int64 v13; // rdx
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SetRectEmpty(a2);
  if ( !*((_QWORD *)this + 18) )
    return 0LL;
  v4 = MonitorFromPoint(0LL, 1u);
  if ( v4 == (HMONITOR)-1LL )
  {
    v13 = 952LL;
  }
  else
  {
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v4, &mi) )
    {
      *a2 = mi.rcMonitor;
      if ( *((_BYTE *)this + 416) )
        *a2 = mi.rcWork;
      PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v4, v6);
      v8 = *((double *)this + 65);
      v9 = PerMonitorDpi;
      if ( v8 > 0.0 )
        a2->bottom -= MulDiv((int)v8, PerMonitorDpi, 96);
      if ( *((_BYTE *)this + 417) )
        a2->top = a2->bottom - MulDiv((int)*((float *)this + 42), v9, 96);
      v10 = MulDiv((int)*((float *)this + 41), v9, 96);
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        a2->right = v10 + a2->left;
      else
        a2->left = a2->right - v10;
      return 0LL;
    }
    v13 = 955LL;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v13,
           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
           v5);
}
