/*
 * XREFs of ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1800EB74C
 * Callers:
 *     ?GetContentBounds@CRedirectVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB6E0 (-GetContentBounds@CRedirectVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

void __fastcall CRedirectedVisualContent::ComputeBounds(CRedirectedVisualContent *this)
{
  __int64 v2; // rax
  __int64 v3; // xmm1_8

  if ( (int)CVisualTree::PreCompute(*((_QWORD *)this + 8), 0LL) < 0 )
  {
    *(_OWORD *)((char *)this + 72) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v3 = qword_18033BCA0;
  }
  else
  {
    v2 = *((_QWORD *)this + 8);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)(v2 + 36);
    v3 = *(_QWORD *)(v2 + 52);
  }
  *((_QWORD *)this + 11) = v3;
}
