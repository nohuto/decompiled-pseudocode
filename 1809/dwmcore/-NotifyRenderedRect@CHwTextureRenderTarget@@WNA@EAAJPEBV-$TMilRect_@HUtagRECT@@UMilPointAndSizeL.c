/*
 * XREFs of ?NotifyRenderedRect@CHwTextureRenderTarget@@WNA@EAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F0F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::NotifyRenderedRect(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CGenericInk::AddOcclusionInformation((CGenericInk *)(a1 - 208), a2, a3);
}
