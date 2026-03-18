/*
 * XREFs of ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x18006D8EC
 * Callers:
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x18006D594 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801CDFC4 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9054 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 * Callees:
 *     _o_fmod_0 @ 0x1800EC604 (_o_fmod_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_RGBAfromHSLA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  double v9; // xmm11_8
  float v10; // xmm4_4
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  v9 = v8;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(a3 + a3) - 1.0)) & _xmm);
  v11 = (float)(1.0 - v10) * a2;
  v12 = a3 - (float)(v11 * 0.5);
  v13 = v12 + v11;
  v14 = (float)((1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(o_fmod_0(this) - 1.0) & _xmm)) * v11) + v12;
  if ( v9 >= 1.047197551196598 )
  {
    if ( v9 < 2.094395102393195 )
    {
      v15 = v12;
      v16 = v12 + v11;
LABEL_13:
      v13 = v14;
      goto LABEL_3;
    }
    if ( v9 >= 3.141592653589793 )
    {
      if ( v9 < 4.188790204786391 )
      {
        v15 = v12 + v11;
        v16 = v14;
        v13 = v12;
        goto LABEL_3;
      }
      v16 = v12;
      if ( v9 < 5.235987755982989 )
      {
        v15 = v12 + v11;
        goto LABEL_13;
      }
    }
    else
    {
      v16 = v12 + v11;
      v13 = v12;
    }
    v15 = v14;
    goto LABEL_3;
  }
  v15 = v12;
  v16 = v14;
LABEL_3:
  *a5 = v13;
  *a6 = v16;
  *a7 = v15;
  *a5 = fmaxf(0.0, *a5);
  *a6 = fmaxf(0.0, *a6);
  *a7 = fmaxf(0.0, *a7);
  *a8 = a4;
}
