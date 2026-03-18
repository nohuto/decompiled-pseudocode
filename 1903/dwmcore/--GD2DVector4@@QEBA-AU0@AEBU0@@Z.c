/*
 * XREFs of ??GD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x180227924
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BCF34 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180204390 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall D2DVector4::operator-(float *a1, _OWORD *a2, float *a3)
{
  _OWORD *result; // rax
  float v4[6]; // [rsp+0h] [rbp-18h]

  result = a2;
  v4[0] = *a1 - *a3;
  v4[1] = a1[1] - a3[1];
  v4[2] = a1[2] - a3[2];
  v4[3] = a1[3] - a3[3];
  *a2 = *(_OWORD *)v4;
  return result;
}
