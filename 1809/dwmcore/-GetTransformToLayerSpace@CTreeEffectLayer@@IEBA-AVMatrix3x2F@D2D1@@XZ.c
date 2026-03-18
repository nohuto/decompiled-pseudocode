/*
 * XREFs of ?GetTransformToLayerSpace@CTreeEffectLayer@@IEBA?AVMatrix3x2F@D2D1@@XZ @ 0x18017BB98
 * Callers:
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18001005C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CTreeEffectLayer::GetTransformToLayerSpace(__int64 a1, D2D1::Matrix3x2F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm3_4
  unsigned int v6; // ecx
  __m128i v7; // xmm0
  int v8; // ecx
  _DWORD v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v11; // [rsp+48h] [rbp-20h]
  float v12; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(float *)(a1 + 272);
  v3 = *(float *)(a1 + 276);
  v9[1] = 0;
  v9[2] = 0;
  *(float *)v9 = v2;
  v6 = -*(_DWORD *)(a1 + 16);
  *(float *)&v9[3] = v3;
  *(float *)&v9[4] = 0.0 - (float)(v2 * 0.0);
  v10 = _xmm;
  v7 = _mm_cvtsi32_si128(v6);
  v8 = *(_DWORD *)(a1 + 20);
  *(float *)&v9[5] = 0.0 - (float)(v3 * 0.0);
  v11 = _mm_cvtepi32_ps(v7).m128_u32[0];
  v12 = (float)-v8;
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&v10, (const struct D2D1::Matrix3x2F *)v9);
}
