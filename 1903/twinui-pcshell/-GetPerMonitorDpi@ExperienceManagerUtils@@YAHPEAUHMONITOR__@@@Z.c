/*
 * XREFs of ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18003E6A0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800415B0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18004CE04 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180082914 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801885E0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     InitDPI @ 0x180409710 (InitDPI.c)
 */

__int64 __fastcall ExperienceManagerUtils::GetPerMonitorDpi(ExperienceManagerUtils *this, HMONITOR a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  if ( this && (int)GetDpiForMonitor(this, 0LL, &v3, &v4) >= 0 )
    return v3;
  InitDPI(this, a2);
  return (unsigned int)dword_180598898;
}
