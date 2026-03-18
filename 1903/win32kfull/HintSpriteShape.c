/*
 * XREFs of HintSpriteShape @ 0x1C0029310
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8FFC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002AF98 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, HBITMAP a3, int a4)
{
  unsigned int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-98h] BYREF

  memset(v10, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *(HWND *)a2, a3, a4, v8, 1);
}
