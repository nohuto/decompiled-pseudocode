/*
 * XREFs of ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x180052F04
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180052254 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
      && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12)
      && *(_BYTE *)(a1 + 16) == *(_BYTE *)(a2 + 16);
}
