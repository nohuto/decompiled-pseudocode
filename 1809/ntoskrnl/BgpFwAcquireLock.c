/*
 * XREFs of BgpFwAcquireLock @ 0x14016F238
 * Callers:
 *     BgLibraryEnable @ 0x140159808 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14016ED88 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F2A0 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140292320 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292474 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1403275DC (BgDisplaySafeToPowerOffScreen.c)
 *     BgGetContext @ 0x14094E034 (BgGetContext.c)
 *     BgFreeContext @ 0x14094E1D4 (BgFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14094E460 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x14094E608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14094E7DC (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x14094F140 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14094F440 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409503A4 (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x140950E10 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140950E9C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x140951260 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409513F0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x140951670 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x140951730 (BgpConsoleInitialize.c)
 *     BgAcquireSpinLock @ 0x140951A38 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x14095342C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14095349C (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140953508 (BgMarkHiberPhase.c)
 *     BgpConsoleClearScreen @ 0x140953540 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140953610 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409539C0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140953B30 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140953BA0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140953E30 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140953EE0 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140953FF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  if ( (dword_140405AD0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_1404D9810 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    KxAcquireSpinLock(&qword_1404D9810);
    byte_14043FE20 = CurrentIrql;
  }
}
