/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C000EAB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     UserJobCallout @ 0x1C000FA90 (UserJobCallout.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0011694 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C00119B0 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C0011AF0 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     FreeWindowStation @ 0x1C00B54D0 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C00F8410 (DestroyWindowStation.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C010E920 (EditionIsUsermodeRIMAccessAllowed.c)
 *     FreeDesktop @ 0x1C010FA50 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C0138B10 (xxxProcessHidInput.c)
 *     UserBeep @ 0x1C01983C4 (UserBeep.c)
 *     UserRedrawDesktop @ 0x1C01FAF04 (UserRedrawDesktop.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C01FD7CC (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 *     UserKillTimer @ 0x1C0203298 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C02032E8 (UserSetTimer.c)
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
