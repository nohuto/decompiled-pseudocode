/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B765C
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814 (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000E07C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180016534 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B5920 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  char v8; // r12
  char v9; // r13
  struct CPrimitiveColor *v10; // r15
  float v11; // xmm6_4
  float v12; // xmm0_4
  CCpuClip *v13; // rcx
  int appended; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v23; // ecx
  const struct D2D_MATRIX_3X2_F *v24; // rdx

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a3 )
    v10 = *(struct CPrimitiveColor **)(a3 + 24);
  if ( CCommonRegistryData::m_fEnableMegaRects && (*(_BYTE *)(a1 + 24) & 1) != 0 && (*(_BYTE *)(a2 + 24) & 1) == 0 )
  {
    v11 = FLOAT_1_0;
    v12 = FLOAT_1_0;
    if ( a4 )
    {
      v11 = sqrtf_0((float)(*a4 * *a4) + (float)(a4[1] * a4[1]));
      v12 = sqrtf_0((float)(a4[2] * a4[2]) + (float)(a4[3] * a4[3]));
    }
    if ( (float)((float)((float)(*(float *)(a2 + 12) - *(float *)(a2 + 4)) * v12)
               * (float)((float)(*(float *)(a2 + 8) - *(float *)a2) * v11)) > (float)(int)CCommonRegistryData::m_dwMegaRectSize )
    {
      if ( (v13 = *(CCpuClip **)(a1 + 16), !*(_QWORD *)v13) && !*((_QWORD *)v13 + 2)
        || CCpuClip::IsAxisAlignedRectangle(v13)
        && (!a4 || D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, v24)) )
      {
        if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
        {
          BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                    (CDrawListEntryBuilder *)a1,
                                    0,
                                    0LL,
                                    0LL);
          v16 = BuiltHWPrimitiveEntry;
          if ( BuiltHWPrimitiveEntry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, BuiltHWPrimitiveEntry, 0xA1u);
            return v16;
          }
        }
        v8 = 1;
        if ( (*(_BYTE *)(a2 + 24) & 6) == 6 )
        {
          v9 = 1;
          *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0xF9 | 2;
        }
      }
    }
  }
  appended = CDrawListEntryBuilder::AppendHWPrimitive(
               (CDrawListEntryBuilder *)a1,
               (const struct PrimitiveGeometryDesc *)a2,
               (const struct PrimitiveVertexAttributesDesc *)a3,
               (const struct D2D1::Matrix3x2F *)a4);
  v16 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, appended, 0xB1u);
  }
  else if ( (*(_DWORD *)(a1 + 2272) >= 0xC8u || v10 || v8)
         && (v18 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                     (CDrawListEntryBuilder *)a1,
                     v8,
                     v10,
                     (const struct _D3DCOLORVALUE *)(a3 & -(__int64)(v10 != 0LL))),
             v16 = v18,
             v18 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xC1u);
  }
  else if ( v9 )
  {
    *(_BYTE *)(a2 + 24) &= ~2u;
    *(_BYTE *)(a2 + 24) |= 4u;
    v20 = CDrawListEntryBuilder::AppendHWPrimitive(
            (CDrawListEntryBuilder *)a1,
            (const struct PrimitiveGeometryDesc *)a2,
            (const struct PrimitiveVertexAttributesDesc *)a3,
            (const struct D2D1::Matrix3x2F *)a4);
    v16 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC9u);
  }
  return v16;
}
