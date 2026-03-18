/*
 * XREFs of HideAutorunCursor @ 0x1C0197750
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 */

__int64 HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  return zzzUpdateCursorImage();
}
