/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C012B6F0
 * Callers:
 *     zzzInternalShowCaret @ 0x1C002868C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C00E9AA0 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00E9CE0 (zzzSetCaretPos.c)
 * Callees:
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     GreSaveDC @ 0x1C00AD5CC (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C012E048 (_ExcludeUpdateRgn.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  HDC DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_QWORD *)(v0 + 304);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 304)) )
  {
    DC = (HDC)_GetDC();
    v3 = DC;
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
      v6 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 344));
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
      GreSelectBitmap(ghdcMem, v6);
    }
    else
    {
      v7[0] = *(_DWORD *)(v0 + 324);
      v7[1] = *(_DWORD *)(v0 + 328);
      v7[2] = *(_DWORD *)(v0 + 336);
      v7[3] = *(_DWORD *)(v0 + 332);
      if ( v5 == 1 )
        v8 = *(_QWORD *)(gpsi + 4944LL);
      else
        v8 = ghbrWhite;
      GrePolyPatBlt(v3, 0x5A0049u, (struct _POLYPATBLT *)v7, 1u);
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
