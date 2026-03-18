/*
 * XREFs of ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005DA88
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800380E0 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005D940 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005D9E0 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005D9F0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005F1EC (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___ @ 0x1801D8700 (InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17___.c)
 *     InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___ @ 0x1801D87E8 (InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed___.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9054 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9248 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall KeyframeInterpolation::Interpolate(
        __int64 a1,
        double a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  __int64 v6; // rdx
  char result; // al
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  struct _D3DCOLORVALUE *v12; // rax
  void *retaddr; // [rsp+48h] [rbp+8h]

  v6 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v6 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v6, a4, a5, a6);
  v8 = v6 - 1;
  if ( !v8 )
    return KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
    return KeyframeInterpolation::InterpolateHsl(a1, v9, a4, a5, a6);
  v10 = v9 - 1;
  if ( !v10 )
    return InterpolateInLinearGamma__lambda_05231fcf689ec6251862318fc803ab17_(a4, a5, a6);
  v6 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v6 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v6, a4, a5, a6);
  v11 = v6 - 1;
  if ( !v11 )
    return InterpolateInLinearGamma__lambda_ab2dd9ab3598b0b4e0ea4acb542f55ed_(a4, a5, a6);
  if ( v11 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v12 = a5;
  if ( a2 < 1.0 )
    v12 = a4;
  result = LOBYTE(v12->r);
  LODWORD(a6[4].b) = 17;
  LOBYTE(a6->r) = result;
  LOBYTE(a6[4].a) = 1;
  return result;
}
