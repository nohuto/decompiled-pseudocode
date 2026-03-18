/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x180035388
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180039AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
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
