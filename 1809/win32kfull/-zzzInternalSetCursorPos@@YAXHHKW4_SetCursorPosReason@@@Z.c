/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC
 * Callers:
 *     ?EditionInternalSetCursorPos@@YAXHHK@Z @ 0x1C00A4830 (-EditionInternalSetCursorPos@@YAXHHK@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     zzzResetSharedDesktops @ 0x1C0104B90 (zzzResetSharedDesktops.c)
 *     ?zzzSetCursorPos@@YA_NHHK@Z @ 0x1C01205AC (-zzzSetCursorPos@@YA_NHHK@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0159020 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01CF81C (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01D3534 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C000D5F0 (IsCurrentDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6, v5);
    LogicalToPhysicalDPIPoint(v9, v9, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v9[0];
  CCursorClip::BoundPoint(gpCursorClip, v9[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(unsigned int *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
