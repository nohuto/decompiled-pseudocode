/*
 * XREFs of ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FBAD0
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EC9E8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 *     ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F32F0 (-GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18021C2DC (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CViewBox::GetRealization(
        const struct D2D_SIZE_F *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7; // xmm2_4
  int v8; // xmm1_4
  float *v9; // r8
  __int64 v10; // xmm1_8
  float v11[6]; // [rsp+30h] [rbp-50h] BYREF
  struct D2D_RECT_F v12; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this[28].width) & _xmm);
  if ( v5 < 0.0000011920929 || (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(this[28].height) & _xmm), v6 < 0.0000011920929) )
  {
    *(_OWORD *)&a3->m11 = _xmm;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  else
  {
    StretchAlign::Arrange((StretchAlign *)&this[29], &v12, this + 28, a2, 0LL);
    v7 = LODWORD(this[27].width) ^ _xmm;
    v8 = LODWORD(this[27].height) ^ _xmm;
    v11[1] = 0.0;
    v11[2] = 0.0;
    v14 = _xmm;
    v16 = v8;
    v15 = v7;
    v11[4] = v12.left;
    v11[0] = (float)(v12.right - v12.left) / *v9;
    v11[5] = v12.top;
    v11[3] = (float)(v12.bottom - v12.top) / this[28].height;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)&v14,
      (const struct D2D1::Matrix3x2F *)v11);
    v10 = v13;
    *(struct D2D_RECT_F *)&a3->m11 = v12;
    *(_QWORD *)&a3->m[2][0] = v10;
  }
}
