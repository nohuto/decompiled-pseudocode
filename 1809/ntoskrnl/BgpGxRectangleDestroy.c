/*
 * XREFs of BgpGxRectangleDestroy @ 0x14095021C
 * Callers:
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14016EFB8 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140192D54 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x140192DD8 (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x14094F848 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14094F98C (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x140950140 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x14095103C (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140951440 (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x14095201C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140952524 (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x140955208 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140955520 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409555A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
