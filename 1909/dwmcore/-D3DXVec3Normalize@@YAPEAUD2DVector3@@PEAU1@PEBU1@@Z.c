/*
 * XREFs of ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C0FB8
 * Callers:
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C0EA0 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801E409C (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x1802017DC (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180208F38 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x180226E54 (-D2DMatrixRotationAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1802279D0 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x180231ED4 (_anonymous_namespace_--TransformAndNormalize.c)
 * Callees:
 *     WithinEpsilon_0 @ 0x1800C1080 (WithinEpsilon_0.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

struct D2DVector3 *__fastcall D3DXVec3Normalize(struct D2DVector3 *a1, const struct D2DVector3 *a2)
{
  __m128 v2; // xmm8
  __m128 v4; // xmm7
  float v5; // xmm9_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  float v8; // eax
  float v10; // xmm6_4

  v2 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v5 = *((float *)a2 + 2);
  v6 = (float)((float)(v4.m128_f32[0] * v4.m128_f32[0]) + (float)(v2.m128_f32[0] * v2.m128_f32[0])) + (float)(v5 * v5);
  if ( !(unsigned int)WithinEpsilon_0() )
  {
    if ( v6 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_DWORD *)a1 + 2) = 0;
      return a1;
    }
    v10 = 1.0 / sqrtf_0(v6);
    v4.m128_f32[0] = v4.m128_f32[0] * v10;
    v2.m128_f32[0] = v2.m128_f32[0] * v10;
    *(_QWORD *)a1 = _mm_unpacklo_ps(v4, v2).m128_u64[0];
    v8 = v5 * v10;
    goto LABEL_4;
  }
  if ( a1 != (struct D2DVector3 *)v7 )
  {
    *(_QWORD *)a1 = *(_QWORD *)v7;
    v8 = *(float *)(v7 + 8);
LABEL_4:
    *((float *)a1 + 2) = v8;
  }
  return a1;
}
