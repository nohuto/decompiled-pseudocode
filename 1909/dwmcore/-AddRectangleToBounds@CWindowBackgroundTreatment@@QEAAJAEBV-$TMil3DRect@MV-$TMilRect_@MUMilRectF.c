/*
 * XREFs of ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001405C
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AF5A0 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::AddRectangleToBounds(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( (float)(*(float *)(a2 + 8) - *(float *)a2) >= 0.99999988
    && (float)(*(float *)(a2 + 12) - *(float *)(a2 + 4)) >= 0.99999988 )
  {
    v3 = a1 + 144;
    if ( *(_BYTE *)(a1 + 356) )
    {
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3);
    }
    else
    {
      *(_OWORD *)v3 = *(_OWORD *)a2;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
      *(_BYTE *)(a1 + 356) = 1;
    }
  }
  return 0LL;
}
