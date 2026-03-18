/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0123420 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *((_QWORD *)a1 + 2);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 424))
    && v4 != v2
    && IsWindowSubjectToShellWindowBehavior(a1, 255LL)
    && (*(_DWORD *)(v2 + 1208) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return BeginGetWidnowTrackInfoAsync(a1);
  }
  UserSetLastError(5LL, v3, v4, v5);
  return 0LL;
}
