/*
 * XREFs of ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0137190
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0021208 (IsShellProcess.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0137220 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall _GetWindowTrackInfoAsync(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = *((_QWORD *)a1 + 2);
  if ( IAMThreadAccessGranted(gptiCurrent)
    && (unsigned int)IsShellProcess(*(_QWORD *)(v4 + 416))
    && v4 != v2
    && IsWindowSubjectToShellWindowBehavior(a1, 255LL, v4)
    && (*(_DWORD *)(v2 + 1224) & 0x20) == 0
    && !(unsigned int)IsThreadHung((_QWORD *)v2, 0) )
  {
    return BeginGetWidnowTrackInfoAsync(a1);
  }
  UserSetLastError(5LL, v3, v4, v5);
  return 0LL;
}
