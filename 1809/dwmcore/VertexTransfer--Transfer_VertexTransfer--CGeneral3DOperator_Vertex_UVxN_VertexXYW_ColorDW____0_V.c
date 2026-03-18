/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180009618
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1800096EC (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180015624 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        CMILMatrix *a2,
        __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  _OWORD v14[4]; // [rsp+30h] [rbp-B8h] BYREF
  int i; // [rsp+70h] [rbp-78h]
  __int64 v16; // [rsp+80h] [rbp-68h] BYREF

  v5 = CMILMatrix::ComputeAdjointIgnoreZ(&v16, a2, a3);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v8 = *(_OWORD *)(v5 + 16);
  v14[0] = *(_OWORD *)v5;
  v14[1] = v8;
  v9 = *(_OWORD *)(v5 + 32);
  v10 = *(_OWORD *)(v5 + 48);
  result = *(unsigned int *)(v5 + 64);
  v14[2] = v9;
  v14[3] = v10;
  for ( i = result; v7 < v6; *(_DWORD *)(v13 + 12) = result )
  {
    v12 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v7);
    v13 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v7);
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform((CMILMatrix *)v14, a2, v13);
    result = *(unsigned int *)(v12 + 12);
    ++v7;
  }
  return result;
}
