/*
 * XREFs of BgpGxRectangleDestroy @ 0x14094F21C
 * Callers:
 *     BgpGxDrawRectangle @ 0x14016EE30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14016EEB8 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140179F14 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140192C14 (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x140192C98 (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x14094E848 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14094E98C (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14094EBA8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x14094F140 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x14095003C (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140950440 (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x14095101C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x14095129C (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140951524 (TxtpAddCacheEntry.c)
 *     BgpGxBlendRectangle @ 0x140954208 (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140954520 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409545A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
