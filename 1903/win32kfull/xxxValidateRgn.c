/*
 * XREFs of xxxValidateRgn @ 0x1C012F210
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRgn(struct tagWND *a1, __int64 a2)
{
  return xxxRedrawWindow(a1, 0LL, a2, 8LL);
}
