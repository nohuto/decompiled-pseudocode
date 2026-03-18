/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800A1444
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A1558 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801DFDB0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     floorf_0 @ 0x1800F019F (floorf_0.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(
        __int64 a1,
        float a2,
        unsigned int a3,
        float a4,
        unsigned int a5)
{
  __m128 v5; // xmm2
  char v6; // si
  int v7; // r14d
  char v8; // bp
  __int64 v11; // rcx
  unsigned int v12; // ebx
  float v14; // xmm6_4
  float v15; // xmm7_4
  int v16; // eax
  __m128 v17; // rt1
  unsigned int v18; // [rsp+20h] [rbp-58h]
  float v19; // [rsp+80h] [rbp+8h]

  v6 = *(_BYTE *)(a1 + 541);
  v7 = 0;
  v8 = 0;
  if ( (v6 & 1) != 0 )
  {
    v12 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x8000FFFF, 0x3D9u, 0LL);
    return v12;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 >= 0.0 )
    {
      if ( a2 > 0.0 )
      {
        v7 = (int)ceilf_0(a2) - 1;
        v14 = a2 - floorf_0(a2);
        if ( v14 != 0.0 )
          *(float *)(a1 + 512) = v14;
      }
    }
    else
    {
      v7 = -1;
    }
  }
  v11 = a3;
  if ( !a3 )
    goto LABEL_4;
  v11 = a3 - 1;
  if ( a3 == 1 )
  {
    a3 = 0;
LABEL_22:
    v8 = 1;
    goto LABEL_4;
  }
  v11 = a3 - 2;
  if ( a3 == 2 )
    goto LABEL_4;
  v11 = a3 - 3;
  if ( a3 == 3 )
  {
    a3 = 2;
    goto LABEL_22;
  }
  if ( a3 != 4 )
  {
    v18 = 1052;
LABEL_28:
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x80070057, v18, 0LL);
    return v12;
  }
  v7 = 0;
LABEL_4:
  if ( a5 > 2 )
  {
    v18 = 1071;
    goto LABEL_28;
  }
  *(_DWORD *)(a1 + 504) = v7;
  *(_DWORD *)(a1 + 536) = a5;
  *(_DWORD *)(a1 + 532) = a3;
  *(_BYTE *)(a1 + 541) = (8 * v8) | v6 & 0xF7;
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
    *(_DWORD *)(a1 + 448) = v16;
  }
  return 0;
}
