/*
 * XREFs of BgpGetBitsPerPixel @ 0x140179128
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178D30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140178DC0 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     BgpGxProcessQrCodeBitmap @ 0x14019D6FC (BgpGxProcessQrCodeBitmap.c)
 *     BgpClearScreen @ 0x1403489D0 (BgpClearScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140349DF0 (BgpFwDisplayBugCheckScreen.c)
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     AnFwConfigureProgressResources @ 0x14098E6E4 (AnFwConfigureProgressResources.c)
 *     BgpGxReadRectangle @ 0x14098E9A4 (BgpGxReadRectangle.c)
 *     GxpReadFrameBufferPixels @ 0x14098EA14 (GxpReadFrameBufferPixels.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwpFadeAnimationTimer @ 0x14098F480 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     <none>
 */

__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_14042BFB0 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_14042BFB0 == 5 )
    return 32LL;
  return result;
}
