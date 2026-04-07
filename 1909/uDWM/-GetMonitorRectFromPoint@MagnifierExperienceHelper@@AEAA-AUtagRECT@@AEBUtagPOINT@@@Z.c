/*
 * XREFs of ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z @ 0x1800B53EC
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z @ 0x1800B52E4 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall MagnifierExperienceHelper::GetMonitorRectFromPoint(
        MagnifierExperienceHelper *this,
        struct tagRECT *__return_ptr retstr,
        const struct tagPOINT *a3)
{
  HMONITOR v4; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  v4 = MonitorFromPoint(*a3, 2u);
  if ( v4 )
  {
    mi.cbSize = 40;
    GetMonitorInfoW(v4, &mi);
    *retstr = mi.rcMonitor;
  }
  return retstr;
}
