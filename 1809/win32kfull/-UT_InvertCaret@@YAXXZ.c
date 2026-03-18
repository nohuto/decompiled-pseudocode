/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C
 * Callers:
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C00DD820 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C00DE8D0 (CaretBlinkProc.c)
 * Callees:
 *     GreSaveDC @ 0x1C0056E34 (GreSaveDC.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C010D904 (_ExcludeUpdateRgn.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  HDC DC; // rax
  HDC v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_QWORD *)(v0 + 296);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 296)) )
  {
    DC = (HDC)_GetDC();
    v3 = DC;
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
        *(_DWORD *)(v0 + 316),
        *(_DWORD *)(v0 + 320),
        *(_DWORD *)(v0 + 328),
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
