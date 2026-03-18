/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8FFC
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00EDA08 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = SetRedirectionBitmap(a1, a2, 0);
  if ( v4 )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 1) != 0 )
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, a2, 1);
    ChangeRedirectionParentInDCEs(a1, 1LL, v5, v6);
  }
  return v4;
}
