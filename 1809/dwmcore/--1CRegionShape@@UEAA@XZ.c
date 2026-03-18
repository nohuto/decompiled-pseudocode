/*
 * XREFs of ??1CRegionShape@@UEAA@XZ @ 0x18009266C
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180011A20 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800140C0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180092630 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800926AC (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800B1144 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180190EA0 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDD4C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BE164 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18021D710 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800122B4 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRegionShape::~CRegionShape(CRegionShape *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)this + 11);
  FastRegion::CRegion::FreeMemory((void **)this + 2);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
