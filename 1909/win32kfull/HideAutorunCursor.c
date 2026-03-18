/*
 * XREFs of HideAutorunCursor @ 0x1C01CC460
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
