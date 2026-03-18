/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CFFC
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017D1C0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801E29CC (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  int v6; // eax
  __int64 v7; // rcx
  struct CRenderTargetImageSource *v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct CRenderTargetImageSource *v15; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v16[4]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v17; // [rsp+90h] [rbp+17h]
  __int128 v18; // [rsp+A0h] [rbp+27h] BYREF

  v15 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  v16[0] = _xmm;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v16[1] = _xmm;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v17 = 32085;
  v16[2] = _xmm;
  v16[3] = _xmm;
  *((float *)&v18 + 2) = _mm_cvtepi32_ps(v4).m128_f32[0] + 0.0;
  *((float *)&v18 + 3) = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, &v15);
  v8 = v15;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA1u);
  }
  else
  {
    CMILMatrix::Set2DScaleAndOffset(
      (CMILMatrix *)v16,
      1.0 / *((float *)this + 28),
      1.0 / *((float *)this + 29),
      *((float *)this + 30),
      *((float *)this + 31));
    v10 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v16, 1, 0);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xADu);
    }
    else
    {
      v12 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
              (__int64)a2,
              (__int64)v8,
              &v18,
              &v18,
              *((_DWORD *)a2 + 1572),
              *((_DWORD *)a2 + 64),
              0);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB6u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
