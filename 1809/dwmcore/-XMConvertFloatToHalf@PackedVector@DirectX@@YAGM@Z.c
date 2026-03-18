/*
 * XREFs of ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x18000878C
 * Callers:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180007470 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007538 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007838 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180007838.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180008008 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180008008.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180008428 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180008428.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180187F9C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180187F9C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801884A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801884A4.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  int v2; // xmm0_4
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // edx

  v3 = v2 & 0x7FFFFFFF;
  if ( (v2 & 0x7FFFFFFFu) > 0x477FE000 )
  {
    v4 = (v2 & 0x7FFFFF) != 0 && (v2 & 0x7F800000) == 2139095040 ? 0x7FFF : 31744;
  }
  else
  {
    LOWORD(v4) = 0;
    if ( v3 )
    {
      if ( v3 < 0x38800000 )
        v5 = (v2 & 0x7FFFFF | 0x800000u) >> (113 - (v3 >> 23));
      else
        v5 = v3 - 939524096;
      v4 = ((((v5 >> 13) & 1) + v5 + 4095) >> 13) & 0x7FFF;
    }
  }
  return HIWORD(v2) & 0x8000 | v4;
}
