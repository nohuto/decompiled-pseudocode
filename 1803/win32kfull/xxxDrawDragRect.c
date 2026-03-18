/*
 * XREFs of xxxDrawDragRect @ 0x1C01C6018
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C5264 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 */

__int64 __fastcall xxxDrawDragRect(struct _MOVESIZEDATA *a1)
{
  return xxxDrawDragRectEx(a1);
}
