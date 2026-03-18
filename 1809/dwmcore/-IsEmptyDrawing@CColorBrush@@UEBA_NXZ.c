/*
 * XREFs of ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x18003A830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrush::IsEmptyDrawing(CColorBrush *this)
{
  float v1; // xmm1_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 21)) & _xmm);
  return v1 < 0.0000011920929;
}
