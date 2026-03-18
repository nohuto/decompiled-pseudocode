/*
 * XREFs of ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180015740
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800669C0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180057428 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18007AC8C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GetDrawListGeneratorNoRef(
        CPrimitiveGroupDrawListGenerator **this,
        struct CDrawingContext *a2,
        struct CPrimitiveGroupDrawListGenerator **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx

  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x23Cu, 0LL);
  }
  else
  {
    v9 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(this[20], a2);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x23Du, 0LL);
    else
      *a3 = this[20];
  }
  return v8;
}
