/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801B35B8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18005B8B0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1801B5078 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  float v4; // xmm2_4
  int v5; // r9d
  __int64 i; // rbx
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // r11

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(float *)(a1 + 44);
  v5 = a2;
  for ( i = a1; v3 < v2; *(_DWORD *)(v9 + 12) = a1 )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      *(_DWORD *)(i + 40),
      v5,
      *(_QWORD *)(i + 56) + (int)(v3 * *(_DWORD *)(i + 64)));
    ++v3;
    result = (unsigned int)(int)(float)(unsigned __int8)*(_DWORD *)(v7 + 12);
    LODWORD(a1) = result | (((int)(float)(unsigned __int8)BYTE1(*(_DWORD *)(v7 + 12)) | (((int)(float)(unsigned __int8)BYTE2(*(_DWORD *)(v7 + 12)) | ((int)(float)((float)HIBYTE(*(_DWORD *)(v7 + 12)) * v4) << 8)) << 8)) << 8);
  }
  return result;
}
