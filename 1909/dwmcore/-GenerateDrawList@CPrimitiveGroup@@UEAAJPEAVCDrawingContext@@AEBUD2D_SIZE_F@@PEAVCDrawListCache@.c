/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800351B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180057428 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18007AC8C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  const struct D2D_MATRIX_3X2_F *v12; // r8
  int DrawList; // eax
  unsigned int v14; // ecx

  if ( !*((_QWORD *)this + 63) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xA1u, 0LL);
    return v9;
  }
  v10 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 20), a2);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA2u, 0LL);
    return v9;
  }
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
               *((CPrimitiveGroupDrawListGenerator **)this + 20),
               a2,
               v12,
               a4);
  v9 = DrawList;
  if ( DrawList < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, DrawList, 0xA3u, 0LL);
  else
    return 0;
  return v9;
}
