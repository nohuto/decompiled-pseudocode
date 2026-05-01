/*
 * XREFs of ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801C85A0
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801C9120 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801207DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

signed int __fastcall CVirtualTouchpadExperienceManager::PositionCursorForInteraction(
        CVirtualTouchpadExperienceManager *this)
{
  POINT v2; // rcx
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v6; // rbx
  __int64 v7; // rdx
  wil::details *v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  LPARAM dwData; // [rsp+20h] [rbp-40h] BYREF
  HMONITOR v12; // [rsp+28h] [rbp-38h]
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = (POINT)*((_QWORD *)this + 38);
  v12 = 0LL;
  dwData = (LPARAM)MonitorFromPoint(v2, 2u);
  if ( dwData == -1 )
  {
    v4 = 497LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_f1e785658634c390da977b3f3dacc9c6_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v6 = v12;
  mi.cbSize = 40;
  if ( !v12 )
    v6 = (HMONITOR)dwData;
  v12 = v6;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v6, &mi) )
  {
    v4 = 521LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  }
  if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD))this + 95))(
         (unsigned int)(mi.rcMonitor.left + (mi.rcMonitor.right - mi.rcMonitor.left) / 2),
         (unsigned int)(mi.rcMonitor.top + (mi.rcMonitor.bottom - mi.rcMonitor.top) / 2)) )
  {
    return 0;
  }
  else
  {
    return wil::details::GetLastErrorFailHr(v8, v7, v9, v10);
  }
}
