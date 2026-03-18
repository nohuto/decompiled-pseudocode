/*
 * XREFs of zzzInternalHideCaret @ 0x1C008B4BC
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     NtUserHideCaret @ 0x1C008B2B0 (NtUserHideCaret.c)
 *     xxxBeginPaint @ 0x1C00986B0 (xxxBeginPaint.c)
 *     zzzHideCaret @ 0x1C023EAB4 (zzzHideCaret.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6A0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C008D1A0 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
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
