/*
 * XREFs of ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x1803938F4
 * Callers:
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180393A10 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 * Callees:
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x180390778 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall CMultitaskingViewButtonElement::_GetStateBasedValue<GlyphButtonStateMetrics>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax

  LOBYTE(v7) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( !v7 )
    return a2;
  if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
    return a4;
  return a3;
}
