/*
 * XREFs of ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18021D8EC
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801BB4FC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::Is2DAffine(Matrix3x3 *this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm2_4
  bool result; // al

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm);
  result = 0;
  if ( v1 < 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm);
    if ( v2 < 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
      if ( v3 < 0.0000011920929 )
        return 1;
    }
  }
  return result;
}
