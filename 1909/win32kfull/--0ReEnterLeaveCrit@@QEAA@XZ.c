/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0021474 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C0021900 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C0021A50 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UserJobCallout @ 0x1C00EF070 (UserJobCallout.c)
 *     DestroyWindowStation @ 0x1C00F88C0 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00F97B0 (UserDetachQueueFromInputWindowApiExt.c)
 *     FreeWindowStation @ 0x1C00FF260 (FreeWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C0111830 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C0117580 (FreeDesktop.c)
 *     UserBeep @ 0x1C01CD214 (UserBeep.c)
 *     xxxProcessHidInput @ 0x1C01D8A70 (xxxProcessHidInput.c)
 *     UserRedrawDesktop @ 0x1C023AFC4 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C024459C (UserKillTimer.c)
 *     UserSetTimer @ 0x1C02445F0 (UserSetTimer.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0LL, 1LL);
  return this;
}
