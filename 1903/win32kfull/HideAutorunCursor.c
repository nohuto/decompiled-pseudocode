/*
 * XREFs of HideAutorunCursor @ 0x1C01CC5F0
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
