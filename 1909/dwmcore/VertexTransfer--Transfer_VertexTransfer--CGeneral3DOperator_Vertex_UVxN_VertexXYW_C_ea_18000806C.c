/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18000806C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180008214 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000A108 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180016528 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        CMILMatrix *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // r15
  __int64 v6; // rax
  CMILMatrix *v7; // rdx
  CMILMatrix *v8; // r9
  float v9; // xmm6_4
  unsigned int v10; // esi
  unsigned int v11; // r12d
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int128 v20; // [rsp+38h] [rbp-110h] BYREF
  _OWORD v21[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v22; // [rsp+90h] [rbp-B8h]
  __int64 v23; // [rsp+A0h] [rbp-A8h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ(&v23);
  v9 = *(float *)(a1 + 44);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_OWORD *)(v6 + 16);
  v21[0] = *(_OWORD *)v6;
  v21[1] = v12;
  v13 = *(_OWORD *)(v6 + 32);
  v14 = *(_OWORD *)(v6 + 48);
  result = *(unsigned int *)(v6 + 64);
  v21[2] = v13;
  v21[3] = v14;
  v22 = result;
  v20 = _xmm;
  if ( v16 && v8 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v20, v8);
    v7 = a2;
    v20 = *(_OWORD *)result;
  }
  if ( v11 )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v10);
      v18 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v10);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v21,
        v7,
        v18);
      *(_DWORD *)(v18 + 12) = (int)(float)(unsigned __int8)*(_DWORD *)(v17 + 12) | (((int)(float)(unsigned __int8)BYTE1(*(_DWORD *)(v17 + 12)) | (((int)(float)(unsigned __int8)BYTE2(*(_DWORD *)(v17 + 12)) | ((int)(float)((float)HIBYTE(*(_DWORD *)(v17 + 12)) * v9) << 8)) << 8)) << 8);
      result = VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3);
      v7 = a2;
      ++v3;
      ++v10;
    }
    while ( v10 < v11 );
  }
  return result;
}
