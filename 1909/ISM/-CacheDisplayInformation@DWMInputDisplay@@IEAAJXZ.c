/*
 * XREFs of ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x1800C6554
 * Callers:
 *     ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x1800C6640 (-GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?GetInternalHMonitor@@YAPEAUHMONITOR__@@XZ @ 0x1800C6700 (-GetInternalHMonitor@@YAPEAUHMONITOR__@@XZ.c)
 */

__int64 __fastcall DWMInputDisplay::CacheDisplayInformation(DWMInputDisplay *this)
{
  HMONITOR InternalHMonitor; // rbx
  int v3; // ecx
  HDC DC; // rbx
  tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  InternalHMonitor = (HMONITOR)*((_QWORD *)this + 3);
  if ( !InternalHMonitor )
    InternalHMonitor = GetInternalHMonitor();
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( InternalHMonitor && GetMonitorInfoW(InternalHMonitor, &mi) )
  {
    v3 = mi.rcMonitor.right - mi.rcMonitor.left;
    *((_DWORD *)this + 9) = mi.rcMonitor.bottom - mi.rcMonitor.top;
    *((_DWORD *)this + 8) = v3;
  }
  else
  {
    DC = GetDC(0LL);
    *((_DWORD *)this + 8) = GetDeviceCaps(DC, 8);
    *((_DWORD *)this + 9) = GetDeviceCaps(DC, 10);
    ReleaseDC(0LL, DC);
    v3 = *((_DWORD *)this + 8);
  }
  if ( !v3 || !*((_DWORD *)this + 9) )
  {
    *((_DWORD *)this + 8) = 1024;
    *((_DWORD *)this + 9) = 768;
  }
  return 0LL;
}
