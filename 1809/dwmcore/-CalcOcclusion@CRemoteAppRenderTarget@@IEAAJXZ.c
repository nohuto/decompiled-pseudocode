/*
 * XREFs of ?CalcOcclusion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F428
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015FF60 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CalcOcclusion(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  CDrawingContext *DrawingContext; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  CDrawingContext *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  float v16[4]; // [rsp+40h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 24);
  v2 = (_QWORD *)((char *)this + 200);
  if ( *(_BYTE *)(v1 + 2883) )
  {
    v4 = (float)*((int *)this + 73);
    v16[0] = (float)*((int *)this + 72);
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
    v16[1] = v4;
    v6 = (float)*((int *)this + 75);
    LODWORD(v16[2]) = _mm_cvtepi32_ps(v5).m128_u32[0];
    v16[3] = v6;
    DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v8 = CDrawingContext::CalculateOcclusion(
           DrawingContext,
           *((struct CVisualTree **)this + 15),
           1LL,
           (__int64)v16,
           0,
           0,
           v2);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Eu);
  }
  else
  {
    v11 = *(_DWORD *)(v1 + 1276);
    v12 = CRenderTarget::GetDrawingContext((struct CComposition **)this);
    v13 = CDrawingContext::CalculateOcclusion(v12, *((struct CVisualTree **)this + 15), v11, v1 + 1116, 0, 0, v2);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x197u);
  }
  return v10;
}
