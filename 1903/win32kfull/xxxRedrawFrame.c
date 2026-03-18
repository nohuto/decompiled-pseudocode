/*
 * XREFs of xxxRedrawFrame @ 0x1C015DB30
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxRedrawFrame(struct tagWND *a1)
{
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
