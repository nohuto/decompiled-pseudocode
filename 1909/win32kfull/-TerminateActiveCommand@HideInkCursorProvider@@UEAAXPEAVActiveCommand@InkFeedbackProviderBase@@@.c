/*
 * XREFs of ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C0250080
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C024F340 (-DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z.c)
 */

void __fastcall HideInkCursorProvider::TerminateActiveCommand(
        HideInkCursorProvider *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  if ( *((_DWORD *)a2 + 4) == 3 )
    HideInkCursorProvider::DoHideInkCursorStop(this, a2);
}
