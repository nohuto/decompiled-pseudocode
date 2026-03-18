/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800548B0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180052A50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180053ED4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180054030 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x1800543B8 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800544A0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  KeyframeSequence *v9; // rcx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r11d
  __int64 v15; // rcx

  if ( (*((_BYTE *)this + 525) & 1) == 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_6;
  v5 = *((_DWORD *)this + 130);
  if ( v5 == 1 )
  {
    *((_DWORD *)this + 109) = *((_DWORD *)this + 108);
    CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 42));
    *(_DWORD *)(v15 + 92) = 0;
  }
  else if ( v5 == 2 )
  {
    *((_DWORD *)this + 109) = *((_DWORD *)this + 108);
    CKeyframeAnimation::GetAnimationTimeLength(this);
    v11 = *((_DWORD *)this + 122);
    v12 = 0;
    if ( v11 >= 1 )
      v12 = v11 - 1;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v12);
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 42));
    *(_DWORD *)(v13 + 92) = v14;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 42), a3);
  v6 = CExpressionValueStack::PushConstant(a3, *((const struct CExpressionValue **)this + 42));
  v8 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v9 = (KeyframeSequence *)*((_QWORD *)this + 42);
    if ( (*((_BYTE *)v9 + 140) & 1) != 0 )
      KeyframeSequence::Stop(v9);
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x973u);
LABEL_9:
  *((_BYTE *)this + 524) &= ~0x80u;
  *((_BYTE *)this + 525) &= 0xF8u;
  *((_DWORD *)this + 109) = 0;
  if ( v8 >= 0 )
    CKeyframeAnimation::OnAnimationEvent((__int64)this, 2, a3);
  return (unsigned int)v8;
}
