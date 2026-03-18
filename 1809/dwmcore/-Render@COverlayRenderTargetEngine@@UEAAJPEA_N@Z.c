/*
 * XREFs of ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x18015ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18001C828 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180031CE0 (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180048EC8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x18007A9BC (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800D86B0 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x18015E3F0 (-CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E8A0 (-GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015E92C (-NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015F164 (-SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180167180 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::Render(COverlayRenderTargetEngine *this, bool *a2)
{
  char v2; // r14
  int v3; // ebx
  bool *v4; // r15
  CDirtyRegion *v6; // rcx
  struct CDrawingContext *DrawingContext; // rax
  CComposition *v8; // rcx
  struct CDrawingContext *v9; // r13
  __int64 v10; // rsi
  int v11; // r12d
  char v12; // r10
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  bool v31; // zf
  char v33; // [rsp+60h] [rbp-39h]
  int v35; // [rsp+70h] [rbp-29h]
  unsigned int v36; // [rsp+74h] [rbp-25h]
  char v37; // [rsp+78h] [rbp-21h]
  int ResampleMode; // [rsp+7Ch] [rbp-1Dh]
  struct IRenderTarget *v39; // [rsp+80h] [rbp-19h]
  struct D2D_RECT_F v40; // [rsp+88h] [rbp-11h] BYREF
  __int128 v41; // [rsp+98h] [rbp-1h] BYREF
  float v42[4]; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = 0;
  v3 = 0;
  v33 = 0;
  v4 = a2;
  if ( *((_BYTE *)this + 132) )
  {
    v6 = (CDirtyRegion *)*((_QWORD *)this + 18);
    if ( !v6 || CDirtyRegion::IsEmpty(v6) )
      goto LABEL_29;
    DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)this - 8);
    v8 = (CComposition *)*((_QWORD *)this - 6);
    v9 = DrawingContext;
    v40 = (struct D2D_RECT_F)_xmm;
    *((_BYTE *)this + 134) = 1;
    CComposition::ShowHideCursors(v8, 1);
    v10 = *(_QWORD *)(*((_QWORD *)this + 7) + 24LL);
    v11 = (int)(*(_DWORD *)(v10 + 96) << 18) >> 28;
    v37 = *(_DWORD *)(v10 + 96);
    ResampleMode = CVisual::GetResampleMode(v10);
    *(_BYTE *)(v10 + 96) = v12 | 2;
    *(_DWORD *)(v10 + 96) &= 0xFFFFC7FF;
    *(_DWORD *)(v10 + 96) |= 0x400u;
    CVisual::SetResampleMode(v10, 0);
    v39 = (struct IRenderTarget *)*((_QWORD *)this + 20);
    v13 = *(_QWORD *)v39;
    (*(void (__fastcall **)(COverlayRenderTargetEngine *))(*(_QWORD *)this + 144LL))(this);
    (*(void (__fastcall **)(struct IRenderTarget *))(v13 + 160))(v39);
    v14 = COverlayRenderTargetEngine::CalcOcclusion((COverlayRenderTargetEngine *)((char *)this - 64), v9);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB0u);
    }
    else
    {
      CDrawingContext::SetOcclusionContext(v9, *((struct COcclusionContext **)this + 17));
      v16 = CDrawingContext::BeginFrame(v9, v39, &v40, 0, 0LL, 0LL, 0, 0LL);
      v3 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xB6u);
      }
      else
      {
        ++dword_180308098;
        COverlayRenderTargetEngine::GetBounds((__int64)this - 64, 0LL, (__int64)&v41);
        v19 = *((_QWORD *)this + 18);
        if ( *(_BYTE *)(v19 + 2883) == (_BYTE)v18 )
        {
          v24 = v18;
          v35 = v18;
          v36 = *(_DWORD *)(v19 + 1276);
          if ( v36 )
          {
            v25 = v18;
            do
            {
              v26 = *((_QWORD *)this + 17);
              v40 = *(struct D2D_RECT_F *)(v25 + v19 + 1116);
              if ( v26 )
                v40 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                              *((_QWORD *)this + 18),
                                              v42,
                                              v26,
                                              *((_QWORD *)this + 7),
                                              v18,
                                              v24,
                                              (float *)&v41);
              if ( !IsEmpty(&v40) )
              {
                v27 = CDrawingContext::DrawVisualTree(
                        v9,
                        *((_QWORD *)this + 7),
                        (__int128 *)&v40,
                        0LL,
                        0x7FFFFFFF,
                        v18,
                        v18,
                        1,
                        v18,
                        1,
                        1);
                v3 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xECu);
                  goto LABEL_10;
                }
                v33 = 1;
                v29 = COverlayRenderTargetEngine::NotifyRenderedRect((__int64)this - 64);
                LOBYTE(v18) = 0;
                v3 = v29;
                if ( v29 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xEFu);
                  goto LABEL_10;
                }
              }
              v25 += 16LL;
              v24 = v35 + 1;
              v35 = v24;
            }
            while ( v24 < v36 );
          }
        }
        else
        {
          v20 = CDrawingContext::DrawVisualTree(
                  v9,
                  *((_QWORD *)this + 7),
                  &v41,
                  v18,
                  0x7FFFFFFF,
                  v18,
                  v18,
                  1,
                  v18,
                  1,
                  1);
          v3 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xCAu);
            goto LABEL_10;
          }
          v33 = 1;
          v22 = COverlayRenderTargetEngine::NotifyRenderedRect((__int64)this - 64);
          v3 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xCCu);
            goto LABEL_10;
          }
        }
        CDrawingContext::EndFrame(v9);
        v31 = !g_LockAndReadOffscreenTarget;
        *((_BYTE *)this + 134) = 0;
        if ( !v31 )
          (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, _QWORD))(*(_QWORD *)v39 + 216LL))(v39, 0LL, 0LL);
LABEL_10:
        v4 = a2;
      }
    }
    *(_BYTE *)(v10 + 96) = v37;
    *(_DWORD *)(v10 + 96) &= 0xFFFFC3FF;
    *(_DWORD *)(v10 + 96) |= (v11 & 0xF) << 10;
    CVisual::SetResampleMode(v10, ResampleMode);
    if ( v3 >= 0 )
LABEL_29:
      COverlayRenderTargetEngine::SetNeedsFlush((COverlayRenderTargetEngine *)((char *)this - 64));
    else
      ReleaseInterface<CDrawingContext>((__int64 *)this + 6);
    CComposition::RestoreCursors(*((CComposition **)this - 6));
    *((_QWORD *)this + 17) = 0LL;
    v2 = v33;
  }
  if ( v4 )
    *v4 = v2;
  return (unsigned int)v3;
}
