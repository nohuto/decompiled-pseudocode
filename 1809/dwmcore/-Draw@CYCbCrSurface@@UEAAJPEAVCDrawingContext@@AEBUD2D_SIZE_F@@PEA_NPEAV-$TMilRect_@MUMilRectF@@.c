/*
 * XREFs of ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BA400
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180164C00 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::Draw(__int64 a1, CDrawingContext *a2, __int64 a3, bool *a4)
{
  bool v4; // bl
  struct CResource *v6; // rdx
  unsigned int v9; // r10d
  struct CResource *v10; // rax
  struct CResource *v11; // r8

  v4 = 0;
  v6 = *(struct CResource **)(a1 + 56);
  v9 = 0;
  v10 = v6;
  if ( v6 )
  {
    v11 = *(struct CResource **)(a1 + 64);
    if ( v11 )
    {
      v9 = CDrawingContext::DrawYCbCrBitmap(a2, v6, v11, (enum D2D1_YCBCR_CHROMA_SUBSAMPLING)*(_DWORD *)(a1 + 72));
      v10 = *(struct CResource **)(a1 + 56);
    }
  }
  if ( v10 )
    v4 = *(_QWORD *)(a1 + 64) != 0LL;
  *a4 = v4;
  return v9;
}
