/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C20D0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x180029CCC (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180053104 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800541DC (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180054240 (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  KeyframeSequence *v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rsi
  float v13; // xmm6_4
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-48h]
  KeyframeSequence *v20; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v11 = -2003303421;
    v19 = 567;
    v18 = -2003303421;
    goto LABEL_22;
  }
  *(_DWORD *)(a1 + 512) = a2;
  v7 = (KeyframeSequence *)WPF::ProcessHeapImpl::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v20 = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 312));
  std::unique_ptr<KeyframeSequence>::operator=(a1 + 336, &v20);
  v8 = v20;
  if ( v20 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v20);
    v17 = *((_QWORD *)v8 + 8);
    if ( v17 )
    {
      *((_QWORD *)v8 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    WPF::ProcessHeapImpl::Free(v8);
  }
  v9 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 144), a3, &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    v19 = 580;
LABEL_20:
    v18 = v9;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v18, v19);
    return v11;
  }
  v12 = 0LL;
  v13 = 0.0;
  if ( *(_DWORD *)(a1 + 312) )
  {
    v14 = v22;
    while ( 1 )
    {
      if ( (_DWORD)v12 )
      {
        v15 = (unsigned int)v12;
        v13 = fmaxf(v13 + 0.001, *(float *)(a4 + 48 * v12));
      }
      else
      {
        v13 = 0.0;
        v15 = 0LL;
      }
      v9 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)v12, v10, a4 + 48 * v15, v14);
      v11 = v9;
      if ( v9 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 312) )
        goto LABEL_11;
    }
    v19 = 605;
    goto LABEL_20;
  }
LABEL_11:
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  return v11;
}
