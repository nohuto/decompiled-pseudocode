/*
 * XREFs of BgpGxRectangleDestroy @ 0x14098F254
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178D30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140178DC0 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14019D6FC (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x14019D780 (BgpGxConvertRectangle.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpGxParseBitmap @ 0x14098E85C (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x14098F178 (AnFwFadeCompletion.c)
 *     BgpTxtCreateRegion @ 0x140990088 (BgpTxtCreateRegion.c)
 *     AnFwpDisableProgressTimer @ 0x140990490 (AnFwpDisableProgressTimer.c)
 *     BgpTxtDestroyRegion @ 0x14099107C (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     BgpGxBlendRectangle @ 0x14099432C (BgpGxBlendRectangle.c)
 *     BgpGxDrawBitmapImage @ 0x140994648 (BgpGxDrawBitmapImage.c)
 *     BgpTxtDisplayString @ 0x1409946C8 (BgpTxtDisplayString.c)
 *     TxtpDestroyCacheEntry @ 0x1409948F8 (TxtpDestroyCacheEntry.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140178B9C (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
