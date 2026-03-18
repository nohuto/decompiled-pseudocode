/*
 * XREFs of ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A3DC8
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x1801A4980 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CalcOcclusion(CRemoteAppRenderTarget *this)
{
  float v2; // xmm1_4
  __m128i v3; // xmm0
  float v4; // xmm1_4
  CDrawingContext *DrawingContext; // rax
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CDrawingContext *v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  float v13[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 24) + 2883LL) )
  {
    v2 = (float)*((int *)this + 73);
    v13[0] = (float)*((int *)this + 72);
    v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
    v13[1] = v2;
    v4 = (float)*((int *)this + 75);
    LODWORD(v13[2]) = _mm_cvtepi32_ps(v3).m128_u32[0];
    v13[3] = v4;
    DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v6 = CDrawingContext::CalculateOcclusion(
           DrawingContext,
           *((struct CVisualTree **)this + 15),
           1LL,
           (__int64)v13,
           0,
           0,
           (_QWORD *)this + 25);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x18Eu, 0LL);
  }
  else
  {
    v9 = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v10 = CDrawingContext::CalculateOcclusion(
            v9,
            *((struct CVisualTree **)this + 15),
            *(unsigned int *)(*((_QWORD *)this + 24) + 1276LL),
            *((_QWORD *)this + 24) + (*(_BYTE *)(*((_QWORD *)this + 24) + 2883LL) != 0 ? 2860LL : 1116LL),
            0,
            0,
            (_QWORD *)this + 25);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x197u, 0LL);
  }
  return v8;
}
