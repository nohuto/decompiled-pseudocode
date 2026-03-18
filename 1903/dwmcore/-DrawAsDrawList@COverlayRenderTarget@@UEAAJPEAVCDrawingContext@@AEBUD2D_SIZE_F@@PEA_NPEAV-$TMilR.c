/*
 * XREFs of ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801A4700
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180086D88 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall COverlayRenderTarget::DrawAsDrawList(
        __int64 a1,
        COverlayContext **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v12; // rax
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct CVisual *v17; // rsi
  signed int v18; // eax
  __int64 v19; // rcx
  bool v21; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  if ( !*(_BYTE *)(v6 + 198) )
  {
    if ( *(_BYTE *)(v6 + 197) )
    {
      v12 = *(_QWORD *)(v6 + 216);
      v21 = 0;
      v13 = CDrawingContext::DrawAsOverlay(
              a2,
              (struct ISwapChainContent *)((v12 + 56) & ((unsigned __int128)-(__int128)v12 >> 64)),
              &v21);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x22Au, 0LL);
      }
      else if ( !v21 )
      {
        v15 = CCompositionSurfaceBitmap::DrawAsDrawList(
                *(_QWORD **)(*(_QWORD *)(a1 + 64) + 216LL),
                (__int64)a2,
                a3,
                a4,
                a5,
                a6);
        v7 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x234u, 0LL);
      }
    }
    else
    {
      CThreadContext::UnregisterGraphWalkRoot();
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 198LL) = 1;
      v17 = *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 120LL) + 24LL);
      v18 = CDrawingContext::DrawVisual(a2, v17, 0);
      v7 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x242u, 0LL);
      }
      else
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + 198LL) = 0;
        CThreadContext::RegisterGraphWalkRoot(v17);
      }
    }
  }
  return v7;
}
