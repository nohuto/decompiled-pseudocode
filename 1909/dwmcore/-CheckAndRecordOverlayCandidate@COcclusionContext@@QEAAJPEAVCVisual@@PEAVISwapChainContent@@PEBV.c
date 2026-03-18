/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E60
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180012880 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180067F60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18008F970 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801A2BC0 (-AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012F34 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rdi
  _QWORD *v11; // r15
  int v12; // eax
  unsigned int v13; // ecx

  v6 = 0;
  if ( !*(_DWORD *)(a1 + 1048) || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 232LL))(a3);
    v10 = *(_QWORD **)(a1 + 1200);
    v11 = &v10[*(_QWORD *)(a1 + 1192)];
    if ( v10 != v11 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*v10 + 13432LL) )
        {
          v12 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v10, a2, a3, a4, a5, a6);
          v6 = v12;
          if ( v12 < 0 )
            break;
        }
        if ( ++v10 == v11 )
          return v6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x756u, 0LL);
    }
  }
  return v6;
}
