/*
 * XREFs of HintSpriteShape @ 0x1C0074624
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01D3E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01D4310 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0076430 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 */

__int64 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, HBITMAP a3, int a4)
{
  unsigned int v8; // eax
  _BYTE v10[144]; // [rsp+40h] [rbp-98h] BYREF

  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v10);
  v8 = IsWindowDesktopComposed(a2);
  return GreHintSpriteShape(a1, *(HWND *)a2, a3, a4, v8, 1);
}
