/*
 * XREFs of zzzInternalShowCaret @ 0x1C002868C
 * Callers:
 *     NtUserShowCaret @ 0x1C00284B0 (NtUserShowCaret.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     xxxEndPaint @ 0x1C00E01C0 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x1C023E4BC (zzzShowCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00EA244 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0 (-UT_InvertCaret@@YAXXZ.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 316);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 316) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 312) ^ ((unsigned __int8)*(_DWORD *)(v0 + 312) ^ (unsigned __int8)(*(_DWORD *)(v0 + 312) >> 1)) & 1;
      *(_DWORD *)(v0 + 312) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 304), (struct tagQ *)v0);
      xxxWindowEvent(0x8002u, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 312);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 312) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
