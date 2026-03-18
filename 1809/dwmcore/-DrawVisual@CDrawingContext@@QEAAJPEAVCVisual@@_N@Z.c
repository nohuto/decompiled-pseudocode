/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x1800206B0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008D420 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     CComposition::ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___ @ 0x180157794 (CComposition--ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015E560 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D9C80 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@M.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C3B8 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18008DD64 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18008DD7C (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18008DDA4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(struct CComposition **this, struct CVisual *a2, bool a3)
{
  unsigned int v3; // ebx
  int VisualTree; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  CDrawingContext *v12; // rsi
  const struct CMILMatrix *TopByReference; // rax
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  bool IsBounding; // al
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v22; // [rsp+20h] [rbp-39h]
  CDrawingContext *v23; // [rsp+60h] [rbp+7h] BYREF
  CMILRefCountBase *v24; // [rsp+68h] [rbp+Fh] BYREF
  struct D2D_RECT_F v25; // [rsp+70h] [rbp+17h] BYREF

  v3 = 0;
  v24 = 0LL;
  v23 = 0LL;
  if ( !a2 )
    return v3;
  VisualTree = CVisual::GetVisualTree(a2, &v24, a3, a3);
  v3 = VisualTree;
  if ( VisualTree < 0 )
  {
    v22 = 4196;
  }
  else
  {
    v8 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)this, 0);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1067u);
      goto LABEL_17;
    }
    VisualTree = CVisualTree::PreCompute(v24, 0LL);
    v3 = VisualTree;
    if ( VisualTree >= 0 )
    {
      CDrawingContext::CalcClippedNodeWorldSpaceBounds(this, a2, &v25);
      if ( !IsEmpty(&v25) )
      {
        v10 = CDrawingContext::Create(this[4], &v23);
        v12 = v23;
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1072u);
        }
        else
        {
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
          v14 = CDrawingContext::BeginFrame(v12, this[44], 0LL, 0, (__int64)TopByReference, 0LL, 0, 0LL);
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x107Bu);
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
            *(float *)&v23 = FLOAT_1_0;
            CWatermarkStack<float,64,2,10>::Top(this + 408, &v23);
            v16 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)v12 + 816, &v23);
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1092u);
            }
            else
            {
              if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
                CDrawingContext::CalculateOcclusion(v12, v24, 0, 1, (__int64)&v23);
              IsBounding = CDrawingContext::IsBounding((CDrawingContext *)this);
              v19 = CDrawingContext::DrawVisualTree(
                      v12,
                      (__int64)v24,
                      (__int128 *)&v25,
                      0LL,
                      0x7FFFFFFF,
                      0,
                      1,
                      !IsBounding,
                      0,
                      0,
                      1);
              v3 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x10ABu);
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
          CGdiSpriteBitmap::Release((CDrawingContext *)((char *)v12 + 16));
      }
      goto LABEL_17;
    }
    v22 = 4201;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, VisualTree, v22);
LABEL_17:
  if ( v24 )
    CMILRefCountBase::Release(v24);
  return v3;
}
