/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180031EFC
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18002C884 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18003C2F0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800431B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18008EAF0 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015E560 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802231D4 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  CThreadContext *Value; // rdi
  __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)operator new(0x128uLL);
    if ( v9 )
      Value = CThreadContext::CThreadContext(v9);
    else
      Value = 0LL;
    if ( !Value )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u);
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x8Du);
      return;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  v1 = *(_QWORD *)Value & 2LL;
  v2 = *(_QWORD *)Value & 1LL;
  v3 = (unsigned __int64 *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v1 )
    v4 = *v3;
  else
    v4 = (unsigned int)v2;
  v5 = v4 - 1;
  if ( v1 )
    v2 = *v3;
  if ( v5 < v2 )
  {
    if ( v2 == 1 )
    {
      *(_QWORD *)Value = 0LL;
    }
    else
    {
      v6 = v2 - 1;
      v7 = v3 + 2;
      if ( v6 == 1 )
      {
        v8 = v7[-v5 + 1];
        WPF::ProcessHeapImpl::Free((void *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL));
        *(_QWORD *)Value = v8 | 1;
      }
      else
      {
        if ( v5 < v6 )
          memmove_0(&v7[v5], &v7[v5 + 1], 8 * (v6 - v5));
        *v3 = v6;
      }
    }
  }
}
