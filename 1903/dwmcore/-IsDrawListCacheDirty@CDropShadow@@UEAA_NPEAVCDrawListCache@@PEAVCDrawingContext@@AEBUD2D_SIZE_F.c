/*
 * XREFs of ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000DC30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000DCB0 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180052F40 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 */

bool __fastcall CDropShadow::IsDrawListCacheDirty(
        CDropShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  struct CVisual *CurrentVisual; // rax
  unsigned __int64 v10; // rdx

  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a3 + 8));
  v10 = *((_QWORD *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual) + 7);
  return !v10 || v10 > *((_QWORD *)a2 + 3) || CSpriteVisualContent::IsDrawListCacheDirty(this, a2, a3, a4, a5);
}
