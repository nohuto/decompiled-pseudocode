/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C004405C (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?EditionInternalSetCursorPos@@YAXHHK@Z @ 0x1C0044510 (-EditionInternalSetCursorPos@@YAXHHK@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C00EC900 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x1C0160850 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E44A0 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 *     IsCurrentDesktopComposed @ 0x1C008F610 (IsCurrentDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(v7, v7, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v7[0];
  CCursorClip::BoundPoint(gpCursorClip, v7[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL));
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
