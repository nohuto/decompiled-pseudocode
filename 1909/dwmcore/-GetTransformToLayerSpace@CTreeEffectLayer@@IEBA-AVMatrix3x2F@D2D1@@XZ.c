/*
 * XREFs of ?GetTransformToLayerSpace@CTreeEffectLayer@@IEBA?AVMatrix3x2F@D2D1@@XZ @ 0x18017C080
 * Callers:
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x18000E00C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CTreeEffectLayer::GetTransformToLayerSpace(__int64 a1, D2D1::Matrix3x2F *a2)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  int v4; // eax
  __m128i v5; // xmm0
  int v6; // eax
  __int64 v7; // r9
  _DWORD v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v11; // [rsp+48h] [rbp-20h]
  float v12; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(float *)(a1 + 272);
  v3 = *(float *)(a1 + 276);
  v4 = *(_DWORD *)(a1 + 16);
  v9[1] = 0;
  v9[2] = 0;
  v10 = _xmm;
  v5 = _mm_cvtsi32_si128(-v4);
  v6 = *(_DWORD *)(a1 + 20);
  *(float *)v9 = v2;
  v11 = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)&v9[3] = v3;
  v12 = (float)-v6;
  *(float *)&v9[4] = 0.0 - (float)(v2 * 0.0);
  *(float *)&v9[5] = 0.0 - (float)(v3 * 0.0);
  D2D1::Matrix3x2F::SetProduct(a2, (const struct D2D1::Matrix3x2F *)&v10, (const struct D2D1::Matrix3x2F *)v9);
  return v7;
}
