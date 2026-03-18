/*
 * XREFs of ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x18002E4F8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18002CEC0 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
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
