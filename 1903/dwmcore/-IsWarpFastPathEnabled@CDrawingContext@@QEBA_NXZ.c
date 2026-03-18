/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800D2B90
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  __int64 v1; // r10
  const struct CMILMatrix *TopByReference; // rax
  __int64 v4; // r11

  LOBYTE(v1) = 0;
  if ( *((_BYTE *)this + 6353) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
    {
      if ( (*(_DWORD *)(v4 + 768) != (_DWORD)v1 || *(_DWORD *)(v4 + 696) <= (unsigned int)v1)
        && *(_QWORD *)(v4 + 3512) == v1 )
      {
        LOBYTE(v1) = 1;
      }
    }
  }
  return v1;
}
