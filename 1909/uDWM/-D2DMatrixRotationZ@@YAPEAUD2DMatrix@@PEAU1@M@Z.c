/*
 * XREFs of ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800B8180
 * Callers:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180003008 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180012590 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180019E74 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     cosf_0 @ 0x18004FABE (cosf_0.c)
 *     sinf_0 @ 0x18004FB1E (sinf_0.c)
 */

struct D2DMatrix *__fastcall D2DMatrixRotationZ(struct D2DMatrix *a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  struct D2DMatrix *result; // rax

  v3 = sinf_0(a2);
  v4 = cosf_0(a2);
  *((float *)a1 + 1) = v3;
  *((_DWORD *)a1 + 4) = LODWORD(v3) ^ _xmm;
  *((_QWORD *)a1 + 5) = 1065353216LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  result = a1;
  *(float *)a1 = v4;
  *((float *)a1 + 5) = v4;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_DWORD *)a1 + 14) = 0;
  return result;
}
