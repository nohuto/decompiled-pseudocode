/*
 * XREFs of _GetProcessWindowStation @ 0x1C00DD4C0
 * Callers:
 *     xxxApplyGlobalInputSettings @ 0x1C0014300 (xxxApplyGlobalInputSettings.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     NtUserSetImeInfoEx @ 0x1C00DBB90 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00DCD20 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00DCE98 (DesktopFromDesktopWindow.c)
 *     NtUserOpenInputDesktop @ 0x1C00DCF00 (NtUserOpenInputDesktop.c)
 *     _CloseWindowStation @ 0x1C00DD12C (_CloseWindowStation.c)
 *     NtUserGetImeInfoEx @ 0x1C00DD180 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C00DD470 (NtUserGetProcessWindowStation.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
