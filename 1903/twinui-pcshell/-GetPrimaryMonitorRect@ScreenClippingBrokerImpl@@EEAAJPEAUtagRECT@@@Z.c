/*
 * XREFs of ?GetPrimaryMonitorRect@ScreenClippingBrokerImpl@@EEAAJPEAUtagRECT@@@Z @ 0x1803E1A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetSystemDimensions@ScreenClippingBrokerImpl@@CA?AUtagRECT@@XZ @ 0x1803E1D0C (-GetSystemDimensions@ScreenClippingBrokerImpl@@CA-AUtagRECT@@XZ.c)
 */

__int64 __fastcall ScreenClippingBrokerImpl::GetPrimaryMonitorRect(ScreenClippingBrokerImpl *this, struct tagRECT *a2)
{
  HMONITOR v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  __int64 v6; // rax
  POINT pt[2]; // [rsp+20h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  pt[1] = 0LL;
  pt[0] = 0LL;
  *a2 = 0u;
  v3 = MonitorFromPoint(0LL, 1u);
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v3, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x94,
             (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
             v4);
  v6 = *(_QWORD *)&ScreenClippingBrokerImpl::GetSystemDimensions((struct tagRECT *)pt)->left;
  pt[0].x = mi.rcMonitor.left - v6;
  pt[0].y = mi.rcMonitor.top - HIDWORD(v6);
  pt[1].x = mi.rcMonitor.right - v6;
  pt[1].y = mi.rcMonitor.bottom - HIDWORD(v6);
  result = 0LL;
  *a2 = *(struct tagRECT *)&pt[0].x;
  return result;
}
