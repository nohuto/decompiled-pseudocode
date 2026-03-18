/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180028814
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180190A38 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B765C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        char a2,
        const struct PrimitiveGeometryDesc *a3,
        const struct PrimitiveVertexAttributesDesc *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  unsigned int v5; // ebx
  const struct PrimitiveVertexAttributesDesc *v6; // r11
  const struct PrimitiveGeometryDesc *v7; // r10
  __int128 v10; // xmm1
  int v11; // eax
  unsigned int v12; // ecx
  int inserted; // eax
  unsigned int v14; // ecx
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( ((*((_BYTE *)a3 + 24) & 1) != 0 || !IsEmpty((const struct D2D_RECT_F *)a3)) && (*((_BYTE *)a3 + 24) & 6) != 0 )
  {
    if ( a2 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(this, v7, v6, a5);
      v5 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inserted, 0x62u);
    }
    else
    {
      v10 = *((_OWORD *)a3 + 1);
      v15[0] = *(_OWORD *)a3;
      v15[1] = v10;
      v11 = CDrawListEntryBuilder::InsertHW(this, v15, v6, a5);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x66u);
    }
  }
  return v5;
}
