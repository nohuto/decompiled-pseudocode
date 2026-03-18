/*
 * XREFs of ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18003BBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CColorBrush::IsReadyToDraw(CColorBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 21)) & _xmm) < 0.0000011920929;
  return 1;
}
