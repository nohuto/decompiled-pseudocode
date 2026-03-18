/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180007B68
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18003ADA0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005D080 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180006F9C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800072C8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1800072C8.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007538 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180007838 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180007838.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180007F34 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x180007F90 (-GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA-AUD2D_MATRIX_3X2_F@@AEBVCMILMa.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180008008 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180008008.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180008428 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180008428.c)
 *     ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x180009960 (-GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800399A0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180041290 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180187F9C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180187F9C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801884A4 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801884A4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188960 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180188960.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188C90 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188D8C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_180188D8C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180188ECC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_180188ECC.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180189220 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180189348 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_180189348.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801894B8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801894B8.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        CDrawListPrimitive *this,
        Windows::Foundation::Numerics *a2,
        struct Windows::Foundation::Numerics::float4x4 *a3,
        float a4,
        __int64 *a5)
{
  int v5; // r14d
  __int64 v7; // rdx
  char v9; // bl
  _BYTE *v10; // r9
  __int64 v11; // r15
  bool v12; // al
  CMILMatrix *v13; // r9
  unsigned int *v14; // r10
  char v15; // r11
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  __int64 result; // rax
  float v20; // xmm1_4
  CMILMatrix *v21; // r10
  __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  int v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+2Ch] [rbp-D4h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int128 v26; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+4Ch] [rbp-B4h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32[2]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  __int64 v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+94h] [rbp-6Ch]
  int v38; // [rsp+98h] [rbp-68h]
  float v39; // [rsp+9Ch] [rbp-64h]
  char v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  _BYTE v44[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+100h] [rbp+0h]
  struct D2D_MATRIX_3X2_F v46; // [rsp+110h] [rbp+10h] BYREF

  v5 = *((_DWORD *)this + 3);
  v7 = *((unsigned int *)this + 2);
  v9 = *((_BYTE *)this + 97);
  v32[0] = *((_QWORD *)this + 5);
  v32[1] = *((_QWORD *)this + 3);
  v35 = *((_QWORD *)this + 4);
  v33 = 8 * v5 + 16;
  v36 = v33;
  v10 = 0LL;
  v11 = *a5;
  v42 = *((_DWORD *)a5 + 2);
  v43 = *((_DWORD *)a5 + 3);
  v39 = a4;
  v34 = v7;
  v37 = v7;
  v38 = v5;
  v40 = v9;
  v41 = v11;
  v45 = 0;
  if ( !(_BYTE)a3 )
  {
    v45 = *((_DWORD *)a2 + 16);
    v12 = Windows::Foundation::Numerics::invert(a2, (const struct Windows::Foundation::Numerics::float4x4 *)v44, a3);
    LOWORD(v45) = v45 & 0xCCF;
    v45 = v12 ? v45 : 0;
    CMILMatrix::Transpose((CMILMatrix *)v44);
    v10 = v44;
  }
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a2, v7, a3, v10) )
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(this, &v46, a2);
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v46.m11 - v46.m22)) & _xmm);
    if ( v16 > 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v46.m12 - COERCE_FLOAT(LODWORD(v46.m21) ^ _xmm))) & _xmm) > 0.0000011920929
      || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v46.m21 * v46.m21)
                                                                  + (float)(v46.m11 * v46.m11))
                                                          - 1.0)) & _xmm),
          v17 >= 0.0000011920929) )
    {
      v23 = 0;
      v24 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 1065353216LL;
      v27 = 1065353216;
      v22 = *(_QWORD *)&v46.m11;
      v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v25 = *(_QWORD *)&v46.m[1][0];
      v26 = 0LL;
      v29 = *(_QWORD *)&v46.m[2][0];
      if ( v20 < 0.0000011920929 )
      {
        if ( v15 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            (unsigned int *)&v22,
            v14,
            v13);
        else
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            &v22,
            v14);
      }
      else if ( v15 )
      {
        if ( v9 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            (unsigned int *)&v22,
            v14,
            v13);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            &v22,
            v14);
      }
      else if ( v9 )
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v32,
          &v22,
          v14);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v32,
          &v22,
          v14);
      }
      result = *((unsigned int *)this + 2);
      dword_1803081B8 += result;
    }
    else
    {
      v23 = 0;
      v24 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 1065353216LL;
      v27 = 1065353216;
      v22 = *(_QWORD *)&v46.m11;
      v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm);
      v25 = *(_QWORD *)&v46.m[1][0];
      v26 = 0LL;
      v29 = *(_QWORD *)&v46.m[2][0];
      if ( v18 >= 0.0000011920929 )
      {
        if ( v15 )
        {
          if ( v9 )
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v32,
              &v22,
              v14);
          else
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
              v32,
              &v22,
              v14);
        }
        else if ( v9 )
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            &v22,
            v14);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
            v32,
            &v22,
            v14);
        }
      }
      else if ( v15 )
      {
        VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v32,
          &v22,
          v14);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
          v32,
          &v22,
          v14);
      }
      result = *((unsigned int *)this + 2);
      dword_1803081B4 += result;
    }
  }
  else
  {
    CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(this, &v22, a2);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - 1.0)) & _xmm) < 0.0000011920929 )
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        (__int64)v32,
        (CMILMatrix *)&v22,
        v21);
    }
    else if ( v9 )
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        (__int64)v32,
        (__int64)&v22,
        v21);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        v32,
        &v22,
        v21);
    }
    result = *((unsigned int *)this + 2);
    dword_1803081BC += result;
  }
  return result;
}
