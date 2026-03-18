/*
 * XREFs of ?RequiresNearPlaneClipping@@YA_NAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@@Z @ 0x1801E4224
 * Callers:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x1801E42B0 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RequiresNearPlaneClipping(const struct D2D_MATRIX_4X4_F *a1, const struct D2D_RECT_F *a2)
{
  float v2; // xmm5_4
  float _44; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  bool result; // al

  v2 = a1->_14 * a2->left;
  _44 = a1->_44;
  v4 = a1->_24 * a2->top;
  result = 1;
  if ( (float)((float)(v2 + v4) + _44) > 0.000099999997 )
  {
    v5 = a1->_24 * a2->bottom;
    if ( (float)((float)(v5 + v2) + _44) > 0.000099999997 )
    {
      v6 = a1->_14 * a2->right;
      if ( (float)((float)(v6 + v4) + _44) > 0.000099999997 && (float)((float)(v5 + v6) + _44) > 0.000099999997 )
        return 0;
    }
  }
  return result;
}
