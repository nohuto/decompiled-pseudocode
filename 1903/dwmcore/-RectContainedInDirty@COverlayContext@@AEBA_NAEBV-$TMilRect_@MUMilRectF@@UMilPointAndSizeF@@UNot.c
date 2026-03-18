/*
 * XREFs of ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180187320
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180054DD0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180092EC4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800E68CC (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectContainedInDirty(__int64 a1, float *a2)
{
  char v2; // r8
  __int64 v3; // r11
  unsigned int v4; // r9d
  int v5; // r9d
  unsigned int v6; // r10d

  v2 = 0;
  v3 = a1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 13020) )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)(v3 + 16 * (v4 + 814LL)), a2) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return v2;
    }
    return 1;
  }
  return v2;
}
