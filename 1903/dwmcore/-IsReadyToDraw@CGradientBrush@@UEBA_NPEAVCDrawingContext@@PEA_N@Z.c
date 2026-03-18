/*
 * XREFs of ?IsReadyToDraw@CGradientBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18001F2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGradientBrush::IsReadyToDraw(CGradientBrush *this, struct CDrawingContext *a2, bool *a3)
{
  bool result; // al

  result = 1;
  *a3 = (unsigned __int64)((__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3) <= 1;
  return result;
}
