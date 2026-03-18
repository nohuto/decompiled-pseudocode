/*
 * XREFs of BgpGxRectangleDestroy @ 0x14098F254
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1401786D0 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140182CE8 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14019CF7C (BgpGxProcessQrCodeBitmap.c)
 *     BgpGxConvertRectangle @ 0x14019D000 (BgpGxConvertRectangle.c)
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
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 */

__int64 __fastcall BgpGxRectangleDestroy(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
    BgpFwFreeMemory(a1);
  return 0LL;
}
