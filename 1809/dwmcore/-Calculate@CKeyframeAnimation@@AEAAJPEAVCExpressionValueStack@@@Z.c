/*
 * XREFs of ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180051970 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180018388 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180052A50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800539BC (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180054030 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsComplete@KeyframeSequence@@QEBA_NXZ @ 0x1800EF828 (-IsComplete@KeyframeSequence@@QEBA_NXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::Calculate(CKeyframeAnimation *this, struct CExpressionValueStack *a2, double a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  char v8; // di
  int v9; // r9d
  int v10; // r11d
  float AnimationTimeLength; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // eax
  __m128 v15; // rt1
  int v16; // ecx
  int v17; // edx
  bool v18; // sf
  int v19; // r11d
  int v21; // eax
  __int64 v22; // rcx

  if ( *((char *)this + 524) >= 0 )
    return 0;
  if ( (*((_BYTE *)this + 525) & 4) != 0 )
  {
    v5 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 32, a2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xB0Fu);
      return v7;
    }
    *((_BYTE *)this + 525) &= ~4u;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 42), a2);
  if ( !KeyframeSequence::IsComplete(*((KeyframeSequence **)this + 42)) || *((_DWORD *)this + 129) == 4 )
    return 0;
  *((_BYTE *)this + 525) |= 4u;
  v8 = *((_BYTE *)this + 525);
  if ( !*((_DWORD *)this + 123) )
    goto LABEL_33;
  AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
  v12 = AnimationTimeLength * 1000.0;
  if ( (LODWORD(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v12 - v12;
    v15.m128_f32[0] = FLOAT_N0_5;
    v14 = (int)v12 - _mm_cmple_ss(*(__m128 *)&a3, v15).m128_u32[0];
  }
  else
  {
    v13 = v12 + 6291456.25;
    v14 = (int)(LODWORD(v13) << 10) >> 11;
  }
  v16 = 0;
  do
  {
    do
    {
      v17 = v16++;
      if ( v10 >= 0 )
      {
        if ( v10 <= v14 )
        {
          v18 = v10 < 0;
          if ( v10 )
            continue;
          if ( *((float *)this + 118) >= 0.0 )
            break;
          v10 = v14;
        }
        else
        {
          v10 -= v14;
        }
      }
      else
      {
        v10 += v14;
      }
      v18 = v10 < 0;
    }
    while ( v18 );
  }
  while ( v10 > v14 );
  if ( v17 >= v9 )
  {
    if ( v9 > 0 )
    {
      v16 = 0;
      *((_DWORD *)this + 123) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 123) = v9 - v16;
  }
  if ( v16 )
  {
    *((_DWORD *)this + 121) += v16;
    CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 121));
    KeyframeSequence::Repeat(*((KeyframeSequence **)this + 42), v19);
    return 0;
  }
LABEL_33:
  *((_BYTE *)this + 524) &= ~0x80u;
  *((_BYTE *)this + 525) = v8 | 2;
  v21 = CKeyframeAnimation::OnAnimationEvent((__int64)this, 1, a2);
  v7 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xBAFu);
    return v7;
  }
  return 0;
}
