/*
 * XREFs of ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180099DCC
 * Callers:
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800981F0 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A3DC (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::RecalculateClipRect(__int64 a1, const RECT *a2, int a3)
{
  HMONITOR v6; // rbx
  const char *v7; // r9
  bool v9; // zf
  LONG top; // ecx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  mi.cbSize = 40;
  v6 = MonitorFromRect((LPCRECT)(a1 + 376), 1u);
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v6, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x30D,
             (unsigned int)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
             v7);
  v9 = *(_BYTE *)(a1 + 449) == 0;
  *(RECT *)(a1 + 392) = mi.rcWork;
  if ( !v9 && !IsRectEmpty(a2) )
  {
    top = a2->top;
    if ( *(_DWORD *)(a1 + 404) > top && ((a3 - 1) & 0xFFFFFFFD) == 0 )
      *(_DWORD *)(a1 + 404) = top;
  }
  return 0LL;
}
