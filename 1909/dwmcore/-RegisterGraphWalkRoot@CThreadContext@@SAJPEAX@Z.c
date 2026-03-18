/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x18005C8C8
 * Callers:
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800247C4 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18005B800 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005D0C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180083600 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180085370 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x1800C9340 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801A2E40 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007BAC4 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(void *a1)
{
  CThreadContext *Value; // rbx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // ebx
  __int64 v7; // rdx
  CThreadContext *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v8 = (CThreadContext *)operator new(0x138uLL);
    if ( v8 )
      Value = CThreadContext::CThreadContext(v8);
    else
      Value = 0LL;
    if ( !Value )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x42u, 0LL);
      v10 = 106LL;
      goto LABEL_18;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  if ( (*(_QWORD *)Value & 2) != 0 )
    v3 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *(_QWORD *)Value & 1LL;
  v4 = 0LL;
  if ( v3 )
  {
    while ( a1 != (void *)CPtrArrayBase::operator[]((__int64 *)Value, v4) )
    {
      v4 = v7 + 1;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    v5 = -2147467260;
    v10 = 115LL;
  }
  else
  {
LABEL_5:
    v5 = CPtrArrayBase::InsertAt(Value, (unsigned __int64)a1, v3);
    if ( v5 >= 0 )
      return 0LL;
    v10 = 119LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v5,
    v11);
  return (unsigned int)v5;
}
