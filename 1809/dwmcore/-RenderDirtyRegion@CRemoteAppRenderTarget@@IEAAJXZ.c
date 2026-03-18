/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180160094
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015FCF0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015FF60 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180031CE0 (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015F8DC (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180167180 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(CRemoteAppRenderTarget *this)
{
  CDrawingContext *DrawingContext; // r15
  struct COcclusionContext *v3; // rdx
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  int v7; // eax
  __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // ebx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  __int64 v16; // r14
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+28h] [rbp-49h]
  struct D2D_RECT_F v22; // [rsp+68h] [rbp-9h] BYREF
  __int128 v23; // [rsp+78h] [rbp+7h] BYREF
  float v24[4]; // [rsp+88h] [rbp+17h] BYREF

  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
  v3 = (struct COcclusionContext *)*((_QWORD *)this + 25);
  v4 = (float)*((int *)this + 73);
  *(float *)&v23 = (float)*((int *)this + 72);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 74));
  *((float *)&v23 + 1) = v4;
  v6 = (float)*((int *)this + 75);
  DWORD2(v23) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v23 + 3) = v6;
  CDrawingContext::SetOcclusionContext(DrawingContext, v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 128LL))(
    *((_QWORD *)this + 22),
    *((unsigned int *)this + 25));
  v7 = CDrawingContext::BeginFrame(
         DrawingContext,
         *((struct IRenderTarget **)this + 22),
         (_OWORD *)this + 9,
         1,
         (__int64)this + 208,
         0LL,
         0,
         0LL);
  v9 = 0;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1B0u);
    return v10;
  }
  v11 = *((_QWORD *)this + 24);
  if ( !*(_BYTE *)(v11 + 2883) )
  {
    v14 = *(_DWORD *)(v11 + 1276);
    v15 = 0;
    if ( v14 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        v17 = *((_QWORD *)this + 25);
        v22 = *(struct D2D_RECT_F *)(v16 + v11 + 1116);
        if ( v17 )
          v22 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                        *((_QWORD *)this + 24),
                                        v24,
                                        v17,
                                        *((_QWORD *)this + 15),
                                        v9,
                                        v15,
                                        (float *)&v23);
        if ( !IsEmpty(&v22) )
        {
          v18 = CDrawingContext::DrawVisualTree(
                  DrawingContext,
                  *((_QWORD *)this + 15),
                  (__int128 *)&v22,
                  0LL,
                  0x7FFFFFFF,
                  *((_BYTE *)this + 160),
                  v9,
                  1,
                  v9,
                  v9,
                  v9);
          v10 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1D5u);
            goto LABEL_19;
          }
          v12 = CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, &v22.left);
          v9 = 0;
          v10 = v12;
          if ( v12 < 0 )
          {
            v21 = 471;
            goto LABEL_6;
          }
        }
        ++v15;
        v16 += 16LL;
        if ( v15 >= v14 )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
  v12 = CDrawingContext::DrawVisualTree(
          DrawingContext,
          *((_QWORD *)this + 15),
          &v23,
          0LL,
          0x7FFFFFFF,
          *((_BYTE *)this + 160),
          0,
          1,
          0,
          0,
          0);
  v10 = v12;
  if ( v12 < 0 )
  {
    v21 = 441;
    goto LABEL_6;
  }
  v12 = CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, 0LL);
  v9 = 0;
  v10 = v12;
  if ( v12 >= 0 )
  {
LABEL_17:
    if ( g_LockAndReadOffscreenTarget != v9 )
      CDrawingContext::ReadTexture(DrawingContext);
    goto LABEL_19;
  }
  v21 = 442;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v21);
LABEL_19:
  CDrawingContext::EndFrame(DrawingContext);
  return v10;
}
