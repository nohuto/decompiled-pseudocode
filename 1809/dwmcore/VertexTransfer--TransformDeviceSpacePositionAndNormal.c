/*
 * XREFs of VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180007470
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180006F9C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800072C8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1800072C8.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188960 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180188960.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188C90 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188D8C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_180188D8C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188ECC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_180188ECC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180189220 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180189348 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_180189348.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801894B8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801894B8.c)
 * Callees:
 *     ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000878C (-XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180009918 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

unsigned __int16 __fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  float v5; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  __int64 v8; // r9
  _DWORD *v9; // r11
  unsigned __int16 result; // ax
  unsigned __int16 *v11; // r9
  __int64 v12; // r11
  float v13[3]; // [rsp+20h] [rbp-28h] BYREF
  float v14; // [rsp+2Ch] [rbp-1Ch]

  if ( this )
  {
    CMILMatrix::TransformIgnoreZW(this, a1, (struct MilPoint4F *)v13, a4);
    v5 = v14;
    v6 = v13[2];
    v7 = v13[1] / v14;
    *(float *)(v8 + 16) = v13[0] / v14;
    *(float *)(v8 + 20) = v7;
    v4 = v6 / v5;
    *(float *)(v8 + 24) = v4;
    *(_DWORD *)(v8 + 32) = *v9;
    *(_DWORD *)(v8 + 36) = v9[1];
    *(_DWORD *)(v8 + 40) = v9[2];
    *(_DWORD *)(v8 + 44) = v9[3];
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    *(_QWORD *)(a4 + 20) = LODWORD(a1->y);
    *(_OWORD *)(a4 + 32) = _xmm;
  }
  do
  {
    result = DirectX::PackedVector::XMConvertFloatToHalf((DirectX::PackedVector *)a1, v4);
    *v11 = result;
  }
  while ( v12 != 1 );
  return result;
}
