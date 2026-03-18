/*
 * XREFs of _GetProcessWindowStation @ 0x1C00B81E0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserSetImeInfoEx @ 0x1C00B6E60 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00B7860 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00B7A98 (DesktopFromDesktopWindow.c)
 *     NtUserOpenInputDesktop @ 0x1C00B7B00 (NtUserOpenInputDesktop.c)
 *     NtUserCloseWindowStation @ 0x1C00B7C60 (NtUserCloseWindowStation.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00B7D00 (NtUserActivateKeyboardLayout.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00B7D90 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetImeInfoEx @ 0x1C00B7EC0 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C00B81A0 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return *(_QWORD *)(CurrentProcessWin32Process + 664);
}
