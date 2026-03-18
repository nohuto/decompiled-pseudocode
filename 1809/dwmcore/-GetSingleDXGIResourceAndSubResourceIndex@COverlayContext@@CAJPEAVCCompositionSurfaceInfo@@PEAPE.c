/*
 * XREFs of ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x18016B488
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18004CC60 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180169BEC (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
        struct CCompositionSurfaceInfo *a1,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  struct CBitmapRealization *v7; // rdi
  int v8; // eax
  __int64 v9; // rcx

  v5 = -2147024809;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(a1);
  v7 = RenderingRealizationNoRef;
  if ( RenderingRealizationNoRef )
  {
    v8 = (*(__int64 (__fastcall **)(struct CBitmapRealization *, struct IDXGIResource **, _QWORD))(*(_QWORD *)RenderingRealizationNoRef
                                                                                                 + 56LL))(
           RenderingRealizationNoRef,
           a2,
           0LL);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCA9u);
    else
      *a3 = *((_DWORD *)v7 + 74);
  }
  return v5;
}
