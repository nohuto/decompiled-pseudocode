/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18006B6A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B60FC (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ @ 0x1801C75C8 (-StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801E00D4 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18004E940 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = (char *)this + 376;
  *((_QWORD *)this + 44) = (char *)this + 376;
  *((_DWORD *)this + 90) = 2;
  *(_QWORD *)((char *)this + 364) = 2LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 124) = 1065353216;
  *((_DWORD *)this + 118) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 516) = 0LL;
  *(_QWORD *)((char *)this + 476) = 0LL;
  return result;
}
