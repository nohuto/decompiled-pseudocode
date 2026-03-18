/*
 * XREFs of ??HD2DVector4@@QEBA?AU0@AEBU0@@Z @ 0x18022641C
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BE374 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800D201C (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801D2908 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180208F38 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall D2DVector4::operator+(float *a1, _OWORD *a2, float *a3)
{
  _OWORD *result; // rax
  float v4[6]; // [rsp+0h] [rbp-18h]

  result = a2;
  v4[0] = *a3 + *a1;
  v4[1] = a3[1] + a1[1];
  v4[2] = a3[2] + a1[2];
  v4[3] = a3[3] + a1[3];
  *a2 = *(_OWORD *)v4;
  return result;
}
