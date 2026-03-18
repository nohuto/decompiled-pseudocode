/*
 * XREFs of ?IsOfType@CMultiPrimitiveDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180066210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMultiPrimitiveDrawListBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 3) & 0xFFFFFFFB) == 0;
}
