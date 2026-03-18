/*
 * XREFs of GreCreatePatternBrush @ 0x1C00A9B10
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C0052520 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HBITMAP a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
