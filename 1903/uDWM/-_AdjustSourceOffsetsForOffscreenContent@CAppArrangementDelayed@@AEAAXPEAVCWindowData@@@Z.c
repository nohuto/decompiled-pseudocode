/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x1800A96D4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18002BA54 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180033928 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  HWND v4; // rdx
  int v5; // esi
  int v6; // r14d
  int SystemMetrics; // r14d
  int v8; // esi
  HMONITOR v9; // rax
  HMONITOR v10; // rbx
  int v11; // eax
  struct tagSIZE v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              v4,
              (struct tagPOINT *)&v12) >= 0 )
    OffsetRect(&rc, v12.cx - rc.left, v12.cy - rc.top);
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *((HWND *)a2 + 5),
              &v12) >= 0 )
  {
    rc.right = rc.left + v12.cx;
    rc.bottom = rc.top + v12.cy;
  }
  if ( (*((_DWORD *)a2 + 153) & 0x800000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 166) - rc.left;
    v6 = *((_DWORD *)a2 + 167) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v6 = GetSystemMetrics(33) + SystemMetrics;
    v8 = GetSystemMetrics(92);
    v5 = GetSystemMetrics(32) + v8;
    v9 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    v10 = v9;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v10, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v6 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v5 = mi.rcMonitor.left - rc.left;
    }
  }
  v11 = *((_DWORD *)a2 + 153);
  if ( (v11 & 0x1000000) != 0 )
  {
    OffsetRect((LPRECT)((char *)a2 + 616), v5 - *((_DWORD *)a2 + 154), v6 - *((_DWORD *)a2 + 155));
    v11 = *((_DWORD *)a2 + 153);
  }
  if ( (v11 & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 648), v5 - *((_DWORD *)a2 + 162), v6 - *((_DWORD *)a2 + 163));
}
