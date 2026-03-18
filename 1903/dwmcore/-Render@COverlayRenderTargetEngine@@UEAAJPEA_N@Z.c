/*
 * XREFs of ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80
 * Callers:
 *     <none>
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18004C408 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800B0B44 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800B46D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800B58BC (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D896C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800E5E98 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18016FC54 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z @ 0x1801716B0 (-SetOcclusionContext@CDrawingContext@@QEAAXPEAVCOcclusionContext@@@Z.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x18017840C (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801A4584 (-CalcOcclusion@COverlayRenderTargetEngine@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4A70 (-GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4B00 (-NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A5394 (-SetNeedsFlush@COverlayRenderTargetEngine@@IEAAJXZ.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::Render(COverlayRenderTargetEngine *this, bool *a2)
{
  char v2; // r14
  int v3; // ebx
  bool *v4; // r13
  CDirtyRegion *v6; // rcx
  struct CDrawingContext *DrawingContext; // rax
  CComposition *v8; // rcx
  struct CDrawingContext *v9; // r12
  __int64 v10; // rsi
  int v11; // r15d
  int ResampleMode; // eax
  void (__fastcall *v13)(struct IRenderTarget *); // rbx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  float *v18; // r9
  __int64 v19; // r13
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  float *v25; // r14
  __int64 v26; // r8
  signed int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  bool v31; // zf
  char v33; // [rsp+60h] [rbp-39h]
  unsigned int v35; // [rsp+70h] [rbp-29h]
  unsigned int v36; // [rsp+74h] [rbp-25h]
  char v37; // [rsp+78h] [rbp-21h]
  int v38; // [rsp+7Ch] [rbp-1Dh]
  struct IRenderTarget *v39; // [rsp+80h] [rbp-19h]
  struct D2D_RECT_F v40; // [rsp+88h] [rbp-11h] BYREF
  __int128 v41; // [rsp+98h] [rbp-1h] BYREF
  _BYTE v42[16]; // [rsp+A8h] [rbp+Fh] BYREF

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
    *(_BYTE *)(v10 + 96) |= 2u;
    *(_DWORD *)(v10 + 96) &= 0xFFFFC7FF;
    *(_DWORD *)(v10 + 96) |= 0x400u;
    v38 = ResampleMode;
    CVisual::SetResampleMode(v10, 0);
    v39 = (struct IRenderTarget *)*((_QWORD *)this + 20);
    v13 = *(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v39 + 160LL);
    (*(void (__fastcall **)(COverlayRenderTargetEngine *))(*(_QWORD *)this + 144LL))(this);
    v13(v39);
    v14 = COverlayRenderTargetEngine::CalcOcclusion((COverlayRenderTargetEngine *)((char *)this - 64), v9);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB4u, 0LL);
    }
    else
    {
      CDrawingContext::SetOcclusionContext(v9, *((struct COcclusionContext **)this + 17));
      v16 = CDrawingContext::BeginFrame(v9, v39, &v40, 0, 0LL, 0LL, 0, 0LL);
      v3 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xBAu, 0LL);
      }
      else
      {
        ++dword_18033C778;
        COverlayRenderTargetEngine::GetBounds((__int64)this - 64, 0LL, (__int64)&v41);
        v19 = *((_QWORD *)this + 18);
        if ( *(_BYTE *)(v19 + 2883) == (_BYTE)v18 )
        {
          v24 = (unsigned int)v18;
          v35 = (unsigned int)v18;
          v36 = *(_DWORD *)(v19 + 1276);
          if ( v36 )
          {
            v25 = v18;
            do
            {
              v26 = *((_QWORD *)this + 17);
              v40 = *(struct D2D_RECT_F *)((char *)v25 + v19 + 1116);
              if ( v26 )
                v40 = *(struct D2D_RECT_F *)CDirtyRegion::GetUnOccludedDirtyRegion(
                                              *((_QWORD *)this + 18),
                                              (__int64)v42,
                                              v26,
                                              *((const struct CVisualTree **)this + 7),
                                              (char)v18,
                                              v24,
                                              (__int64)&v41);
              if ( !IsEmpty(&v40) )
              {
                v27 = CDrawingContext::DrawVisualTree(
                        v9,
                        *((float **)this + 7),
                        (__int128 *)&v40,
                        0LL,
                        0x7FFFFFFF,
                        (char)v18,
                        (char)v18,
                        1,
                        v18,
                        1,
                        1);
                v3 = v27;
                if ( v27 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xF0u, 0LL);
                  goto LABEL_10;
                }
                v33 = 1;
                v29 = COverlayRenderTargetEngine::NotifyRenderedRect((__int64)this - 64);
                LOBYTE(v18) = 0;
                v3 = v29;
                if ( v29 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xF3u, 0LL);
                  goto LABEL_10;
                }
              }
              v25 += 4;
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
                  *((float **)this + 7),
                  &v41,
                  (__int64)v18,
                  0x7FFFFFFF,
                  (char)v18,
                  (char)v18,
                  1,
                  v18,
                  1,
                  1);
          v3 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xCEu, 0LL);
            goto LABEL_10;
          }
          v33 = 1;
          v22 = COverlayRenderTargetEngine::NotifyRenderedRect((__int64)this - 64);
          v3 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xD0u, 0LL);
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
    CVisual::SetResampleMode(v10, v38);
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
