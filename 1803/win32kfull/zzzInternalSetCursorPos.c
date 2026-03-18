/*
 * XREFs of zzzInternalSetCursorPos @ 0x1C0067330
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     zzzSetCursorPos @ 0x1C0067194 (zzzSetCursorPos.c)
 *     zzzResetSharedDesktops @ 0x1C00E79D0 (zzzResetSharedDesktops.c)
 *     xxxUserResetDisplayDevice @ 0x1C0138980 (xxxUserResetDisplayDevice.c)
 *     ?InternalSetCursorPos@@YAXHHK@Z @ 0x1C01975A0 (-InternalSetCursorPos@@YAXHHK@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01AC63C (zzzActiveCursorTracking.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     IsCurrentDesktopComposed @ 0x1C00C2030 (IsCurrentDesktopComposed.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzInternalSetCursorPos(unsigned int a1, unsigned int a2, int a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  unsigned __int8 v11; // di
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = ValidateHmonitorNoRip(ghCursorMonitor);
  v9 = 0LL;
  if ( v8 )
    v10 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 64LL);
  else
    v10 = 0;
  v11 = a4 & 1;
  v16[0] = __PAIR64__(a2, a1);
  if ( a3 == 1 && (unsigned int)IsCurrentDesktopComposed() )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12);
    LogicalToPhysicalDPIPoint(v16, v16, CurrentThreadDpiAwarenessContext, 0LL);
  }
  *(_QWORD *)gptCursorAsync = v16[0];
  CCursorClip::BoundPoint(gpCursorClip, v16[0], 0LL, *(_QWORD *)gptCursorAsync);
  *(_QWORD *)(gpsi + 4960LL) = *(_QWORD *)gptCursorAsync;
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
  SendPositionChanged(v16);
  if ( MonitorFromPoint(*(_QWORD *)gptCursorAsync, 1LL, 18LL) )
    v9 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)gptCursorAsync, 1LL, 18LL);
  ghCursorMonitor = v9;
  UpdateCursorImageForMonitorDpi(v10);
  return GenerateMouseMove(2 * (unsigned int)v11 + 1);
}
