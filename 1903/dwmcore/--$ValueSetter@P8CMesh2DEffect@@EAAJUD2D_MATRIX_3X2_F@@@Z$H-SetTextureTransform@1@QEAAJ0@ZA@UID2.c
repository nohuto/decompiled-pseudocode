/*
 * XREFs of ??$ValueSetter@P8CMesh2DEffect@@EAAJUD2D_MATRIX_3X2_F@@@Z$H?SetTextureTransform@1@QEAAJ0@ZA@UID2D1EffectImpl@@@@YAJPEAUIUnknown@@PEBEI@Z @ 0x18022C710
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTextureTransform@CMesh2DEffect@@QEAAJUD2D_MATRIX_3X2_F@@@Z @ 0x1800DB22C (-SetTextureTransform@CMesh2DEffect@@QEAAJUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_3X2_F),{public: long CMesh2DEffect::SetTextureTransform(D2D_MATRIX_3X2_F),0},ID2D1EffectImpl>(
        CMesh2DEffect *a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // xmm1_8
  struct D2D_MATRIX_3X2_F v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 != 24 )
    return 2147942487LL;
  v4 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)&v5.m11 = *(_OWORD *)a2;
  *(_QWORD *)&v5.m[2][0] = v4;
  return CMesh2DEffect::SetTextureTransform(a1, &v5);
}
