/*
 * XREFs of ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@W4Enum@ShadowPath@@@Z @ 0x1801AD8D0 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@W4Enum@ShadowPath@@@Z.c)
 *     ?GetApproxBlurStage@CProjectedShadow@@AEBA?AW4Enum@ApproxBlurStage@@XZ @ 0x1801CA270 (-GetApproxBlurStage@CProjectedShadow@@AEBA-AW4Enum@ApproxBlurStage@@XZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801CA2E8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadow::GetFinalColor(
        CProjectedShadow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct CDrawingContext *a3)
{
  int ShadowPath; // ebx

  ShadowPath = CProjectedShadow::GetShadowPath(this, a3);
  CProjectedShadowCaster::GetColor(*((_QWORD *)this + 9), (__int64)retstr, ShadowPath);
  retstr->a = *((float *)this + 25) * retstr->a;
  if ( ShadowPath == 2 && (unsigned int)CProjectedShadow::GetApproxBlurStage((__int64)this) == 3 )
    retstr->a = (float)(CProjectedShadow::GetBlurForBoundary((__int64)this, 3).m128_f32[0] / *((float *)this + 24))
              * retstr->a;
  return retstr;
}
