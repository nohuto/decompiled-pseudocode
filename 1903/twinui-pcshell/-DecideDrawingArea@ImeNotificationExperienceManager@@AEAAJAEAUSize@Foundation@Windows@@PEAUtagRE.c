/*
 * XREFs of ?DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRECT@@@Z @ 0x1801824F0
 * Callers:
 *     ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180182850 (-OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x1801823A4 (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::DecideDrawingArea(
        ImeNotificationExperienceManager *this,
        struct Windows::Foundation::Size *a2,
        struct tagRECT *a3)
{
  int v4; // ebx
  HWND ForegroundWindow; // rax
  HMONITOR v6; // rdi
  ImeNotificationExperienceManager *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r9d
  LONG v12; // r8d
  LONG top; // ecx
  int v14; // eax
  LONG v15; // ecx
  int v17; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( *((float *)a2 + 1) != *(float *)a2 )
  {
    v8 = -2147418113;
    v9 = 111LL;
    goto LABEL_8;
  }
  v4 = (int)*(float *)a2;
  v17 = v4;
  ForegroundWindow = GetForegroundWindow();
  v6 = MonitorFromWindow(ForegroundWindow, 2u);
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v6, &mi) )
  {
    v8 = -2147467259;
    v9 = 120LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)v8);
    return v8;
  }
  v10 = ImeNotificationExperienceManager::CalculateScaling(v7, v4, (ExperienceManagerUtils *)v6, &mi, 0, &v17);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = v17;
  v12 = (mi.rcMonitor.right - mi.rcMonitor.left - v17) / 2 + mi.rcMonitor.left;
  top = mi.rcMonitor.top;
  v14 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  a3->left = v12;
  v15 = (v14 - v11) / 2 + top;
  a3->right = v12 + v11;
  a3->top = v15;
  a3->bottom = v15 + v11;
  return 0LL;
}
