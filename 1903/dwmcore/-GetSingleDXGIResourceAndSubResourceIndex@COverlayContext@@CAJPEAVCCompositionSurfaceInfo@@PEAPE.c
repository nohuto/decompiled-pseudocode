/*
 * XREFs of ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180186310
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180059110 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@PEA_N@Z @ 0x180184BD8 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
        struct CCompositionSurfaceInfo *a1,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi
  signed int v8; // eax
  __int64 v9; // rcx

  v5 = -2147024809;
  v6 = (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a1 + 40LL))(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource **, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, a2, 0LL);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCACu, 0LL);
    else
      *a3 = *(_DWORD *)(v7 + 296);
  }
  return v5;
}
