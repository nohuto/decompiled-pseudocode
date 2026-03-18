/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJ_NAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005293C
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x1801D2C78 (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800529BC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
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
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inserted, 0x7Bu, 0LL);
    }
    else
    {
      v10 = *((_OWORD *)a3 + 1);
      v15[0] = *(_OWORD *)a3;
      v15[1] = v10;
      v11 = CDrawListEntryBuilder::InsertHW(this, v15, v6, a5);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x7Fu, 0LL);
    }
  }
  return v5;
}
