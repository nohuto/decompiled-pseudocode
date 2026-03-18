/*
 * XREFs of ?D3DXVec4Normalize@@YAPEAUD2DVector4@@PEAU1@PEBU1@@Z @ 0x18021A3B0
 * Callers:
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1801D17E0 (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801D9248 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x180069684 (WithinEpsilon_0.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     ??KD2DVector4@@QEBA?AU0@M@Z @ 0x1802187B4 (--KD2DVector4@@QEBA-AU0@M@Z.c)
 */

struct D2DVector4 *__fastcall D3DXVec4Normalize(struct D2DVector4 *a1, const struct D2DVector4 *a2)
{
  float v4; // xmm3_4
  struct D2DVector4 *v5; // rdx
  __int128 v6; // xmm0
  float v7; // xmm0_4
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = (float)((float)((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
             + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a2 + 3));
  if ( !WithinEpsilon_0(v4, 1.0) )
  {
    if ( v4 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
      return a1;
    }
    v7 = sqrtf_0(v4);
    v6 = *D2DVector4::operator/((float *)a2, &v9, v7);
    goto LABEL_6;
  }
  if ( a1 != v5 )
  {
    v6 = *(_OWORD *)v5;
LABEL_6:
    *(_OWORD *)a1 = v6;
  }
  return a1;
}
