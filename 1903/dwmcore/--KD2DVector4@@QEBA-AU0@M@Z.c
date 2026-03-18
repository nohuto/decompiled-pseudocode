/*
 * XREFs of ??KD2DVector4@@QEBA?AU0@M@Z @ 0x180227B88
 * Callers:
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18020A628 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x1802299CC (-D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall D2DVector4::operator/(float *a1, _OWORD *a2, float a3)
{
  _OWORD *result; // rax
  float v4[6]; // [rsp+0h] [rbp-18h]

  result = a2;
  v4[0] = (float)(1.0 / a3) * *a1;
  v4[2] = (float)(1.0 / a3) * a1[2];
  v4[1] = (float)(1.0 / a3) * a1[1];
  v4[3] = (float)(1.0 / a3) * a1[3];
  *a2 = *(_OWORD *)v4;
  return result;
}
