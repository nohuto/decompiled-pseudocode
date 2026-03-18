/*
 * XREFs of ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CFC00
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180080E18 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C0510 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

KeyframeSequence **__fastcall std::unique_ptr<KeyframeSequence>::operator=(
        KeyframeSequence **a1,
        KeyframeSequence **a2)
{
  KeyframeSequence *v3; // rax
  KeyframeSequence *v4; // rbx
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      KeyframeSequence::RemoveAllKeyFrames(v4);
      v6 = *((_QWORD *)v4 + 8);
      if ( v6 )
      {
        *((_QWORD *)v4 + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      operator delete(v4);
    }
  }
  return a1;
}
