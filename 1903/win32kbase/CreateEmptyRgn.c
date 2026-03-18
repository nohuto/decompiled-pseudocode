/*
 * XREFs of CreateEmptyRgn @ 0x1C002CD70
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
