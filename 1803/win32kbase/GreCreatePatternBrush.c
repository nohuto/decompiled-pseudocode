/*
 * XREFs of GreCreatePatternBrush @ 0x1C00DAE60
 * Callers:
 *     <none>
 * Callees:
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 */

__int64 __fastcall GreCreatePatternBrush(HBITMAP a1)
{
  return GreCreatePatternBrushInternal(a1, 0, 0);
}
