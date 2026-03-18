/*
 * XREFs of ?IsEmptyDrawing@CShapeTree@@UEBA_NXZ @ 0x1801DAD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CShapeTree::IsEmptyDrawing(CShapeTree *this)
{
  return *((_BYTE *)this + 81) == 0;
}
