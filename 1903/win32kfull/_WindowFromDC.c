/*
 * XREFs of _WindowFromDC @ 0x1C010992C
 * Callers:
 *     NtUserWindowFromDC @ 0x1C01098D0 (NtUserWindowFromDC.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C01532B0 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINPAINTCLIPBRD @ 0x1C021A2A0 (SfnINPAINTCLIPBRD.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C0109984 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

struct tagWND *__fastcall WindowFromDC(HDC a1)
{
  struct tagWND *v2; // rbx

  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = PwndFromHDC(a1);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
