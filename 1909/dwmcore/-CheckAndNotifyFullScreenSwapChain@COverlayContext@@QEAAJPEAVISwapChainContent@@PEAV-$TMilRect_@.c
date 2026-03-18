/*
 * XREFs of ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180182854
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012F34 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x180185D0C (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180185F24 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::CheckAndNotifyFullScreenSwapChain(
        COverlayContext *this,
        __int64 a2,
        const struct D2D_RECT_F *a3)
{
  unsigned int v3; // edi
  float v7; // xmm0_4
  float v8; // eax
  double v9; // xmm0_8
  int v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  signed int updated; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct tagRECT v17; // [rsp+30h] [rbp-28h] BYREF
  float v18; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( *((_QWORD *)this + 2) )
  {
    v7 = *((float *)this + 14) + 6291456.25;
    v8 = v7;
    v9 = *((float *)this + 15);
    v17.left = (int)(LODWORD(v8) << 10) >> 11;
    *(float *)&v9 = v9 + 6291456.25;
    v10 = LODWORD(v9);
    v11 = *((float *)this + 16);
    v17.top = v10 << 10 >> 11;
    *(float *)&v11 = v11 + 6291456.25;
    v12 = LODWORD(v11);
    LODWORD(v11) = *((_DWORD *)this + 17);
    v17.right = v12 << 10 >> 11;
    v18 = *(float *)&v11 + 6291456.25;
    v17.bottom = (int)(LODWORD(v18) << 10) >> 11;
    updated = COverlayContext::UpdateVisitedContentRegion(this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0x363u, 0LL);
    }
    else if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, (float *)this + 14)
           && !COverlayContext::RectIntersectsVisitedRegion(this, &v17)
           && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2) == 1 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 504LL))(*((_QWORD *)this + 2), v15);
    }
  }
  return v3;
}
