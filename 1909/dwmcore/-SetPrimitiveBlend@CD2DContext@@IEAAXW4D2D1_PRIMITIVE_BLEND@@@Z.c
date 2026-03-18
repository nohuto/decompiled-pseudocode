/*
 * XREFs of ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180054538
 * Callers:
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800542D4 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18015FD60 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180160D04 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetPrimitiveBlend(CD2DContext *this, enum D2D1_PRIMITIVE_BLEND a2)
{
  if ( a2 != *((_DWORD *)this + 109) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 624LL))(*((_QWORD *)this + 29));
    *((_DWORD *)this + 109) = a2;
  }
}
