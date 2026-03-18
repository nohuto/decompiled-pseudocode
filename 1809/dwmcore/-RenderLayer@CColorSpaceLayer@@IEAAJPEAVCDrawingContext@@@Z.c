/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B32C
 * Callers:
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B420 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  struct IRenderTarget *v4; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct CRenderTargetImageSource *v12; // [rsp+40h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-20h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v4 = (struct IRenderTarget *)*((_QWORD *)this + 1);
  *(_QWORD *)&v13 = 0LL;
  v12 = 0LL;
  *((float *)&v13 + 2) = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  *((float *)&v13 + 3) = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  v6 = CRenderTargetImageSource::Create(v4, 1, &v12);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x62u);
  }
  else
  {
    v9 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
           (__int64)a2,
           (__int64)v12,
           &v13,
           &v13,
           *((_DWORD *)a2 + 1572),
           *((_DWORD *)a2 + 64),
           0);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x6Au);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v12);
  return v8;
}
