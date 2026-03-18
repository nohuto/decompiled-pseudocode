/*
 * XREFs of _GetProcessWindowStation @ 0x1C007D1B0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     NtUserSetImeInfoEx @ 0x1C007B880 (NtUserSetImeInfoEx.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C007CA10 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     DesktopFromDesktopWindow @ 0x1C007CB88 (DesktopFromDesktopWindow.c)
 *     NtUserOpenInputDesktop @ 0x1C007CBF0 (NtUserOpenInputDesktop.c)
 *     _CloseWindowStation @ 0x1C007CE1C (_CloseWindowStation.c)
 *     NtUserGetImeInfoEx @ 0x1C007CE70 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C007D160 (NtUserGetProcessWindowStation.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0132E60 (xxxApplyGlobalInputSettings.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
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
