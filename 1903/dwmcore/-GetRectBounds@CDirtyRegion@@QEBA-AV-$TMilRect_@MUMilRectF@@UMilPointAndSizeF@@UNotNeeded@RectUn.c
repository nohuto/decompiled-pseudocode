/*
 * XREFs of ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800BFEB4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18006E5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

float *__fastcall CDirtyRegion::GetRectBounds(__int64 a1, float *a2)
{
  unsigned int v2; // r9d
  float *v3; // r10
  __int64 v4; // r11
  float *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r9
  int v9; // r9d

  v2 = 0;
  v3 = a2;
  *((_QWORD *)a2 + 1) = 0LL;
  v4 = a1;
  *(_QWORD *)a2 = 0LL;
  if ( *(_BYTE *)(a1 + 2886) )
  {
    if ( *(_DWORD *)(a1 + 1276) )
    {
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, (float *)(16LL * v2 + v4 + 1116));
        v2 = v9 + 1;
      }
      while ( v2 < *(_DWORD *)(v4 + 1276) );
    }
  }
  else
  {
    v5 = (float *)(a1 + 24);
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v5);
      v5 = (float *)(v6 + 16);
    }
    while ( v7 != 1 );
  }
  return v3;
}
