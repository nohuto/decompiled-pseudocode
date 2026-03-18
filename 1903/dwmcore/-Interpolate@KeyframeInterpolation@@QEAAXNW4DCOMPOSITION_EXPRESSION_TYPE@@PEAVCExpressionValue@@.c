/*
 * XREFs of ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1720
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005B180 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1670 (-Compute@XamlInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1710 (-Compute@LinearInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BCF34 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x180209AD8 (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x180209BC0 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18020A434 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18020A628 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 */

void __fastcall KeyframeInterpolation::Interpolate(
        __int64 a1,
        double a2,
        __int64 a3,
        struct _D3DCOLORVALUE *a4,
        unsigned int *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v6; // edx
  float v7; // xmm1_4
  int v8; // edx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  char *v13; // rax
  char v14; // al
  void *retaddr; // [rsp+48h] [rbp+8h]

  v6 = *(_DWORD *)(a1 + 16);
  if ( !v6 )
    goto LABEL_2;
  v8 = v6 - 1;
  if ( v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
LABEL_2:
          v7 = a2;
          KeyframeInterpolation::ExpressionValueLerp(a3, v7, (__int64)a4, a5, (__int64)a6);
          return;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr, a3);
          v13 = (char *)a5;
          if ( a2 < 1.0 )
            v13 = (char *)a4;
          v14 = *v13;
          LODWORD(a6[4].b) = 17;
          LOBYTE(a6->r) = v14;
          LOBYTE(a6[4].a) = 1;
        }
        else
        {
          InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, (struct _D3DCOLORVALUE *)a5, a6);
        }
      }
      else
      {
        InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, (struct _D3DCOLORVALUE *)a5, a6);
      }
    }
    else
    {
      KeyframeInterpolation::InterpolateHsl(a1, v9, a4, a5, a6);
    }
  }
  else
  {
    KeyframeInterpolation::InterpolateSpherical(a1, (unsigned int)a3, a4, a5, a6);
  }
}
