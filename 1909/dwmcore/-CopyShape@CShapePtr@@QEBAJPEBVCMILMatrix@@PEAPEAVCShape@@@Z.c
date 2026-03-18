/*
 * XREFs of ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800339F8
 * Callers:
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x180035B90 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x18006996C (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007D530 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShapePtr::CopyShape(CShape **this, const struct CMILMatrix *a2, struct CShape **a3)
{
  CShape *v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx

  v3 = *this;
  v4 = -2003292412;
  if ( v3 )
  {
    v5 = CShape::CopyShape(v3, a2, a3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x12Bu, 0LL);
  }
  return v4;
}
