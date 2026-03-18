/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C008D1A0
 * Callers:
 *     zzzSetCaretPos @ 0x1C00889E0 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C008B40C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C012D520 (CaretBlinkProc.c)
 * Callees:
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C008DD78 (_ExcludeUpdateRgn.c)
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  unsigned __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_QWORD *)(v0 + 304);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 304)) )
  {
    DC = _GetDC();
    v3 = (HDC)DC;
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 40) + 136LL) )
    {
      v4 = 1;
      GreSaveDC(DC);
      if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 21LL) & 1) != 0 )
        ExcludeUpdateRgn(v3, (struct tagWND *)v1);
    }
    else
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)(v0 + 344);
    if ( v5 > 1 )
    {
      GreSelectBitmap(ghdcMem);
      NtGdiBitBltInternal(
        v3,
        *(_DWORD *)(v0 + 324),
        *(_DWORD *)(v0 + 328),
        *(_DWORD *)(v0 + 336),
        *(_DWORD *)(v0 + 332),
        ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(ghdcMem);
    }
    else
    {
      v6[0] = *(_DWORD *)(v0 + 324);
      v6[1] = *(_DWORD *)(v0 + 328);
      v6[2] = *(_DWORD *)(v0 + 336);
      v6[3] = *(_DWORD *)(v0 + 332);
      if ( v5 == 1 )
        v7 = *(_QWORD *)(gpsi + 4944LL);
      else
        v7 = ghbrWhite;
      GrePolyPatBlt(v3, 0x5A0049u, (struct _POLYPATBLT *)v6, 1u);
    }
    if ( v4 )
      GreRestoreDC(v3, 0xFFFFFFFFLL);
    _ReleaseDC(v3);
  }
  else
  {
    *(_DWORD *)(v0 + 312) &= ~1u;
  }
}
