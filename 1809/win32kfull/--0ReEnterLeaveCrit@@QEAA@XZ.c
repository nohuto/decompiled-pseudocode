/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690
 * Callers:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UserJobCallout @ 0x1C00B1A90 (UserJobCallout.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00B1B60 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00B1F34 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C00B22C0 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C00B2410 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     FreeWindowStation @ 0x1C00E03A0 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C0115400 (DestroyWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C012CA30 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C0132530 (FreeDesktop.c)
 *     UserBeep @ 0x1C01B9414 (UserBeep.c)
 *     xxxProcessHidInput @ 0x1C01C5800 (xxxProcessHidInput.c)
 *     UserRedrawDesktop @ 0x1C0223048 (UserRedrawDesktop.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C02264B4 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 *     UserKillTimer @ 0x1C022BCA8 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C022BCFC (UserSetTimer.c)
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
