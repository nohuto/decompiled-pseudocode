/*
 * XREFs of xxxValidateRgn @ 0x1C0062E20
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRgn(struct tagWND *a1, __int64 a2)
{
  return xxxRedrawWindow(a1, 0LL, a2, 8);
}
