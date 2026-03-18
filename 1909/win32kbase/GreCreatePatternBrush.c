/*
 * XREFs of GreCreatePatternBrush @ 0x1C008CC80
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HBITMAP a1)
{
  return GreCreatePatternBrushInternal(a1, 0);
}
