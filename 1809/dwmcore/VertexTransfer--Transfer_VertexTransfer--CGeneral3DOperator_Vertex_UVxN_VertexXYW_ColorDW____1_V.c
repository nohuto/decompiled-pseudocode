/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180009304
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18003BBF0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1800096EC (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180015624 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801878E4 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

unsigned int __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        CMILMatrix *a2,
        __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  float v8; // xmm6_4
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int result; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  _OWORD v15[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int i; // [rsp+70h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-78h] BYREF

  v5 = CMILMatrix::ComputeAdjointIgnoreZ(&v17, a2, a3);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v8 = *(float *)(a1 + 44);
  v9 = *(_OWORD *)(v5 + 16);
  v15[0] = *(_OWORD *)v5;
  v15[1] = v9;
  v10 = *(_OWORD *)(v5 + 32);
  v11 = *(_OWORD *)(v5 + 48);
  result = *(_DWORD *)(v5 + 64);
  v15[2] = v10;
  v15[3] = v11;
  for ( i = result; v7 < v6; *(_DWORD *)(v14 + 12) = result )
  {
    v13 = *(_QWORD *)(a1 + 8) + (int)(v7 * *(_DWORD *)(a1 + 16));
    v14 = *(_QWORD *)(a1 + 56) + (int)(v7 * *(_DWORD *)(a1 + 64));
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform((CMILMatrix *)v15, a2, v14);
    result = BlendPremultipliedColorDW(*(_DWORD *)(v13 + 12), v8);
    ++v7;
  }
  return result;
}
