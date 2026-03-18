/*
 * XREFs of GreDeleteSprite @ 0x1C00C4078
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C000A474 (GreTransferDwmStateToSpriteState.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0078020 (vCleanupUMWindowlessSprite.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00BCC38 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     DeleteFadeSprite @ 0x1C01B15F0 (DeleteFadeSprite.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B23C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     bSetDevPreviewRect @ 0x1C0256D2C (bSetDevPreviewRect.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00C40E8 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
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
