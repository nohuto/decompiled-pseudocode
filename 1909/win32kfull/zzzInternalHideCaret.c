/*
 * XREFs of zzzInternalHideCaret @ 0x1C002873C
 * Callers:
 *     NtUserHideCaret @ 0x1C0028530 (NtUserHideCaret.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C0039480 (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C023E494 (zzzHideCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA3E4 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0 (-UT_InvertCaret@@YAXXZ.c)
 */

__int64 zzzInternalHideCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 result; // rax
  bool v3; // zf

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 312);
  if ( (v1 & 1) != 0 )
  {
    UT_InvertCaret();
    v1 = *(_DWORD *)(v0 + 312);
  }
  ++*(_DWORD *)(v0 + 316);
  result = v1 & 0xFFFFFFFE;
  v3 = *(_DWORD *)(v0 + 316) == 1;
  *(_DWORD *)(v0 + 312) = result;
  if ( v3 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 304), (struct tagQ *)v0);
    return xxxWindowEvent(0x8003u, gdwDeferWinEvent != 0 ? 2 : 0);
  }
  return result;
}
