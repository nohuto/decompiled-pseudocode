/*
 * XREFs of GreDeleteSprite @ 0x1C0089B04
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0088F00 (vCleanupUMWindowlessSprite.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C0139D6C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 *     DeleteFadeSprite @ 0x1C01E9220 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026AE58 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B48C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     bSetDevPreviewRect @ 0x1C028286C (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0089B78 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDeleteSprite(HDEV a1, HWND a2, void *a3, int a4)
{
  unsigned int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v8 = GreDeleteSpriteInternal(a1, a2, a3, a4);
  SEMOBJ::vUnlock((SEMOBJ *)v10);
  return v8;
}
