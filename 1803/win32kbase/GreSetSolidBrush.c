/*
 * XREFs of GreSetSolidBrush @ 0x1C00BFC80
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005CAF4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

__int64 __fastcall GreSetSolidBrush(HBRUSH a1, int a2)
{
  return GreSetSolidBrushInternal(a1, a2, 0, 1);
}
