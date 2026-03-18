/*
 * XREFs of xxxHotTrack @ 0x1C0131988
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B0BB8 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxHotTrack(struct tagWND *a1, int a2, int a3)
{
  if ( (_WORD)a2 == 69 )
    return xxxHotTrackMenu(a1, HIWORD(a2), a3);
  else
    return 0LL;
}
