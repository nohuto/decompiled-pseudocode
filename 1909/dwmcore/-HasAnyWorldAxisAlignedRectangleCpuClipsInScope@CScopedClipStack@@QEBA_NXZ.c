/*
 * XREFs of ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180178EDC
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18016E8F8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180035CEC (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
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
