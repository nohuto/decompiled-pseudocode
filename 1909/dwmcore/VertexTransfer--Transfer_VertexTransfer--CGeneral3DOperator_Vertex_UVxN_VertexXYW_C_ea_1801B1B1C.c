/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801B1B1C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800088D0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180008214 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180009550 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18000A108 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x180016528 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x1801B3764 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 */

__int16 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        CMILMatrix *a3)
{
  struct D2D_POINT_2F *v3; // r15
  CMILMatrix *v6; // rdx
  CMILMatrix *v7; // r8
  CMILMatrix *v8; // r9
  float v9; // xmm6_4
  unsigned int v10; // esi
  unsigned int v11; // r12d
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int128 v19; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v20[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v21; // [rsp+80h] [rbp-98h]
  __int64 v22; // [rsp+90h] [rbp-88h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v15 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v22, a2);
  v9 = *(float *)(a1 + 44);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_OWORD *)(v15 + 16);
  v20[0] = *(_OWORD *)v15;
  v20[1] = v12;
  v13 = *(_OWORD *)(v15 + 32);
  v14 = *(_OWORD *)(v15 + 48);
  LODWORD(v15) = *(_DWORD *)(v15 + 64);
  v20[2] = v13;
  v20[3] = v14;
  v21 = v15;
  v19 = _xmm;
  if ( v7 && v8 )
  {
    v15 = (__int64)CalculateTBNFrameFrom3Vertices(
                     (struct D2DQuaternion *)&v19,
                     (__int64)v3,
                     (__int64 *)(a1 + 8),
                     v7,
                     v8);
    v6 = (CMILMatrix *)a2;
    v19 = *(_OWORD *)v15;
  }
  if ( v11 )
  {
    do
    {
      v16 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v10);
      v17 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v10);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v20,
        (const struct D2D_POINT_2F *)v16,
        (const struct D2D_POINT_2F *)(*(_QWORD *)(a1 + 24) + (int)(v10 * *(_DWORD *)(a1 + 32))),
        *(_DWORD *)(a1 + 40),
        v6,
        (char *)v17);
      *(_DWORD *)(v17 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v16 + 12), v9);
      LOWORD(v15) = VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, a3, (__int64)&v19, v17);
      v6 = (CMILMatrix *)a2;
      ++v3;
      ++v10;
    }
    while ( v10 < v11 );
  }
  return v15;
}
