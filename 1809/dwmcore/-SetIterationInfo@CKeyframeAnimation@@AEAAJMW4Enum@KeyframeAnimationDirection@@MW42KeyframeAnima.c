/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800C22F8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C20D0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801A3998 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, float a4, unsigned int a5)
{
  __m128 v5; // xmm2
  char v6; // bp
  unsigned int v7; // ebx
  int v10; // r15d
  char v11; // r14
  unsigned int v12; // ecx
  float v14; // xmm6_4
  float v15; // xmm7_4
  int v16; // eax
  __m128 v17; // rt1
  unsigned int v18; // [rsp+20h] [rbp-58h]
  float v19; // [rsp+80h] [rbp+8h]

  v6 = *(_BYTE *)(a1 + 525);
  v7 = 0;
  v10 = 0;
  v11 = 0;
  if ( (v6 & 1) != 0 )
  {
    v7 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147418113, 0x3DCu);
    return v7;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 >= 0.0 )
    {
      if ( a2 > 0.0 )
      {
        v10 = (int)ceilf_0(a2) - 1;
        v14 = a2 - floorf_0(a2);
        if ( v14 != 0.0 )
          *(float *)(a1 + 496) = v14;
      }
    }
    else
    {
      v10 = -1;
    }
  }
  v12 = a3;
  if ( !a3 )
    goto LABEL_4;
  v12 = a3 - 1;
  if ( a3 == 1 )
  {
    a3 = 0;
LABEL_21:
    v11 = 1;
    goto LABEL_4;
  }
  v12 = a3 - 2;
  if ( a3 == 2 )
    goto LABEL_4;
  v12 = a3 - 3;
  if ( a3 == 3 )
  {
    a3 = 2;
    goto LABEL_21;
  }
  if ( a3 != 4 )
  {
    v18 = 1055;
LABEL_27:
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, v18);
    return v7;
  }
  v10 = 0;
LABEL_4:
  if ( a5 > 2 )
  {
    v18 = 1074;
    goto LABEL_27;
  }
  *(_DWORD *)(a1 + 488) = v10;
  *(_DWORD *)(a1 + 520) = a5;
  *(_DWORD *)(a1 + 516) = a3;
  *(_BYTE *)(a1 + 525) = (8 * v11) | v6 & 0xF7;
  if ( a4 > 0.0 )
  {
    v15 = a4 * 1000.0;
    if ( COERCE_UNSIGNED_INT(fabs(a4 * 1000.0)) > 0x497FFFF0 )
    {
      v5.m128_f32[0] = (float)(int)v15 - v15;
      v17.m128_f32[0] = FLOAT_N0_5;
      v16 = (int)v15 - _mm_cmple_ss(v5, v17).m128_u32[0];
    }
    else
    {
      v19 = v15 + 6291456.25;
      v16 = (int)(LODWORD(v19) << 10) >> 11;
    }
    *(_DWORD *)(a1 + 432) = v16;
  }
  return v7;
}
