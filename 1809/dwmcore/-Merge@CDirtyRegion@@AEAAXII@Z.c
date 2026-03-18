/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18005CCA8
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18005CE1C (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180067400 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _DWORD *v9; // r10
  _DWORD *v10; // rdx
  float v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 16LL * a2;
  v5 = 16LL * a3;
  v7 = a3;
  *(_OWORD *)v11 = *(_OWORD *)((char *)this + v4 + 24);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v11, (float *)((char *)this + v5 + 24));
  *(_OWORD *)((char *)this + v4 + 24) = *(_OWORD *)v11;
  CDirtyRegion::CalcDirtyRegionCachedData(v8, v11, (char *)this + v4 + 408);
  *(_DWORD *)((char *)this + v5 + 408) = 0;
  *(_DWORD *)((char *)this + v5 + 412) = 0;
  *((_BYTE *)this + v5 + 420) = 1;
  *((_DWORD *)this + 4 * v7 + 104) = 0;
  v9[9] = 0;
  v9[8] = 0;
  v9[7] = 0;
  v9[6] = 0;
  CDirtyRegion::UpdateAcceleration(this, a2);
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)((char *)this + v4 + 152),
    (float *)((char *)this + v5 + 152));
  v10[3] = 0;
  v10[2] = 0;
  v10[1] = 0;
  *v10 = 0;
  CDirtyRegion::AppendDirtyRegionLists(this, a2, v7);
}
