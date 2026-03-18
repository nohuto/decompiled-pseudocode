/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001A014
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0018230 (UserDetachQueueFromInputWindowApiExt.c)
 *     UserJobCallout @ 0x1C0018720 (UserJobCallout.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0019684 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C0019AE0 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C0019C30 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     DestroyWindowStation @ 0x1C011E300 (DestroyWindowStation.c)
 *     FreeWindowStation @ 0x1C0125370 (FreeWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C0137930 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C013D640 (FreeDesktop.c)
 *     UserBeep @ 0x1C01CD3A4 (UserBeep.c)
 *     xxxProcessHidInput @ 0x1C01D8BF0 (xxxProcessHidInput.c)
 *     UserRedrawDesktop @ 0x1C023B5E4 (UserRedrawDesktop.c)
 *     UserKillTimer @ 0x1C0244CDC (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0244D30 (UserSetTimer.c)
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
