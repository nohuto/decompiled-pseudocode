/*
 * XREFs of CreateEmptyRgn @ 0x1C0016090
 * Callers:
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 */

__int64 CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
