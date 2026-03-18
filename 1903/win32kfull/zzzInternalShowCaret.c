/*
 * XREFs of zzzInternalShowCaret @ 0x1C008B40C
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     NtUserShowCaret @ 0x1C008B230 (NtUserShowCaret.c)
 *     xxxEndPaint @ 0x1C01040B0 (xxxEndPaint.c)
 *     zzzShowCaret @ 0x1C023EADC (zzzShowCaret.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C008C6E4 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C008D1A0 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
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
