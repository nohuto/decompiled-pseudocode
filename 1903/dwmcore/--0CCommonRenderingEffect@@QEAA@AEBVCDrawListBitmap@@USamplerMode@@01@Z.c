/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073B38
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180073470 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180073C40 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     IsWhitePixelOptimizationCandidate @ 0x180073CD8 (IsWhitePixelOptimizationCandidate.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x1800C0FD0 (--0CDrawListBitmap@@QEAA@XZ.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  char v5; // bl
  CDrawListBitmap *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  char v14; // al

  v5 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v9 = (CDrawListBitmap *)(a1 + 16);
  v10 = 2LL;
  v11 = 2LL;
  do
  {
    CDrawListBitmap::CDrawListBitmap(v9);
    v9 = (CDrawListBitmap *)((char *)v9 + 24);
    --v11;
  }
  while ( v11 );
  v12 = a1 + 64;
  do
  {
    *(_WORD *)v12 = 257;
    *(_BYTE *)(v12 + 2) = 1;
    v12 += 3LL;
    --v10;
  }
  while ( v10 );
  CDrawListBitmap::operator=(a1 + 16, a2);
  CDrawListBitmap::operator=(a1 + 40, a4);
  *(_WORD *)(a1 + 64) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  if ( !*a2 || (v13 = (unsigned __int8)IsWhitePixelOptimizationCandidate(a2, 0LL) == 0, v14 = 0, !v13) )
    v14 = 1;
  *(_BYTE *)(a1 + 70) = v14;
  if ( !*a4 || (unsigned __int8)IsWhitePixelOptimizationCandidate(a4, 1LL) )
    v5 = 1;
  *(_BYTE *)(a1 + 70) &= v5;
  return a1;
}
