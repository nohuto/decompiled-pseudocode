/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180080E18
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C6DBC (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1520 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x180044D94 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x180080F74 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C0510 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CFC00 (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800D1C68 (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rbp
  float v14; // xmm6_4
  int v15; // r15d
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-48h]
  void *lpMem; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v23; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v12 = -2003303421;
    v19 = -2003303421;
    v20 = 562;
    goto LABEL_22;
  }
  *(_DWORD *)(a1 + 528) = a2;
  v7 = (KeyframeSequence *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v8);
  lpMem = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 336));
  std::unique_ptr<KeyframeSequence>::operator=(a1 + 360, &lpMem);
  v9 = lpMem;
  if ( lpMem )
  {
    KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)lpMem);
    v18 = v9[8];
    if ( v18 )
    {
      v9[8] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    operator delete(v9);
  }
  v10 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 144), a3, &v23);
  v12 = v10;
  if ( v10 < 0 )
  {
    v20 = 575;
LABEL_20:
    v19 = v10;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v19, v20, 0LL);
    return v12;
  }
  v13 = 0LL;
  v14 = 0.0;
  if ( *(_DWORD *)(a1 + 336) )
  {
    v15 = v23;
    while ( 1 )
    {
      if ( (_DWORD)v13 )
      {
        v16 = (unsigned int)v13;
        v14 = fmaxf(v14 + 0.001, *(float *)(a4 + 48 * v13));
      }
      else
      {
        v14 = 0.0;
        v16 = 0LL;
      }
      v10 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)v13, v11, a4 + 48 * v16, v15);
      v12 = v10;
      if ( v10 < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 336) )
        goto LABEL_11;
    }
    v20 = 600;
    goto LABEL_20;
  }
LABEL_11:
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  return v12;
}
