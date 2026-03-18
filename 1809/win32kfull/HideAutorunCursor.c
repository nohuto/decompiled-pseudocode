/*
 * XREFs of HideAutorunCursor @ 0x1C01B8790
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
