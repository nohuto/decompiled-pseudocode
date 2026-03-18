/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A23BC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A6A50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800D6BC0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6C40 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A761C (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800A79E8 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A7C94 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800A7F8C (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800A7FDC (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A8B10 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  signed int v6; // eax
  __int64 v7; // rcx
  int v8; // edi
  KeyframeSequence *v9; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r11d

  if ( (*((_BYTE *)this + 541) & 1) == 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_6;
  v5 = *((_DWORD *)this + 134);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 45));
    *(_DWORD *)(v11 + 92) = 0;
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 113) = *((_DWORD *)this + 112);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v12 = *((_DWORD *)this + 126);
    v13 = 0;
    if ( v12 >= 1 )
      v13 = v12 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v13);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 45));
    *(_DWORD *)(v14 + 92) = v15;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 45), a3, (__int64)a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 45));
  v8 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v9 = (KeyframeSequence *)*((_QWORD *)this + 45);
    if ( (*((_BYTE *)v9 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v9);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x96Au, 0LL);
LABEL_9:
  *((_BYTE *)this + 540) &= ~0x80u;
  *((_BYTE *)this + 541) &= 0xF8u;
  *((_DWORD *)this + 113) = 0;
  if ( v8 >= 0 )
    CKeyframeAnimation::OnAnimationEvent((__int64)this, 2, a3);
  return (unsigned int)v8;
}
