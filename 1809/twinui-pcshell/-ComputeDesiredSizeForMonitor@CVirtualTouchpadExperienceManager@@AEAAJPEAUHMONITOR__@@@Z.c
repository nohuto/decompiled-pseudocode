/*
 * XREFs of ?ComputeDesiredSizeForMonitor@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x180178AB4
 * Callers:
 *     _lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator() @ 0x180177D90 (_lambda_4003b582d2de643f8f6d5cb83a00bbb0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x18017885C (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::ComputeDesiredSizeForMonitor(
        CVirtualTouchpadExperienceManager *this,
        HMONITOR a2)
{
  const char *v4; // r9
  int ScaleFactorForMonitor; // ebx
  __int64 v7; // rdx
  enum DEVICE_SCALE_FACTOR v8; // [rsp+20h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  mi.cbSize = 40;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(a2, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x13A,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v4);
  ScaleFactorForMonitor = GetScaleFactorForMonitor(a2, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 316LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    return (unsigned int)ScaleFactorForMonitor;
  }
  ScaleFactorForMonitor = CVirtualTouchpadExperienceManager::ComputeDesiredSize(this, a2, &mi.rcMonitor, &v8);
  if ( ScaleFactorForMonitor < 0 )
  {
    v7 = 317LL;
    goto LABEL_5;
  }
  return 0LL;
}
