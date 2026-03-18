/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800529BC
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005293C (-Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001113C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180018E34 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  char v4; // bp
  bool v5; // r13
  float *v10; // rax
  struct CPrimitiveColor *v11; // r12
  char v12; // bp
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  CCpuClip *v18; // rcx
  int appended; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  const struct D2D_MATRIX_3X2_F *v29; // rdx
  int v30; // eax
  unsigned int v31; // ecx
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v33; // ecx

  v4 = 0;
  v5 = 0;
  if ( !a3 )
  {
    v11 = 0LL;
LABEL_3:
    if ( *(_BYTE *)(a1 + 2298) )
    {
      if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
      {
        BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                  (CDrawListEntryBuilder *)a1,
                                  0,
                                  0LL,
                                  0LL);
        v21 = BuiltHWPrimitiveEntry;
        if ( BuiltHWPrimitiveEntry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, BuiltHWPrimitiveEntry, 0xB5u, 0LL);
          return v21;
        }
      }
      *(_BYTE *)(a1 + 2298) = 0;
    }
    goto LABEL_4;
  }
  v10 = *(float **)(a3 + 32);
  v11 = *(struct CPrimitiveColor **)(a3 + 24);
  if ( !v10 )
    goto LABEL_3;
  if ( !*(_BYTE *)(a1 + 2298) || *(float *)(a1 + 2280) != *v10 || *(float *)(a1 + 2284) != v10[1] )
  {
    if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
    {
      v30 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry((CDrawListEntryBuilder *)a1, 0, 0LL, 0LL);
      v21 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xAAu, 0LL);
        return v21;
      }
    }
    *(_BYTE *)(a1 + 2298) = 1;
    *(_QWORD *)(a1 + 2280) = **(_QWORD **)(a3 + 32);
  }
LABEL_4:
  if ( CCommonRegistryData::m_fEnableMegaRects && (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v12 = *(_BYTE *)(a2 + 24);
    if ( (v12 & 1) != 0 )
    {
LABEL_25:
      v4 = 0;
      goto LABEL_15;
    }
    v13 = *(float *)a2;
    v14 = *(float *)(a2 + 4);
    v15 = *(float *)(a2 + 8);
    v16 = *(float *)(a2 + 12);
    if ( a4 )
    {
      if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, (const struct D2D_MATRIX_3X2_F *)a2) )
      {
        v17 = 0.0;
LABEL_9:
        if ( v17 > (float)(int)CCommonRegistryData::m_dwMegaRectSize )
        {
          if ( (v18 = *(CCpuClip **)(a1 + 16), !*(_QWORD *)v18) && !*((_QWORD *)v18 + 2)
            || CCpuClip::IsAxisAlignedRectangle(v18)
            && (!a4 || D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, v29)) )
          {
            if ( (__int64)(*(_QWORD *)(a1 + 2192) - *(_QWORD *)(a1 + 2184)) >> 1 )
            {
              v27 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry((CDrawListEntryBuilder *)a1, 0, 0LL, 0LL);
              v21 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xD2u, 0LL);
                return v21;
              }
            }
            v5 = 1;
            if ( (v12 & 6) == 6 )
            {
              *(_BYTE *)(a2 + 24) = v12 & 0xF9 | 2;
              v4 = 1;
              goto LABEL_15;
            }
          }
        }
        goto LABEL_25;
      }
      v13 = (float)(a4[2] * v14) + (float)(*a4 * *(float *)a2);
      v15 = (float)(a4[2] * v16) + (float)(*a4 * *(float *)(a2 + 8));
      v14 = (float)(a4[3] * v14) + (float)(a4[1] * *(float *)a2);
      v16 = (float)(a4[3] * v16) + (float)(a4[1] * *(float *)(a2 + 8));
    }
    v17 = (float)(fmaxf(v14, v16) - fminf(v14, v16)) * (float)(fmaxf(v13, v15) - fminf(v13, v15));
    goto LABEL_9;
  }
LABEL_15:
  appended = CDrawListEntryBuilder::AppendHWPrimitive(
               (CDrawListEntryBuilder *)a1,
               (const struct PrimitiveGeometryDesc *)a2,
               (const struct PrimitiveVertexAttributesDesc *)a3,
               (const struct D2D1::Matrix3x2F *)a4);
  v21 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, appended, 0xE2u, 0LL);
  }
  else if ( (*(_DWORD *)(a1 + 2272) >= 0xC8u || v11 || v5)
         && (v23 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                     (CDrawListEntryBuilder *)a1,
                     v5,
                     v11,
                     (const struct _D3DCOLORVALUE *)(a3 & -(__int64)(v11 != 0LL))),
             v21 = v23,
             v23 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xF2u, 0LL);
  }
  else if ( v4 )
  {
    *(_BYTE *)(a2 + 24) = *(_BYTE *)(a2 + 24) & 0xF9 | 4;
    v25 = CDrawListEntryBuilder::AppendHWPrimitive(
            (CDrawListEntryBuilder *)a1,
            (const struct PrimitiveGeometryDesc *)a2,
            (const struct PrimitiveVertexAttributesDesc *)a3,
            (const struct D2D1::Matrix3x2F *)a4);
    v21 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xFAu, 0LL);
  }
  return v21;
}
