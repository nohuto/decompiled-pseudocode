/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BD338
 * Callers:
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1801BD4A8 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 * Callees:
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // ebp
  float i; // xmm6_4
  _DWORD *v5; // rbx
  _DWORD *v6; // rdi
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0;
  for ( i = *(float *)(a1 + 44);
        v2 < v1;
        v6[3] = result | (((int)(float)(unsigned __int8)BYTE1(v5[3]) | (((int)(float)(unsigned __int8)BYTE2(v5[3]) | ((int)(float)((float)HIBYTE(v5[3]) * i) << 8)) << 8)) << 8) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 8) + (int)(v2 * *(_DWORD *)(a1 + 16)));
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 56) + (int)(v2 * *(_DWORD *)(a1 + 64)));
    memcpy_0(v6, v5, (unsigned int)(8 * *(_DWORD *)(a1 + 40) + 16));
    ++v2;
    result = (unsigned int)(int)(float)(unsigned __int8)v5[3];
  }
  return result;
}
