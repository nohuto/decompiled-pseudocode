/*
 * XREFs of ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x18024F150 (-Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18016F6F4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18016FF58 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180176C9C (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024EE70 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CLocalAppRenderTarget::RenderDirtyRegion(CLocalAppRenderTarget *this)
{
  CDrawingContext *DrawingContext; // rax
  int v3; // ecx
  struct COcclusionContext *v4; // rdx
  CDrawingContext *v5; // r15
  float v6; // xmm1_4
  __int64 v7; // r14
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // r12d
  __int64 v18; // r8
  unsigned int v20; // [rsp+28h] [rbp-49h]
  struct D2D_RECT_F v21; // [rsp+68h] [rbp-9h] BYREF
  __int128 v22; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp+17h] BYREF

  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this);
  v3 = *((_DWORD *)this + 22);
  v4 = (struct COcclusionContext *)*((_QWORD *)this + 24);
  *(_QWORD *)&v22 = 0LL;
  v5 = DrawingContext;
  v6 = (float)*((int *)this + 23);
  *((float *)&v22 + 2) = (float)v3;
  *((float *)&v22 + 3) = v6;
  CDrawingContext::SetOcclusionContext(DrawingContext, v4);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 128LL))(
    *((_QWORD *)this + 22),
    *((unsigned int *)this + 25));
  v7 = 0LL;
  v8 = CDrawingContext::BeginFrame(v5, *((struct IRenderTarget **)this + 22), (_OWORD *)this + 9, 1, 0LL, 0LL, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x138u, 0LL);
    return v10;
  }
  v11 = *((_QWORD *)this + 23);
  if ( *(_BYTE *)(v11 + 2883) )
  {
    v12 = CDrawingContext::DrawVisualTree(
            v5,
            *((float **)this + 15),
            &v22,
            0LL,
            0x7FFFFFFF,
            *((_BYTE *)this + 160),
            0,
            1,
            0LL,
            0,
            0);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x141u, 0LL);
      goto LABEL_18;
    }
    v14 = CLocalAppRenderTarget::NotifyRenderedRect((__int64)this, 0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      v20 = 322;
      goto LABEL_6;
    }
    goto LABEL_16;
  }
  v16 = *(_DWORD *)(v11 + 1276);
  v17 = 0;
  if ( !v16 )
  {
LABEL_16:
    if ( g_LockAndReadOffscreenTarget )
      CDrawingContext::ReadTexture(v5);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)this + 24);
    v21 = *(struct D2D_RECT_F *)(v7 + v11 + 1116);
    if ( v18 )
      v21 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                    *((_QWORD *)this + 23),
                                    (__int64)v23,
                                    v18,
                                    *((const struct CVisualTree **)this + 15),
                                    0,
                                    v17,
                                    (__int64)&v22);
    if ( IsEmpty(&v21) )
      goto LABEL_15;
    v14 = CDrawingContext::DrawVisualTree(
            v5,
            *((float **)this + 15),
            (__int128 *)&v21,
            0LL,
            0x7FFFFFFF,
            *((_BYTE *)this + 160),
            0,
            1,
            0LL,
            0,
            0);
    v10 = v14;
    if ( v14 < 0 )
      break;
    v14 = CLocalAppRenderTarget::NotifyRenderedRect((__int64)this, &v21.left);
    v10 = v14;
    if ( v14 < 0 )
    {
      v20 = 351;
      goto LABEL_6;
    }
LABEL_15:
    ++v17;
    v7 += 16LL;
    if ( v17 >= v16 )
      goto LABEL_16;
  }
  v20 = 349;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v20, 0LL);
LABEL_18:
  CDrawingContext::EndFrame(v5);
  return v10;
}
