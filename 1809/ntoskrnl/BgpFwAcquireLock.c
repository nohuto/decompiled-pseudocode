/*
 * XREFs of BgpFwAcquireLock @ 0x14016F358
 * Callers:
 *     BgLibraryEnable @ 0x140159928 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14016EEA8 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F3C0 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140292610 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1403278CC (BgDisplaySafeToPowerOffScreen.c)
 *     BgGetContext @ 0x14094F034 (BgGetContext.c)
 *     BgFreeContext @ 0x14094F1D4 (BgFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14094F460 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x14094F608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14094F7DC (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140950440 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409513A4 (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x140951E10 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140951E9C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x140952260 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409523F0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x140952670 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x140952730 (BgpConsoleInitialize.c)
 *     BgAcquireSpinLock @ 0x140952A38 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x14095442C (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14095449C (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140954508 (BgMarkHiberPhase.c)
 *     BgpConsoleClearScreen @ 0x140954540 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140954610 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409549C0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140954B30 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140954BA0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140954E30 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140954EE0 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140954FF0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  if ( (dword_140406AD0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_1404DA8D0 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    KxAcquireSpinLock(&qword_1404DA8D0);
    byte_140440EE0 = CurrentIrql;
  }
}
