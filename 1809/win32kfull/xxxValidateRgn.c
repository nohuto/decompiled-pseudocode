/*
 * XREFs of xxxValidateRgn @ 0x1C00C70B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRgn(struct tagWND *a1)
{
  return xxxRedrawWindow(a1);
}
