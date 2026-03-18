/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88
 * Callers:
 *     zzzInternalShowCaret @ 0x1C003A940 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0063880 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C0063DD0 (CaretBlinkProc.c)
 * Callees:
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     _ExcludeUpdateRgn @ 0x1C0064044 (_ExcludeUpdateRgn.c)
 *     GreSaveDC @ 0x1C0078AB8 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 DC; // rax
  HDC v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  v1 = *(_QWORD *)(v0 + 296);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 296)) )
  {
    DC = _GetDC();
    v3 = (HDC)DC;
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 136LL);
    if ( v4 )
    {
      GreSaveDC(DC);
      if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 21LL) & 1) != 0 )
        ExcludeUpdateRgn(v3, (struct tagWND *)v1);
    }
    v5 = *(_QWORD *)(v0 + 336);
    if ( v5 > 1 )
    {
      v6 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 336));
      NtGdiBitBltInternal(
        v3,
        *(unsigned int *)(v0 + 316),
        *(unsigned int *)(v0 + 320),
        *(unsigned int *)(v0 + 328),
        *(_DWORD *)(v0 + 324),
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
      v7[0] = *(_DWORD *)(v0 + 316);
      v7[1] = *(_DWORD *)(v0 + 320);
      v7[2] = *(_DWORD *)(v0 + 328);
      v7[3] = *(_DWORD *)(v0 + 324);
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
    *(_DWORD *)(v0 + 304) &= ~1u;
  }
}
