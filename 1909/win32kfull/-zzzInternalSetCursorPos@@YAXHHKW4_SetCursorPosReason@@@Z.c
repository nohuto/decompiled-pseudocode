/*
 * XREFs of ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0088A30 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?EditionInternalSetCursorPos@@YAXHHK@Z @ 0x1C0088EE0 (-EditionInternalSetCursorPos@@YAXHHK@Z.c)
 *     zzzResetSharedDesktops @ 0x1C00CB180 (zzzResetSharedDesktops.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     xxxUserResetDisplayDevice @ 0x1C0161810 (xxxUserResetDisplayDevice.c)
 *     zzzActiveCursorTracking @ 0x1C01E4320 (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0018C40 (IsCurrentDesktopComposed.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = __PAIR64__(a2, a1);
  v4 = a4 & 1;
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7);
    LogicalToPhysicalDPIPoint(v10, v10, CurrentThreadDpiAwarenessContext, 0LL);
  }
  gptCursorAsync = (struct tagPOINT *const)v10[0];
  CCursorClip::BoundPoint(gpCursorClip, v10[0], 0LL, 1LL, gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL));
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  return GenerateMouseMove((unsigned int)(2 * v4 + 1));
}
