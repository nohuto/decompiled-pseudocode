/*
 * XREFs of GreCreateSolidBrush @ 0x1C0073A90
 * Callers:
 *     <none>
 * Callees:
 *     hCreateSolidBrushInternal @ 0x1C00436E0 (hCreateSolidBrushInternal.c)
 */

HBRUSH __fastcall GreCreateSolidBrush(unsigned int a1)
{
  return hCreateSolidBrushInternal(a1, 0, 0LL, 0);
}
