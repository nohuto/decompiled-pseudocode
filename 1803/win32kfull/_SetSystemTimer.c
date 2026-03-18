/*
 * XREFs of _SetSystemTimer @ 0x1C00647F0
 * Callers:
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxFlashWindow @ 0x1C006312C (xxxFlashWindow.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0064684 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006470C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00648E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01AB578 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01B17B0 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01B20EC (zzzStartFade.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 *     NtUserSetSystemTimer @ 0x1C01F5A10 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FFF80 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0202070 (xxxTrackBox.c)
 * Callees:
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx

  if ( !a1
    || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
  {
    return 0LL;
  }
  if ( !a5 && PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
    UserSetLastError(5LL, v9);
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
