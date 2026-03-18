/*
 * XREFs of ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800157AC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(CWindowBackgroundTreatment *this)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[24]; // [rsp+38h] [rbp-30h] BYREF

  CMILMatrix::Transform3DBoundsHelper<0>((char *)this + 288, (char *)this + 168, v3);
  CMILMatrix::Transform3DBoundsHelper<0>((char *)this + 216, (char *)this + 144, v4);
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v4, v3);
}
