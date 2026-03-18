/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012D78
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180012C70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18005E8B0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800B0960 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18015E300 (-AddOcclusionInformation@COverlayRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??E?$span_iterator@V?$span@PEAVCColorGradientStop@@$0?0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ @ 0x180005ED4 (--E-$span_iterator@V-$span@PEAVCColorGradientStop@@$0-0@gsl@@$0A@@details@gsl@@QEAAAEAV012@XZ.c)
 *     ??D?$span_iterator@V?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@$0A@@details@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@XZ @ 0x180005F08 (--D-$span_iterator@V-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@$0A@@details@gsl@@QEB.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012E74 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800713A0 (--9details@gsl@@YA_NV-$span_iterator@V-$span@PEBUShaderLinkingBody@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v6; // edi
  _QWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v17; // [rsp+60h] [rbp-10h] BYREF

  v6 = 0;
  if ( !*(_DWORD *)(a1 + 1040) || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 224LL))(a3);
    v16[0] = a1 + 1184;
    v15 = (unsigned __int64)(a1 + 1184);
    v16[1] = *(_QWORD *)(a1 + 1184);
    while ( 1 )
    {
      v17 = v15;
      if ( !(unsigned __int8)gsl::details::operator!=(&v17, v16) )
        break;
      v11 = (_QWORD *)gsl::details::span_iterator<gsl::span<COverlayContext::OverlayPlaneInfo *,-1>,0>::operator*((gsl::details *)&v15);
      if ( *(_BYTE *)(*v11 + 13416LL) )
      {
        v12 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v11, a2, a3, a4, a5, a6);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x7A5u);
          return v6;
        }
      }
      gsl::details::span_iterator<gsl::span<CColorGradientStop *,-1>,0>::operator++((gsl::details *)&v15);
    }
  }
  return v6;
}
