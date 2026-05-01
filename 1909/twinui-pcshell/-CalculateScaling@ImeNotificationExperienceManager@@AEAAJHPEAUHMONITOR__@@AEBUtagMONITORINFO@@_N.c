/*
 * XREFs of ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x1801A1414
 * Callers:
 *     ?DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRECT@@@Z @ 0x1801A1560 (-DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRE.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x1801A1BF0 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180085544 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::CalculateScaling(
        ImeNotificationExperienceManager *this,
        int a2,
        ExperienceManagerUtils *a3,
        const struct tagMONITORINFO *a4,
        bool a5,
        int *a6)
{
  int v7; // ecx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = a4->rcMonitor.right - a4->rcMonitor.left;
  if ( v7 >= a4->rcMonitor.bottom - a4->rcMonitor.top )
    v7 = a4->rcMonitor.bottom - a4->rcMonitor.top;
  v8 = (int)((double)v7 * 0.15);
  *a6 = v8;
  if ( a5 )
  {
    v8 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)v8, a3, (HMONITOR)a3);
    *a6 = v8;
  }
  if ( (double)v8 / (double)a2 < 1.0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  return 0LL;
}
