/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B068
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800900B0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x1800320F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCHwndRenderTarget@@@Z @ 0x18004AAAC (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18004B9CC (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18007AC24 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x18008B034 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008B1F4 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18008B288 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x180166768 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDC5C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(__int64 a1, __int128 *a2)
{
  unsigned int v4; // ebx
  struct CDrawingContext *DrawingContext; // rax
  __int64 v6; // rcx
  CDrawingContext *v7; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // [rsp+20h] [rbp-58h]
  char v23; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((struct CComposition **)a1);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = DrawingContext;
  if ( !v6 )
    return v4;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 88LL) & 0x7F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 32) )
    {
      v17 = *(_QWORD *)(v6 + 16) + 552LL;
      AcquireSRWLockExclusive((PSRWLOCK)v17);
      *(_DWORD *)(v17 + 8) = GetCurrentThreadId();
      v4 = CVisualTree::PreCompute(*(struct CVisualTree **)(a1 + 120), 0LL);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 552LL;
      *(_DWORD *)(v18 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v18);
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v4, 0x4F8u);
        return v4;
      }
    }
    else
    {
      v8 = CVisualTree::PreCompute((struct CVisualTree *)v6, 0LL);
      v4 = v8;
      if ( v8 < 0 )
      {
        v22 = 1276;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v22);
        return v4;
      }
    }
  }
  v8 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 16LL),
         *(struct IRenderTargetDisplay **)(a1 + 176));
  v4 = v8;
  if ( v8 < 0 )
  {
    v22 = 1283;
    goto LABEL_23;
  }
  CComposition::ShowHideCursors(*(CComposition **)(a1 + 16), 0);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1256LL) = 1;
  v10 = CDrawingContext::BeginFrame(
          v7,
          *(struct IRenderTarget **)(a1 + 176),
          (_OWORD *)(a1 + 452),
          1,
          a1 + 220,
          0LL,
          0,
          0LL);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x511u);
  }
  else
  {
    CDrawingContext::CalculateOcclusion(v7, *(struct CVisualTree **)(a1 + 120), 0, 0, (__int64)&v23);
    v12 = CDrawingContext::DrawVisualTree(v7, *(_QWORD *)(a1 + 120), a2, 0LL, 0x7FFFFFFF, 1, 0, 1, 0, 1, 0);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x526u);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 192);
      if ( v14
        && (v15 = *(_QWORD *)(v14 + 320)) != 0
        && (v20 = CComposeTop::FullRender(v15, v7, a1 + 220, a2), v4 = v20, v20 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x535u);
      }
      else if ( g_LockAndReadOffscreenTarget )
      {
        CDrawingContext::ReadTexture(v7);
      }
    }
    CDrawingContext::EndFrame(v7);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1256LL) = 0;
  CComposition::RestoreCursors(*(CComposition **)(a1 + 16));
  return v4;
}
