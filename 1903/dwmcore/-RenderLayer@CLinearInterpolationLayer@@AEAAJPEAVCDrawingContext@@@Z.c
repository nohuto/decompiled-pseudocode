/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z @ 0x18017EBC8
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017EDA0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180050734 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B0568 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800B0568.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  signed int v6; // eax
  __int64 v7; // rcx
  struct CRenderTargetImageSource *v8; // rsi
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
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
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 216LL))(
      *((_QWORD *)this + 1),
      *((_QWORD *)a2 + 48),
      ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v6 = CRenderTargetImageSource::Create(*((struct IRenderTarget **)this + 1), 1, 0LL, &v15);
  v8 = v15;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x8Au, 0LL);
  }
  else
  {
    CMILMatrix::InferAffineMatrix((__int64)v16, (float *)&v18, (float *)this + 28);
    v10 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v16, 0, 0);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x91u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x9Au, 0LL);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
