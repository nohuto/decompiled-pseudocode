/*
 * XREFs of ?CacheDisplayInformation@DWMInputDisplay@@IEAAJXZ @ 0x18008ED40
 * Callers:
 *     ?GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z @ 0x18008EE50 (-GetBounds@DWMInputDisplay@@UEAAJPEAJ0@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall DWMInputDisplay::CacheDisplayInformation(DWMInputDisplay *this)
{
  HMONITOR v1; // rbx
  BOOL v3; // eax
  int v4; // ecx
  HDC DC; // rbx
  LPARAM dwData; // [rsp+20h] [rbp-48h] BYREF
  tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF

  v1 = (HMONITOR)*((_QWORD *)this + 3);
  if ( !v1 )
  {
    dwData = 0LL;
    v3 = EnumDisplayMonitors(
           0LL,
           0LL,
           (MONITORENUMPROC)lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
           (LPARAM)&dwData);
    v1 = (HMONITOR)(dwData & -(__int64)v3);
  }
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( v1 && GetMonitorInfoW(v1, &mi) )
  {
    v4 = mi.rcMonitor.right - mi.rcMonitor.left;
    *((_DWORD *)this + 9) = mi.rcMonitor.bottom - mi.rcMonitor.top;
    *((_DWORD *)this + 8) = v4;
  }
  else
  {
    DC = GetDC(0LL);
    *((_DWORD *)this + 8) = GetDeviceCaps(DC, 8);
    *((_DWORD *)this + 9) = GetDeviceCaps(DC, 10);
    ReleaseDC(0LL, DC);
    v4 = *((_DWORD *)this + 8);
  }
  if ( !v4 || !*((_DWORD *)this + 9) )
  {
    *((_DWORD *)this + 8) = 1024;
    *((_DWORD *)this + 9) = 768;
  }
  return 0LL;
}
