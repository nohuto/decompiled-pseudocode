/*
 * XREFs of CreateEmptyRgn @ 0x1C001CD60
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 */

__int64 CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
