/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800BECF0
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x1800BF3E8 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800BF3E8.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

int __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *a1,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        bool a4,
        struct CImageSource *a5,
        struct D2D_RECT_F *a6,
        float a7)
{
  struct D2D_RECT_F v8; // [rsp+50h] [rbp-28h] BYREF

  v8 = *a6;
  return CRenderData::DrawImageResource_FillMode(a1, a2, a3, a4, a5, 0LL, &v8, a7, 0LL);
}
