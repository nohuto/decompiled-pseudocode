/*
 * XREFs of ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180082278
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180081380 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1800192C4 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180081C20 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetIsComplete@Timer@@QEBA_NXZ @ 0x180082440 (-GetIsComplete@Timer@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800C0990 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800C0AF4 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x1800C0C18 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::Calculate(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  __m128 v3; // xmm2
  __int64 v6; // r8
  unsigned int v7; // edi
  char v9; // r10
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r9d
  int v15; // r11d
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  bool v21; // sf
  int v22; // r11d
  __m128 v23; // rt1

  if ( *((char *)this + 540) >= 0 )
    return 0;
  if ( (*((_BYTE *)this + 541) & 4) != 0 )
  {
    v12 = CKeyframeAnimation::OnAnimationEvent(this, 32LL, a2);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xAFFu, 0LL);
      return v7;
    }
    *((_BYTE *)this + 541) &= ~4u;
  }
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 45), a2, a3);
  v6 = *((_QWORD *)this + 45);
  if ( (*(_BYTE *)(v6 + 140) & 3) != 1 || !Timer::GetIsComplete((Timer *)(v6 + 80)) || *((_DWORD *)this + 133) == 4 )
    return 0;
  *((_BYTE *)this + 541) |= 4u;
  v9 = *((_BYTE *)this + 541);
  if ( !*((_DWORD *)this + 127) )
    goto LABEL_9;
  v16 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (LODWORD(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)v16 - v16;
    v23.m128_f32[0] = FLOAT_N0_5;
    v18 = (int)v16 - _mm_cmple_ss(v3, v23).m128_u32[0];
  }
  else
  {
    v17 = v16 + 6291456.25;
    v18 = (int)(LODWORD(v17) << 10) >> 11;
  }
  v19 = 0;
  do
  {
    while ( 1 )
    {
      v20 = v19++;
      if ( v15 < 0 )
      {
        v15 += v18;
LABEL_33:
        v21 = v15 < 0;
        goto LABEL_19;
      }
      if ( v15 > v18 )
      {
        v15 -= v18;
        goto LABEL_33;
      }
      v21 = v15 < 0;
      if ( !v15 )
        break;
LABEL_19:
      if ( !v21 )
        goto LABEL_20;
    }
    if ( *((float *)this + 122) < 0.0 )
    {
      v15 = v18;
      goto LABEL_33;
    }
LABEL_20:
    ;
  }
  while ( v15 > v18 );
  if ( v20 < v14 )
  {
    *((_DWORD *)this + 127) = v14 - v19;
  }
  else if ( v14 > 0 )
  {
    v19 = 0;
    *((_DWORD *)this + 127) = 0;
  }
  if ( v19 )
  {
    *((_DWORD *)this + 125) += v19;
    CKeyframeAnimation::PrepareSequenceForIteration(this, *((_DWORD *)this + 125));
    KeyframeSequence::Repeat(*((KeyframeSequence **)this + 45), v22);
    return 0;
  }
LABEL_9:
  *((_BYTE *)this + 540) &= ~0x80u;
  *((_BYTE *)this + 541) = v9 | 2;
  v10 = CKeyframeAnimation::OnAnimationEvent(this, 1LL, a2);
  v7 = v10;
  if ( v10 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB9Fu, 0LL);
  return v7;
}
