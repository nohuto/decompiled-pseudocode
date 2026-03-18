/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B215C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180064340 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C21E4 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801B3764 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

int __fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  float i; // xmm6_4
  __int64 v8; // rdi
  __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  float v12; // [rsp+78h] [rbp+20h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  for ( i = *(float *)(a1 + 44); v4 < v3; *(_DWORD *)(v9 + 12) = (_DWORD)v2 )
  {
    v8 = *(_QWORD *)(a1 + 8) + (int)(v4 * *(_DWORD *)(a1 + 16));
    v9 = *(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64));
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (float *)v8,
      *(_QWORD *)(a1 + 24) + (int)(v4 * *(_DWORD *)(a1 + 32)),
      *(_DWORD *)(a1 + 40),
      a2,
      (float *)v9,
      &v12);
    *(_DWORD *)(v9 + 8) = 1065353216;
    LODWORD(v2) = BlendPremultipliedColorDW(*(_DWORD *)(v8 + 12), i);
    ++v4;
  }
  return (int)v2;
}
