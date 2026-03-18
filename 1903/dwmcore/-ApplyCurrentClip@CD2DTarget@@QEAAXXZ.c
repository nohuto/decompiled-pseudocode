/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180026274
 * Callers:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180026090 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800260F4 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18004D1D8 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800262B8 (-D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  if ( *((_BYTE *)this + 56) )
  {
    if ( *((_BYTE *)this + 48) )
      CD2DContext::D2DSetWorldClip(
        *((CD2DContext **)this + 2),
        (const struct D2D_RECT_F *)((char *)this + 60),
        *((enum D2D1_ANTIALIAS_MODE *)this + 19));
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
  }
}
