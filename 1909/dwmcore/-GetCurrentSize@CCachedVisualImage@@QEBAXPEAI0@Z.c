/*
 * XREFs of ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004F984
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18005207C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x1801C7B20 (-GetSize@CCachedVisualImage@@UEBAXPEAI0@Z.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C7B40 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801C7E5C (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FA40 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CCachedVisualImage::GetCurrentSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+20h] [rbp-28h]
  float v9[4]; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( (int)CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v9) >= 0 )
  {
    v5 = (float)(v9[2] - v9[0]) + 6291456.25;
    v7 = v5;
    v6 = v9[3] - v9[1];
    *a2 = (int)(LODWORD(v7) << 10) >> 11;
    v8 = v6 + 6291456.25;
    *a3 = (int)(LODWORD(v8) << 10) >> 11;
  }
}
