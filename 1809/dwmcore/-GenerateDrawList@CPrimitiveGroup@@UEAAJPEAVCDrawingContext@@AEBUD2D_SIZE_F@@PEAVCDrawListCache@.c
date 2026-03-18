/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180029400
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18002CEC0 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180065C24 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1800EF60C (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  int v9; // r9d
  int DrawList; // eax
  const struct D2D_MATRIX_3X2_F *v11; // r8
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 63) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  if ( v7 >= 0 )
  {
    DrawList = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 20), a2);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v13 = 173;
      goto LABEL_9;
    }
    DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
                 *((CPrimitiveGroupDrawListGenerator **)this + 20),
                 a2,
                 v11,
                 a4);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v13 = 174;
LABEL_9:
      v9 = DrawList;
      goto LABEL_4;
    }
    return 0;
  }
  CPrimitiveGroup::ClearPrimitiveContent(this);
  v13 = 170;
  v9 = v7;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v13);
  return (unsigned int)v7;
}
