/*
 * XREFs of xxxValidateRect @ 0x1C00C71EC
 * Callers:
 *     NtUserValidateRect @ 0x1C00C70D0 (NtUserValidateRect.c)
 *     xxxMoveWindow @ 0x1C010B090 (xxxMoveWindow.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1)
{
  if ( !a1 )
    a1 = 0LL;
  return xxxRedrawWindow(a1);
}
