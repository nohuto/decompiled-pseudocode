/*
 * XREFs of GreCreateSolidBrush @ 0x1C00A8580
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C0053500 (hCreateSolidBrushInternal.c)
 */

HBRUSH __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
