/*
 * XREFs of ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DD4A0
 * Callers:
 *     ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C024F23C (-DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z.c)
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C024F340 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 * Callees:
 *     ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DD9F0 (-SwitchMouseCursors@@YAXK_N@Z.c)
 */

void __fastcall Feedback::ForceHidePenCursor(Feedback *this)
{
  if ( (_DWORD)this != Feedback::gfForceHidePenCursor )
  {
    Feedback::gfForceHidePenCursor = (int)this;
    if ( Feedback::gfUsingPenCursors )
      SwitchMouseCursors(3u, 0);
  }
}
