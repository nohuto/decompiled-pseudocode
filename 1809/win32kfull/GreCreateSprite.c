/*
 * XREFs of GreCreateSprite @ 0x1C007C238
 * Callers:
 *     CreateSprite @ 0x1C007C114 (CreateSprite.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     bSetDevPreviewRect @ 0x1C0269D68 (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 */

void *__fastcall GreCreateSprite(
        HDEV a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  void *SpriteInternal; // rbx
  __int64 v17; // [rsp+60h] [rbp-18h] BYREF

  v17 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SpriteInternal = GreCreateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return SpriteInternal;
}
