/*
 * XREFs of _WindowFromDC @ 0x1C00E3ECC
 * Callers:
 *     NtUserWindowFromDC @ 0x1C00E3E70 (NtUserWindowFromDC.c)
 *     _ServerFixupMenuDC @ 0x1C00E6B94 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C0154070 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C0219D60 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C00E3F24 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

struct tagWND *__fastcall WindowFromDC(HDC a1)
{
  struct tagWND *v2; // rbx

  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
