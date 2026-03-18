/*
 * XREFs of xxxDrawDragRect @ 0x1C0200964
 * Callers:
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     xxxDrawDragRectEx @ 0x1C0200980 (xxxDrawDragRectEx.c)
 */

__int64 __fastcall xxxDrawDragRect(struct _MOVESIZEDATA *a1)
{
  return xxxDrawDragRectEx(a1);
}
