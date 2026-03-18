/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18004A8D0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18004A458 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A2FEC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x18016A534 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x18016B948 (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // si
  __int64 v3; // r14
  __int64 v4; // rbp
  int v5; // r8d
  unsigned int v6; // r15d
  unsigned __int64 v8; // rbx
  FastRegion::Internal::CRgnData *v9; // rcx
  const struct FastRegion::Internal::CRgnData *v10; // rdx
  bool IsEqualTo; // al

  v1 = 0;
  if ( *((_BYTE *)this + 13429) )
  {
    v1 = 1;
    *((_BYTE *)this + 13429) = 0;
  }
  v3 = *((_QWORD *)this + 539);
  v4 = *((_QWORD *)this + 24);
  if ( (*((_QWORD *)this + 25) - v4) >> 8 != (*((_QWORD *)this + 540) - v3) >> 8
    || *((_BYTE *)this + 13425) != *((_BYTE *)this + 13426)
    || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 12816, (char *)this + 12952) )
  {
    return 1;
  }
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = (unsigned __int64)v6 << 8;
      COverlayContext::ComparePlaneAttributes(
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v8 + v4 + 40),
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v8 + v3 + 40),
        (bool *)(v8 + v4 + 224),
        (bool *)(v8 + v4 + 225));
      v4 = *((_QWORD *)this + 24);
      if ( *(_BYTE *)(v8 + v4 + 224) )
        break;
      v3 = *((_QWORD *)this + 539);
      if ( *(_QWORD *)(v8 + v4 + 16) != *(_QWORD *)(v8 + v3 + 16)
        || *(_QWORD *)(v8 + v4 + 32) != *(_QWORD *)(v8 + v3 + 32)
        || *(_BYTE *)(v8 + v4 + 185) != *(_BYTE *)(v8 + v3 + 185)
        || *(_BYTE *)(v8 + v4 + 186) != *(_BYTE *)(v8 + v3 + 186)
        || *(_BYTE *)(v8 + v4 + 187) != *(_BYTE *)(v8 + v3 + 187)
        || *(_BYTE *)(v8 + v4 + 189) != *(_BYTE *)(v8 + v3 + 189)
        || (unsigned __int8)operator!=(v8 + v4 + 152, v8 + v3 + 152) )
      {
        break;
      }
      v9 = **(FastRegion::Internal::CRgnData ***)(v8 + v4 + 168);
      v10 = **(const struct FastRegion::Internal::CRgnData ***)(v8 + v3 + 168);
      if ( *(_DWORD *)v9 )
      {
        if ( !*(_DWORD *)v10 )
          return 1;
        IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(v9, v10);
      }
      else
      {
        IsEqualTo = *(_DWORD *)v10 == 0;
      }
      if ( !IsEqualTo )
        break;
      if ( ++v6 >= (unsigned int)((*((_QWORD *)this + 25) - v4) >> 8) )
        return v1;
    }
    return 1;
  }
  return v1;
}
