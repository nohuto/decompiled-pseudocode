/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180030A84
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180165AF4 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180030AD4 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

bool __fastcall CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope(CScopedClipStack *this)
{
  __int64 v1; // rcx
  char v2; // r8

  if ( !CScopedClipStack::HasCpuClipsInScope(this)
    || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(136LL
                                                                              * (unsigned int)(*(_DWORD *)(v1 + 856) - 1)
                                                                              + *(_QWORD *)(v1 + 832)
                                                                              + 96LL)) )
  {
    return 0;
  }
  return v2;
}
