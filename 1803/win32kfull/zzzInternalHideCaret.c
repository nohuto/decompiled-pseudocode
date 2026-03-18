/*
 * XREFs of zzzInternalHideCaret @ 0x1C003AA10
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C0037D64 (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x1C003A830 (NtUserHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0063D14 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C01FE0AC (zzzHideCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00648A4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  bool v2; // zf

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 304);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 304);
  }
  v2 = ++*(_DWORD *)(v0 + 308) == 1;
  *(_DWORD *)(v0 + 304) = v1 & 0xFFFFFFFE;
  if ( v2 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
    xxxWindowEvent(0x8003u, *(_QWORD *)(v0 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}
