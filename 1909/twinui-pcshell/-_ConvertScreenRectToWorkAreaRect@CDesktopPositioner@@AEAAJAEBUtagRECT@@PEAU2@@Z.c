/*
 * XREFs of ?_ConvertScreenRectToWorkAreaRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18004AD50
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004A03C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18004A638 (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

__int64 __fastcall CDesktopPositioner::_ConvertScreenRectToWorkAreaRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  HMONITOR v4; // rbx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *a3 = *a2;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    memset_0(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v4, &mi) )
    {
      if ( mi.rcMonitor.left != mi.rcWork.left || mi.rcMonitor.top != mi.rcWork.top )
        OffsetRect(a3, mi.rcMonitor.left - mi.rcWork.left, mi.rcMonitor.top - mi.rcWork.top);
    }
  }
  return 0LL;
}
