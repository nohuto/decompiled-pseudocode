/*
 * XREFs of ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18005479C
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180053ED4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180054030 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::TimeSeek(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm3_4
  char v3; // al
  unsigned int v4; // ebx
  int v5; // eax
  CKeyframeAnimation *v6; // r11
  float AnimationTimeLength; // xmm0_4
  int v8; // edx
  int v9; // ecx
  __int64 v10; // r11
  __int64 v11; // rcx
  int v12; // r10d
  float v14; // xmm1_4

  v2 = a2;
  if ( a2 < 0.0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x9B6u);
  }
  else
  {
    v3 = *((_BYTE *)this + 525);
    v4 = 0;
    if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      v5 = *((_DWORD *)this + 108);
      if ( v5 > 0 )
      {
        v14 = a2 * 1000.0;
        if ( v14 <= (float)v5 )
        {
          v5 = (int)v14;
          v2 = 0.0;
        }
        else
        {
          v2 = v2 - (float)((float)v5 / 1000.0);
        }
        *((_DWORD *)this + 109) = v5;
      }
      AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
      v8 = *((_DWORD *)v6 + 122);
      v9 = (int)(float)(v2 / AnimationTimeLength);
      if ( v8 >= 0 && (*((_DWORD *)v6 + 121) = v9, *((_DWORD *)v6 + 123) = v8 - v9, v8 - v9 < 0) )
        *((_DWORD *)v6 + 123) = 0;
      else
        v8 = (int)(float)(v2 / AnimationTimeLength);
      *((_DWORD *)v6 + 121) = v8;
      CKeyframeAnimation::PrepareSequenceForIteration(v6, v8);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v10 + 336));
      *(_DWORD *)(v11 + 92) = v12;
    }
  }
  return v4;
}
