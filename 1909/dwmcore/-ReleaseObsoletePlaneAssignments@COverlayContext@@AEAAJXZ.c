/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800E777C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006FC34 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180184AC8 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180185C40 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 */

__int64 __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  unsigned int v4; // esi
  __int64 v5; // r8
  signed int v6; // eax
  __int64 v7; // rcx

  v1 = *((_QWORD *)this + 1054);
  v3 = *((_QWORD *)this + 1055);
  v4 = 0;
  while ( v1 != v3 )
  {
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(struct CVisual **)(v1 + 8),
                         *(struct ISwapChainContent **)(v1 + 16),
                         *(_QWORD *)(v1 + 32)) == -1 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode < 3 )
      {
        v6 = COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)v1, 0, 0);
        v4 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1051u, 0LL);
          return v4;
        }
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 24) + 96LL))(*(_QWORD *)(v1 + 24));
        *((_BYTE *)this + 13438) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 24) + 296LL))(*(_QWORD *)(v1 + 24), 2LL);
      }
      if ( !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v1 + 152, v5) )
        *((_BYTE *)this + 13447) = 1;
    }
    v1 += 256LL;
  }
  return v4;
}
