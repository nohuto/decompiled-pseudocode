/*
 * XREFs of _SetSystemTimer @ 0x1C00EA334
 * Callers:
 *     xxxFlashWindow @ 0x1C0015284 (xxxFlashWindow.c)
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00E9C8C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00EA1BC (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA244 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01E2998 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E9400 (IncrementCompositedCount.c)
 *     zzzStartFade @ 0x1C01E9D50 (zzzStartFade.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 *     NtUserSetSystemTimer @ 0x1C0234FA0 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240E00 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C004C470 (InternalSetTimer.c)
 */

__int64 __fastcall SetSystemTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( !a1 || (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( !a5 && PsGetCurrentProcessWin32Process(v10, v9) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
    UserSetLastError(5LL, v11, v12, v13);
    return 0LL;
  }
  return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
}
