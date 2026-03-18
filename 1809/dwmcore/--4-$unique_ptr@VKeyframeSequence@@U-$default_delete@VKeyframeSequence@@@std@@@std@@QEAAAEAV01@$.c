/*
 * XREFs of ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054240
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
      WPF::ProcessHeapImpl::Free(v4);
    }
  }
  return a1;
}
