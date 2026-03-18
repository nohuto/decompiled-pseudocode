/*
 * XREFs of UpdateSprite @ 0x1C00311F0
 * Callers:
 *     OffsetWindow @ 0x1C002C110 (OffsetWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0032170 (_SetLayeredWindowAttributes.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     UpdateSpriteArea @ 0x1C00CB6CC (UpdateSpriteArea.c)
 *     xxxCompositedPaint @ 0x1C023B074 (xxxCompositedPaint.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0031328 (GreUpdateSprite.c)
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0031408 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  int v14; // eax
  _BYTE v17[144]; // [rsp+90h] [rbp-D8h] BYREF

  memset(v17, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v17);
  v14 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreUpdateSprite(
                         a1,
                         *(HWND *)a2,
                         0LL,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         (struct tagMINIWINDOWINFO *)v17,
                         v14,
                         0) == 0
       ? 0x803F0001
       : 0;
}
