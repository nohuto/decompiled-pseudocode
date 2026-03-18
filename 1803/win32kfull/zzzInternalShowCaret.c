/*
 * XREFs of zzzInternalShowCaret @ 0x1C003A940
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     NtUserShowCaret @ 0x1C003A770 (NtUserShowCaret.c)
 *     xxxEndPaint @ 0x1C00E2444 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x1C01FE0D4 (zzzShowCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C006470C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_DWORD *)(v0 + 308);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 308) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 304) ^ ((unsigned __int8)*(_DWORD *)(v0 + 304) ^ (unsigned __int8)(*(_DWORD *)(v0 + 304) >> 1)) & 1;
      *(_DWORD *)(v0 + 304) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
      xxxWindowEvent(0x8002u, *(_QWORD *)(v0 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 304);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 304) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
