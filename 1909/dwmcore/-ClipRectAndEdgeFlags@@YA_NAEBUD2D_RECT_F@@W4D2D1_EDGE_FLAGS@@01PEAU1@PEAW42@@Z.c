/*
 * XREFs of ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180013F60
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipRectAndEdgeFlags(float *a1, int a2, float *a3, int a4, _OWORD *a5, int *a6)
{
  char v7; // al
  int v8; // edx
  float v10[6]; // [rsp+0h] [rbp-18h]

  if ( (float)(*a3 - *a1) > 0.0000011920929 )
  {
    v10[0] = *a3;
    v7 = 1;
  }
  else
  {
    v10[0] = *a1;
    v7 = 0;
  }
  v8 = v7 != 0 ? 0x3000000 : 0;
  if ( (float)(a3[1] - a1[1]) > 0.0000011920929 )
  {
    v10[1] = a3[1];
    v8 |= 3u;
  }
  else
  {
    v10[1] = a1[1];
  }
  if ( (float)(a1[2] - a3[2]) > 0.0000011920929 )
  {
    v10[2] = a3[2];
    v8 |= 0x300u;
  }
  else
  {
    v10[2] = a1[2];
  }
  if ( (float)(a1[3] - a3[3]) <= 0.0000011920929 )
  {
    v10[3] = a1[3];
  }
  else
  {
    v10[3] = a3[3];
    v8 |= 0x30000u;
  }
  *a5 = *(_OWORD *)v10;
  *a6 = a4 & v8 | a2 & ~v8;
  return v8 != 0;
}
