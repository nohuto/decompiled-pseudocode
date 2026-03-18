/*
 * XREFs of BgpFwAcquireLock @ 0x140178A60
 * Callers:
 *     BgLibraryEnable @ 0x140169F88 (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x140178568 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140178AC8 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1402A8E70 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140348F38 (BgDisplaySafeToPowerOffScreen.c)
 *     BgGetContext @ 0x14098E034 (BgGetContext.c)
 *     BgFreeContext @ 0x14098E1D4 (BgFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14098E460 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14098E7EC (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409903F4 (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x140990E70 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409912C0 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x140991450 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x1409916D8 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x1409917A0 (BgpConsoleInitialize.c)
 *     BgAcquireSpinLock @ 0x140991AB4 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x1409934EC (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x14099355C (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1409935C8 (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x140993600 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140993660 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140993730 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140993AE0 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140993C50 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140993CC0 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140993F50 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140994000 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140994110 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  if ( (dword_14042C030 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140503C50 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
    KxAcquireSpinLock(&qword_140503C50);
    byte_14046BC60 = CurrentIrql;
  }
}
