/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180165AF4
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006A6A0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180030A84 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180069E14 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x18017A05C (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  bool v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h] BYREF

  CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
    (int *)this + 112,
    &v3);
  CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), &v2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 6346)
      && !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 1008)) )
    {
      *((_BYTE *)this + 6346) = 0;
    }
    CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)this + 36, (float *)&v3) )
      *((_BYTE *)this + 6345) = 1;
  }
}
