/*
 * XREFs of _GetProcessWindowStation @ 0x1C00EEB20
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00CE784 (xxxApplyGlobalInputSettings.c)
 *     NtUserSetImeInfoEx @ 0x1C00ED720 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00EE378 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C00EE500 (DesktopFromDesktopWindow.c)
 *     NtUserOpenInputDesktop @ 0x1C00EE570 (NtUserOpenInputDesktop.c)
 *     _CloseWindowStation @ 0x1C00EE79C (_CloseWindowStation.c)
 *     NtUserGetImeInfoEx @ 0x1C00EE7F0 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C00EEAD0 (NtUserGetProcessWindowStation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 680);
  return *(_QWORD *)(CurrentProcessWin32Process + 672);
}
