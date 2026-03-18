/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x1800227B0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B4B50 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     CComposition::ForEachCursorVisual__lambda_48108cc7c31619439c6c6618e560de86___ @ 0x1800EBAE8 (CComposition--ForEachCursorVisual__lambda_48108cc7c31619439c6c6618e560de86___.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016CDD8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801A4700 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020DD00 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@M.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800486D4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x18004B620 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054C84 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800B4EAC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x1800B4F98 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800B514C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x1800B5164 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800B518C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v5; // ebx
  signed int VisualTree; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  struct CDrawingContext *v12; // rsi
  const struct CMILMatrix *TopByReference; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  char IsBounding; // al
  signed int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-39h]
  struct CDrawingContext *v23; // [rsp+60h] [rbp+7h] BYREF
  CDirtyRegion *v24; // [rsp+68h] [rbp+Fh] BYREF
  struct D2D_RECT_F v25; // [rsp+70h] [rbp+17h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v5 = 0;
  if ( !a2 )
    return v5;
  VisualTree = CVisual::GetVisualTree(a2, &v24, a3, a3);
  v5 = VisualTree;
  if ( VisualTree < 0 )
  {
    v22 = 4026;
  }
  else
  {
    v8 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xFBDu, 0LL);
      goto LABEL_17;
    }
    VisualTree = CVisualTree::PreCompute((__int64)v24, 0LL);
    v5 = VisualTree;
    if ( VisualTree >= 0 )
    {
      CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, &v25);
      if ( !IsEmpty(&v25) )
      {
        v10 = CDrawingContext::Create(this[4], &v23);
        v12 = v23;
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xFC8u, 0LL);
        }
        else
        {
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
          v14 = CDrawingContext::BeginFrame(v12, this[44], 0LL, 0, (__int64)TopByReference, 0LL, 0, 0LL);
          v5 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xFD1u, 0LL);
          }
          else
          {
            *((_BYTE *)v12 + 268) = *((_BYTE *)this + 268);
            *((_DWORD *)v12 + 62) = *((_DWORD *)this + 62);
            *((_DWORD *)v12 + 63) = *((_DWORD *)this + 63);
            *((_DWORD *)v12 + 69) = *((_DWORD *)this + 69);
            *((_DWORD *)v12 + 64) = *((_DWORD *)this + 64);
            *((_DWORD *)v12 + 65) = *((_DWORD *)this + 65);
            *((_DWORD *)v12 + 66) = *((_DWORD *)this + 66);
            LODWORD(v23) = (_DWORD)FLOAT_1_0;
            CWatermarkStack<float,64,2,10>::Top(this + 408, &v23);
            v16 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)v12 + 816, &v23);
            v5 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xFE8u, 0LL);
            }
            else
            {
              if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
                CDrawingContext::CalculateOcclusion(v12, v24, 0, 1, (__int64)&v23);
              IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
              v19 = CDrawingContext::DrawVisualTree(
                      v12,
                      (float *)v24,
                      (__int128 *)&v25,
                      0LL,
                      0x7FFFFFFF,
                      0,
                      1,
                      IsBounding ^ 1u,
                      0LL,
                      0,
                      1);
              v5 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1001u, 0LL);
              }
              else
              {
                *((_BYTE *)this + 6354) |= *((_BYTE *)v12 + 6354);
                *((_BYTE *)this + 6355) |= *((_BYTE *)v12 + 6355);
                *((_BYTE *)this + 6356) |= *((_BYTE *)v12 + 6356);
                *((_BYTE *)this + 6357) |= *((_BYTE *)v12 + 6357);
              }
              CWatermarkStack<float,64,2,10>::Pop((char *)v12 + 3264);
            }
            CDrawingContext::EndFrame(v12);
          }
        }
        if ( v12 )
          CGdiSpriteBitmap::Release((struct CDrawingContext *)((char *)v12 + 16));
      }
      goto LABEL_17;
    }
    v22 = 4031;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, VisualTree, v22, 0LL);
LABEL_17:
  if ( v24 )
    CDirtyRegion::Release(v24);
  return v5;
}
