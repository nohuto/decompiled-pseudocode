/*
 * XREFs of ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002394C
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180022C00 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180023AE4 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180023B50 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180024674 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z @ 0x1800259E8 (-GetDrawingContext@CRenderTarget@@IEAAPEAVCDrawingContext@@_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180058954 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@2PEAVCRenderTarget@@@Z @ 0x180059100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800D9098 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18016F6F4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FDE8C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderForCapture(__int64 a1, _BOOL8 a2)
{
  unsigned int v3; // ebx
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

  v3 = 0;
  DrawingContext = CRenderTarget::GetDrawingContext((CRenderTarget *)a1, a2);
  v6 = *(_QWORD *)(a1 + 120);
  v7 = DrawingContext;
  if ( !v6 )
    return v3;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 24) + 88LL) & 0x7F) != 0 )
  {
    if ( *(_BYTE *)(v6 + 32) )
    {
      v17 = *(_QWORD *)(v6 + 16) + 568LL;
      AcquireSRWLockExclusive((PSRWLOCK)v17);
      *(_DWORD *)(v17 + 8) = GetCurrentThreadId();
      v3 = CVisualTree::PreCompute(*(_QWORD *)(a1 + 120), 0LL);
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) + 568LL;
      *(_DWORD *)(v18 + 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)v18);
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v3, 0x508u, 0LL);
        return v3;
      }
    }
    else
    {
      v8 = CVisualTree::PreCompute(v6, 0LL);
      v3 = v8;
      if ( v8 < 0 )
      {
        v22 = 1292;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v22, 0LL);
        return v3;
      }
    }
  }
  v8 = CCompositionSurfaceManager::ProcessRestoreContent(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 16LL),
         *(struct IRenderTargetDisplay **)(a1 + 176));
  v3 = v8;
  if ( v8 < 0 )
  {
    v22 = 1299;
    goto LABEL_23;
  }
  CComposition::ShowHideCursors(*(CComposition **)(a1 + 16), 0);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1273LL) = 1;
  v10 = CDrawingContext::BeginFrame(v7, a1 + 220, 0LL, 0, 0LL);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x521u, 0LL);
  }
  else
  {
    CDrawingContext::CalculateOcclusion(v7, *(struct CVisualTree **)(a1 + 120), 0, 0, (__int64)&v23);
    v12 = CDrawingContext::DrawVisualTree(v7, 0x7FFFFFFF, 1, 0, 1, 0LL, 1, 0);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x536u, 0LL);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 192);
      if ( v14
        && (v15 = *(_QWORD *)(v14 + 368)) != 0
        && (v20 = CComposeTop::FullRender(v15, v7, a1 + 220, a2), v3 = v20, v20 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x545u, 0LL);
      }
      else if ( g_LockAndReadOffscreenTarget )
      {
        CDrawingContext::ReadTexture(v7);
      }
    }
    CDrawingContext::EndFrame(v7);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1273LL) = 0;
  CComposition::RestoreCursors(*(CComposition **)(a1 + 16));
  return v3;
}
