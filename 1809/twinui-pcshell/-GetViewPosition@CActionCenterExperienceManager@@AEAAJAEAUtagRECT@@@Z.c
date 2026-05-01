/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18008D08C
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18000CA00 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010C64 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180014580 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(
        CActionCenterExperienceManager *this,
        struct tagRECT *a2)
{
  HMONITOR v4; // rsi
  const char *v5; // r9
  __int64 v6; // rdx
  HMONITOR v8; // r8
  double v9; // xmm0_8
  int v10; // edi
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SetRectEmpty(a2);
  if ( *((_QWORD *)this + 18) )
  {
    v4 = MonitorFromPoint(0LL, 1u);
    if ( v4 == (HMONITOR)-1LL )
    {
      v6 = 933LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( !GetMonitorInfoW(v4, &mi) )
    {
      v6 = 936LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    *a2 = mi.rcMonitor;
    if ( *((_BYTE *)this + 408) )
      *a2 = mi.rcWork;
    v9 = *((double *)this + 64);
    if ( v9 > 0.0 )
      a2->bottom -= ExperienceManagerUtils::ScaleByPerMonitorDPI(
                      (ExperienceManagerUtils *)(unsigned int)(int)v9,
                      (__int64)v4,
                      v8);
    if ( *((_BYTE *)this + 409) )
      a2->top = a2->bottom
              - ExperienceManagerUtils::ScaleByPerMonitorDPI(
                  (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 42),
                  (__int64)v4,
                  v8);
    v10 = (int)(float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                        (ExperienceManagerUtils *)(unsigned int)(int)*((float *)this + 41),
                        (__int64)v4,
                        v8);
    if ( (unsigned int)Mirror_IsThreadRTL() )
      a2->right = v10 + a2->left;
    else
      a2->left = a2->right - v10;
  }
  return 0LL;
}
