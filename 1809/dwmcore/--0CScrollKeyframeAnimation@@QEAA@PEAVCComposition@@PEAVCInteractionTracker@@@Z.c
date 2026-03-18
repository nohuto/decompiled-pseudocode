/*
 * XREFs of ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801E00D4
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@InteractionTrackerProperty@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18019F108 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@W4En.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801D6E84 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18006B6A8 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::CScrollKeyframeAnimation(
        CScrollKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  CScrollKeyframeAnimation *result; // rax

  CKeyframeAnimation::CKeyframeAnimation(this, a2);
  *((_QWORD *)this + 66) = a3;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  memset_0((char *)this + 536, 0, 0x40uLL);
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 18;
  *((_BYTE *)this + 612) = 0;
  memset_0((char *)this + 616, 0, 0x40uLL);
  *((_QWORD *)this + 85) = 0LL;
  result = this;
  *((_DWORD *)this + 172) = 18;
  *((_BYTE *)this + 692) = 0;
  return result;
}
